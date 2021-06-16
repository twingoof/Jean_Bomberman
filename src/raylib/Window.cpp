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

raylib::Window::~Window() = default;

void raylib::Window::initWindow(const int width, const int height, const std::string &winName, const unsigned int flag)
{
    ::InitWindow(width, height, winName.c_str());
    if (!::IsWindowState(flag))
        ::SetWindowState(flag);
    _width = width;
    _height = height;
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

void raylib::Window::begin2DMode(const ::Camera2D &actualCamera)
{
    if (_isDrawing && !_3dActivated) {
        ::BeginMode2D(actualCamera);
        _2dActivated = true;
    }
}

void raylib::Window::begin3DMode(const ::Camera3D &actualCamera)
{
    if (_isDrawing && !_2dActivated) {
        ::BeginMode3D(actualCamera);
        _3dActivated = true;
    }
}

void raylib::Window::begin3DMode()
{
    if (_isDrawing && !_2dActivated) {
        ::BeginMode3D(this->_camera);
        _3dActivated = true;
    }
}

bool raylib::Window::is2DMode(void) const
{
    return (_2dActivated);
}

bool raylib::Window::is3DMode(void) const
{
    return (_3dActivated);
}

void raylib::Window::end2DMode(void)
{
    if (_2dActivated) {
        ::EndMode2D();
        _2dActivated = false;
    }
}

void raylib::Window::end3DMode(void)
{
    if (_3dActivated) {
        ::EndMode3D();
        _3dActivated = false;
    }
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

::Vector2 raylib::Window::getScaleFactorDPI(void) const
{
    return (::GetWindowScaleDPI());
}

int raylib::Window::getWindowWidth(void) const
{
    return (_width);
}

int raylib::Window::getWindowHeight(void) const
{
    return (_height);
}

void raylib::Window::closeWindow(void)
{
    if (_isInitialized)
        ::CloseWindow();
}

void raylib::Window::setMainCamera(const raylib::Camera3D &camera)
{
    this->_camera = camera;
}