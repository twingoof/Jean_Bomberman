/*
** EPITECH PROJECT, 2021
** B-YEP-400-NAN-4-1-indiestudio-gildas.gonzalez
** File description:
** Window
*/

#ifndef WINDOW_HPP_
#define WINDOW_HPP_

#include "raylib.h"
#include <string>

class Window {
    public:
        static Window &getWindow();

        /**
         * @brief Create a window with the parameters. Window is created such as stdscr is for NCurses.
         * @param width Window's width
         * @param height Window's height
         * @param winName Window's game
         */
        void initWindow(const int width, const int height, const std::string &winName);

        /**
         * @brief Check if mouse cursor is on the current screen.
         * @return True if the mouse cursor on the current screen, False otherwise
         */
        bool isCursorOnScreen();

        /**
         * @brief Check if the window is closed or not.
         * @return True if the window is closed, False otherwise
         */
        bool isClosed() const;

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
         * @brief End drawing.
         */
        void endDrawing();

        /**
         * @brief Clear the window's background with the color passed as parameter.
         * @param clearedColor Color clearing the window's background
         */
        void clearW() const;

        /**
         * @brief Set a FPS limit for the created Window.
         * @param fpsValue Window's Frame Per Second (FPS) Limit
         */
        Window &setWindowFPS(const int fpsValue);

        /**
         * @brief Maximize window if resizable.
         */
        Window &maximizeWindow();

        /**
         * @brief Minimize window if resizable.
         */
        Window &minimizeWindow();

        /**
         * @brief Close window.
         */
        void closeW();

        ~Window();

    protected:

    private:
        Window();

        bool _isHidden;
        bool _isDrawing;
        bool _fullscreen;
        bool _isInitialized;

};

#endif /* !WINDOW_HPP_ */