/*
** EPITECH PROJECT, 2021
** B-YEP-400-NAN-4-1-indiestudio-gildas.gonzalez
** File description:
** Window
*/

/**
 * @file Window.hpp
 * @author gildas.gonzalez@epitech.eu; pierrick.prost@epitech.eu; pierrick.prost@epitech.eu; valentin.bouchet@epitech.eu; mathis.ragot@epitech.eu
 * @brief File that contain the Window class
 * @version 0.1
 * @date 2021-06-18
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#ifndef WINDOW_HPP_
#define WINDOW_HPP_

#include "Vector2.hpp"
#include "Camera.hpp"
#include "raylib.h"
#include <string>

namespace raylib {
    /**
     * @class Window Window.hpp "src/raylib/Window.hpp"
     */
    class Window {
        public:
            // Window Encapsulation

            /**
             * @fn static Window &getWindow()
             * @brief Get the Signleton Window object
             * @return Window& Singleton Window
             */
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

            /**
             * @brief Set 2D Mode for a given camera
             * @param actualCam Camera 2D to set 2DMode for
             */
            void begin2DMode(const ::Camera2D &actualCam);

            /**
             * @brief Set 3D Mode for a given camera
             * @param actualCam Camera 3D to set 3DMode for
             */
            void begin3DMode(const ::Camera3D &actualCam);

            /**
             * @brief Set 3D Mode for the set up main camera
             */
            void begin3DMode();

            /**
             * @brief Tells if 2DMode is activated for a camera
             * @return True if 2DMode is enabled, false otherwise
             */
            bool is2DMode() const;

            /**
             * @brief Tells if 3DMode is activated for a camera
             * @return True if 3DMode is enabled, false otherwise
             */
            bool is3DMode() const;

            /**
             * @brief Disable 2DMode
             */
            void end2DMode();

            /**
             * @brief Disable 3DMode
             */
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
             * @brief Set window's minimal dimensions
             * @param minWidth Minimal width
             * @param minHeight Minimal height
             */
            void setWindowMinSize(int minWidth, int minHeight);

            /**
             * @brief Get mouse position on screen
             * @return Vector2 Poisition of the mouse on screen
             */
            ::Vector2 getMousePosition() const;

            /**
             * @brief Minimize window if resizable.
             */
            Window &minimizeWindow();

            /**
             * @brief Get the Factor DPI object
             * @return Vector2
             */
            ::Vector2 getScaleFactorDPI() const;

            /**
             * @brief Get the actual Window width
             * @return int Actual Screen width
             */
            int getWindowWidth();

            /**
             * @brief Get the actual Window height
             * @return int Actual Screen Height
             */
            int getWindowHeight();

            /**
             * @brief Close window.
             */
            void closeWindow();

            ~Window();

            // Audio Device Encapsulation

            /**
             * @brief Initialize Audio for actual window
             */
            void initAudioDevice();

            /**
             * @brief Check if window's audio is properly initialized.
             * @return True if the window's audio is properly initialized, False otherwise
             */
            bool isAudioReady() const;

            /**
             * @brief Set Audio Device volume
             * @param volumeValue Volume to set
             */
            void setMasterVolume(float volumeValue) const;

            /**
             * @brief Stops AudiDevice
             */
            void stopAudioDevice();

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
            bool _2dActivated;
            bool _3dActivated;

            bool _isPhysicInitialized;
            bool _isAudioInitialized;
            bool _isWindowInitialized;
            bool _isInitialized;

            Camera3D _camera;

    };
};

#endif /* !WINDOW_HPP_ */