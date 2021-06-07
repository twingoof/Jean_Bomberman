/*
** EPITECH PROJECT, 2021
** B-YEP-400-NAN-4-1-indiestudio-gildas.gonzalez
** File description:
** Window
*/

#include "Window.hpp"

raylib::Window &raylib::Window::getWindow()
{
    static raylib::Window instance;

    return (instance);
}

raylib::Window::Window() = default;

raylib::Window::~Window()
{
    closeWindow();
}

void raylib::Window::initWindow(const int width, const int height, const std::string &winName, const unsigned int flag)
{
    ::InitWindow(width, height, winName.c_str());
    if (!::IsWindowState(flag))
        ::SetWindowState(flag);
    _isInitialized = true;
}

raylib::Window &raylib::Window::clearState(const unsigned int flag)
{
    ::ClearWindowState(flag);
    return (*this);
}

bool isState(const unsigned int flag)
{
    return (::IsWindowState(flag));
}

bool raylib::Window::isCursorOnScreen(void)
{
    return (::IsCursorOnScreen());
}

void raylib::Window::hideCursor(void)
{
    ::HideCursor();
}

void raylib::Window::showCursor(void)
{
    ::ShowCursor();
}

bool raylib::Window::isCursorHidden(void)
{
    return (::IsCursorHidden());
}

bool raylib::Window::windowShouldClose(void) const
{
    return (::WindowShouldClose());
}

bool raylib::Window::isReady(void) const
{
    return (::IsWindowReady());
}

bool raylib::Window::isFullscreen(void)
{
    _fullscreen = ::IsWindowFullscreen();
    return (_fullscreen);
}

bool raylib::Window::isHidden(void)
{
    _isHidden = ::IsWindowHidden();
    return (_isHidden);
}

bool raylib::Window::isMaximized(void)
{
    return (::IsWindowMaximized());
}

bool raylib::Window::isMinimized(void)
{
    return (::IsWindowMinimized());
}

void raylib::Window::toggleFullscreen(void)
{
    if (_fullscreen)
        _fullscreen = false;
    else
        _fullscreen = true;
    ::ToggleFullscreen();
}

void raylib::Window::beginDrawing(void)
{
    ::BeginDrawing();
    _isDrawing = true;
}

void raylib::Window::endDrawing(void)
{
    ::EndDrawing();
    _isDrawing = false;
}

void raylib::Window::clearWindow(const ::Color &clearedColor) const
{
    ::ClearBackground(clearedColor);
}

int raylib::Window::getWindowFPS(void) const
{
    return (::GetFPS());
}

raylib::Window &raylib::Window::setWindowFPS(const int fpsValue)
{
    ::SetTargetFPS(fpsValue);
    return (*this);
}

raylib::Window &raylib::Window::maximizeWindow(void)
{
    ::MaximizeWindow();
    return (*this);
}

raylib::Window &raylib::Window::minimizeWindow(void)
{
    ::MinimizeWindow();
    return (*this);
}

Vector2 raylib::Window::getScaleFactorDPI(void) const
{
    return (::GetWindowScaleDPI());
}

void raylib::Window::closeWindow(void)
{
    if (_isInitialized)
        ::CloseWindow();
}
