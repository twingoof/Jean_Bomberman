/*
** EPITECH PROJECT, 2021
** B-YEP-400-NAN-4-1-indiestudio-gildas.gonzalez
** File description:
** Window
*/

#ifndef WINDOW_HPP_
#define WINDOW_HPP_

#include "Camera.hpp"
#include "Vector2.hpp"
#include "raylib.h"
#include <string>

namespace raylib {
    class Window {
        public:
            static Window &getWindow();

            /**
             * @brief Create a window with the parameters. Window is created such as stdscr is for NCurses.
             * @param width Window's width
             * @param height Window's height
             * @param winName Window's game
             * @param flag Window's int state value
             */
            void initWindow(const int width, const int height, const std::string &winName, const unsigned int flag);

            /**
             * @brief Clear a state to the Window
             * @param flag Flag to clear
             * @return Reference to this Window class
             */
            Window &clearState(const unsigned int flag);

            /**
             * @brief Check if the state passed as parameter is set
             * @param flag Flag to check
             * @return Boolean telling if the flag is set
             */
            bool isState(const unsigned int flag);

            /**
             * @brief Check if mouse cursor is on the current screen.
             * @return True if the mouse cursor on the current screen, False otherwise
             */
            bool isCursorOnScreen();

            /**
             * @brief Hide mouse cursor.
             */
            void hideCursor();

            /**
             * @brief Show mouse cursor.
             */
            void showCursor();

            /**
             * @brief Check if mouse cursor is hidden.
             * @return True if the mouse cursor is hidden, False otherwise
             */
            bool isCursorHidden(void);

            /**
             * @brief Check if the window is closed or not.
             * @return True if the window is closed, False otherwise
             */
            bool windowShouldClose() const;

            /**
             * @brief Check if window is properly initialized.
             * @return True if the window is properly initialized, False otherwise
             */
            bool isReady() const;

            /**
             * @brief Check if window is in fullscreen mode.
             * @return True if the window is in fullscreen mode, False otherwise
             */
            bool isFullscreen();

            /**
             * @brief Check if window in hidden.
             * @return True if the window is hidden, False otherwise
             */
            bool isHidden();

            /**
             * @brief Check if window is currently maximized.
             * @return True if the window is maximized, False otherwise
             */
            bool isMaximized();

            /**
             * @brief Check if window is currently minimized.
             * @return True if the window is minimized, False otherwise
             */
            bool isMinimized();

            /**
             * @brief Toggle to Fullscreen or to windowed. If fullscreen is on, toggle to windowed. If windowed is on, toggle to fullscreen.
             */
            void toggleFullscreen();

            /**
             * @brief Start drawing.
             */
            void beginDrawing();

            void begin2DMode(const ::Camera2D &actualCam);

            void begin3DMode(const ::Camera3D &actualCam);

            void begin3DMode();

            bool is2DMode() const;

            bool is3DMode() const;

            void end2DMode();

            void end3DMode();

            /**
             * @brief End drawing.
             */
            void endDrawing();

            /**
             * @brief Clear the window's background with the color passed as parameter.
             * @param clearedColor Color clearing the window's background
             */
            void clearWindow(const ::Color &clearedColor = BLACK) const;

            /**
             * @brief Set a FPS limit for the created Window.
             * @param fpsValue Window's Frame Per Second (FPS) Limit
             */
            Window &setWindowFPS(const int fpsValue);

            /**
             * @brief Set window main camera
             * @param raylib::Camera3D Already initialized camera
             */
            void setMainCamera(const raylib::Camera3D &camera);

            /**
             * @brief Retrieve Window FPS Count
             * @return Int FPS Count value
             */
            int getWindowFPS(void) const;

            /**
             * @brief Maximize window if resizable.
             */
            Window &maximizeWindow();

            /**
             * @brief Minimize window if resizable.
             */
            Window &minimizeWindow();

            /**
             * @brief Get the Factor DPI object
             * @return Vector2
             */
            ::Vector2 getScaleFactorDPI() const;

            int getWindowWidth() const;

            int getWindowHeight() const;

            /**
             * @brief Close window.
             */
            void closeWindow();

            ~Window();

        protected:

        private:
            Window();
            Window(const Window &newWindow) = delete;
            Window &operator=(const Window &newWindow) = delete;

            int _width;
            int _height;

            bool _isHidden;
            bool _isDrawing;
            bool _fullscreen;
            bool _isInitialized;
            bool _2dActivated;
            bool _3dActivated;

            Camera3D _camera;

    };
};

#endif /* !WINDOW_HPP_ */