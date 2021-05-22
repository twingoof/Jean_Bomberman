/*
** EPITECH PROJECT, 2021
** B-YEP-400-NAN-4-1-indiestudio-gildas.gonzalez
** File description:
** Window
*/

#include "Window.hpp"

Window &Window::getWindow()
{
    static Window instance;

    return (instance);
}

Window::Window()
{}

Window::~Window()
{
    closeW();
}

void Window::initWindow(const int width, const int height, const std::string &winName)
{
    ::InitWindow(width, height, winName.c_str());
    _isInitialized = true;
}

bool Window::isCursorOnScreen(void)
{
    return (::IsCursorOnScreen());
}

bool Window::isClosed(void) const
{
    return (::WindowShouldClose());
}

bool Window::isReady(void) const
{
    return (::IsWindowReady());
}

bool Window::isFullscreen(void)
{
    _fullscreen = ::IsWindowFullscreen();
    return (_fullscreen);
}

bool Window::isHidden(void)
{
    _isHidden = ::IsWindowHidden();
    return (_isHidden);
}

bool Window::isMaximized(void)
{
    return (::IsWindowMaximized());
}

bool Window::isMinimized(void)
{
    return (::IsWindowMinimized());
}

void Window::toggleFullscreen(void)
{
    if (_fullscreen)
        _fullscreen = false;
    else
        _fullscreen = true;
    ::ToggleFullscreen();
}

void Window::beginDrawing(void)
{
    ::BeginDrawing();
    _isDrawing = true;
}

void Window::endDrawing(void)
{
    ::EndDrawing();
    _isDrawing = false;
}

void Window::clearW(void) const
{
    ::ClearBackground(BLACK);
}

Window &Window::setWindowFPS(const int fpsValue)
{
    ::SetTargetFPS(fpsValue);
    return (*this);
}

Window &Window::maximizeWindow(void)
{
    MaximizeWindow();
    return (*this);
}

Window &Window::minimizeWindow(void)
{
    MinimizeWindow();
    return (*this);
}

void Window::closeW(void)
{
    if (_isInitialized)
        ::CloseWindow();
}
