/*
** EPITECH PROJECT, 2021
** B-YEP-400-NAN-4-1-indiestudio-gildas.gonzalez [WSL: Ubuntu-20.04]
** File description:
** Raylib
*/

#include "RaylibCore.hpp"

extern "C" void Raylib::createWindow(int width, int height, const std::string &winName)
{
    InitWindow(width, height, winName.c_str());
}

extern "C" bool Raylib::isWindowClosed(void)
{
    return (WindowShouldClose());
}

extern "C" void Raylib::closeWindow(void)
{
    CloseWindow();
}

extern "C" bool Raylib::isWindowReady(void)
{
    return (IsWindowReady());
}

extern "C" bool Raylib::isWindowFullscreen(void)
{
    return (IsWindowFullscreen());
}

extern "C" bool Raylib::isWindowHidden(void)
{
    return (IsWindowHidden());
}

extern "C" bool Raylib::isWindowMinimized(void)
{
    return (IsWindowMinimized());
}

extern "C" bool Raylib::isWindowMaximized(void)
{
    return (IsWindowMaximized());
}

extern "C" bool Raylib::isWindowFocused(void)
{
    return (IsWindowFocused());
}

extern "C" bool Raylib::isWindowResized(void)
{
    return (IsWindowHidden());
}

extern "C" bool Raylib::isWindowState(unsigned int flag)
{
    return (IsWindowState(flag));
}

extern "C" void Raylib::setWindowState(unsigned int flag)
{
    SetWindowState(flag);
}

extern "C" void Raylib::clearWindowState(unsigned int flag)
{
    ClearWindowState(flag);
}

extern "C" void Raylib::toggleFullscreen(void)
{
    ToggleFullscreen();
}

extern "C" void Raylib::maximizeWindow(void)
{
    MaximizeWindow();
}

extern "C" void Raylib::minimizeWindow(void)
{
    MinimizeWindow();
}

extern "C" void Raylib::restoreWindow(void)
{
    RestoreWindow();
}

extern "C" void Raylib::setWindowIcon(Image image)
{
    ;
}

extern "C" void Raylib::setWindowTitle(const std::string &winName)
{
    SetWindowTitle(winName.c_str());
}

extern "C" void Raylib::setWindowPosition(int x, int y)
{
    SetWindowPosition(x, y);
}

extern "C" void Raylib::setWindowMonitor(int monitor)
{
    SetWindowMonitor(monitor);
}

extern "C" void Raylib::setWindowMinSize(int width, int height)
{
    SetWindowMinSize(width, height);
}

extern "C" void Raylib::setWindowSize(int width, int height)
{
    SetWindowSize(width, height);
}

extern "C" int Raylib::getScreenWidth(void)
{
    return (GetScreenWidth());
}

extern "C" int Raylib::getScreenHeight(void)
{
    return (GetScreenHeight());
}

extern "C" int Raylib::getMonitorCount(void)
{
    return (GetMonitorCount());
}

extern "C" int Raylib::getCurrentMonitor(void)
{
    return (GetCurrentMonitor());
}

extern "C" std::tuple<float, float> Raylib::getMonitorPosition(int monitor)
{
    Vector2 monitorPosition = GetMonitorPosition(monitor);

    return (std::make_tuple(monitorPosition.x, monitorPosition.y));
}

extern "C" int Raylib::getMonitorWidth(int monitor)
{
    return (GetMonitorWidth(monitor));
}

extern "C" int Raylib::getMonitorHeight(int monitor)
{
    return (GetMonitorHeight(monitor));
}

extern "C" int Raylib::getMonitorPhysicalWidth(int monitor)
{
    return (GetMonitorPhysicalWidth(monitor));
}

extern "C" int Raylib::getMonitorPhysicalHeight(int monitor)
{
    return (GetMonitorPhysicalHeight(monitor));
}

extern "C" int Raylib::getMonitorRefreshRate(int monitor)
{
    return (GetMonitorRefreshRate(monitor));
}

extern "C" std::tuple<float, float> Raylib::getWindowPosition(void)
{
    Vector2 windowPosition = GetWindowPosition();

    return (std::make_tuple(windowPosition.x, windowPosition.y));
}

extern "C" std::tuple<float, float> Raylib::getWindowScaleDPI(void)
{
    Vector2 windowScaleDPI = GetWindowScaleDPI();

    return (std::make_tuple(windowScaleDPI.x, windowScaleDPI.y));
}

extern "C" const std::string &Raylib::getMonitorName(int monitor)
{
    return (GetMonitorName(monitor));
}

extern "C" void Raylib::setClipboardText(const std::string &text)
{
    SetClipboardText(text.c_str());
}

extern "C" const std::string &Raylib::getClipboardText(void)
{
    return (GetClipboardText());
}

extern "C" void Raylib::showCursor(void)
{
    ShowCursor();
}

extern "C" void Raylib::hideCursor(void)
{
    HideCursor();
}

extern "C" bool Raylib::isCursorHidden(void)
{
    return (IsCursorHidden());
}

extern "C" void Raylib::enableCursor(void)
{
    return (EnableCursor());
}

extern "C" void Raylib::disableCursor(void)
{
    return (DisableCursor());
}

extern "C" bool Raylib::isCursorOnScreen(void)
{
    return (IsCursorOnScreen());
}

extern "C" void Raylib::clearBackground(Color clearedColor)
{
    return (ClearBackground(clearedColor));
}

extern "C" void Raylib::beginDrawing(void)
{
    return (BeginDrawing());
}

extern "C" void Raylib::endDrawing(void)
{
    return (EndDrawing());
}

extern "C" void Raylib::setFPSLimit(int fpsLimit)
{
    return (SetTargetFPS(fpsLimit));
}

extern "C" int Raylib::getFPS(void)
{
    return (GetFPS());
}

extern "C" float Raylib::getFrameTime(void)
{
    return (GetFrameTime());
}

extern "C" double getTime(void)
{
    return (GetTime());
}

extern "C" bool Raylib::isKeyPressed(int keyPressed)
{
    return (IsKeyPressed(keyPressed));
}

extern "C" bool Raylib::isKeyDown(int keyDown)
{
    return (IsKeyDown(keyDown));
}

extern "C" bool Raylib::isKeyReleased(int keyReleased)
{
    return (IsKeyReleased(keyReleased));
}

extern "C" bool Raylib::isKeyUp(int keyUp)
{
    return (IsKeyUp(keyUp));
}

extern "C" void Raylib::setExitKey(int exitKey)
{
    SetExitKey(exitKey);
}

extern "C" int Raylib::getKeyPressed(void)
{
    return (GetKeyPressed());
}

extern "C" int Raylib::getCharPressed(void)
{
    return (GetCharPressed());
}

extern "C" bool Raylib::isGamepadAvailable(int gamepad)
{
    return (IsGamepadAvailable(gamepad));
}

extern "C" bool Raylib::isGamepadName(int gamepad, const std::string &name)
{
    return (IsGamepadName(gamepad, name.c_str()));
}

extern "C" const std::string &Raylib::getGamepadName(int gamepad)
{
    return (GetGamepadName(gamepad));
}

extern "C" bool Raylib::isGamepadButtonPressed(int gamepad, int button)
{
    return (IsGamepadButtonPressed(gamepad, button));
}

extern "C" bool Raylib::isGamepadButtonDown(int gamepad, int button)
{
    return (IsGamepadButtonDown(gamepad, button));
}

extern "C" bool Raylib::isGamepadButtonReleased(int gamepad, int button)
{
    return (IsGamepadButtonReleased(gamepad, button));
}

extern "C" bool Raylib::isGamepadButtonUp(int gamepad, int button)
{
    return (IsGamepadButtonUp(gamepad, button));
}

extern "C" int Raylib::getGamepadButtonPressed(void)
{
    return (GetGamepadButtonPressed());
}

extern "C" int Raylib::getGamepadAxisCount(int gamepad)
{
    return (GetGamepadAxisCount(gamepad));
}

extern "C" float Raylib::getGamepadAxisMovement(int gamepad, int axis)
{
    return (GetGamepadAxisMovement(gamepad, axis));
}

extern "C" int Raylib::setGamepadMappings(const std::string &mappings)
{
    return (SetGamepadMappings(mappings.c_str()));
}

extern "C" bool Raylib::isMouseButtonPressed(int button)
{
    return (IsMouseButtonPressed(button));
}

extern "C" bool Raylib::isMouseButtonDown(int button)
{
    return (IsMouseButtonDown(button));
}

extern "C" bool Raylib::isMouseButtonReleased(int button)
{
    return (IsMouseButtonReleased(button));
}

extern "C" bool Raylib::isMouseButtonUp(int button)
{
    return (IsMouseButtonUp(button));
}

extern "C" int Raylib::getMouseX(void)
{
    return (GetMouseX());
}

extern "C" int Raylib::getMouseY(void)
{
    return (GetMouseY());
}

extern "C" std::tuple<float, float> Raylib::getMousePosition(void)
{
    Vector2 mousePosition = GetMousePosition();

    return (std::make_tuple(mousePosition.x, mousePosition.y));
}

extern "C" void Raylib::setMousePosition(int x, int y)
{
    SetMousePosition(x, y);
}

extern "C" void Raylib::setMouseOffset(int offsetX, int offsetY)
{
    SetMouseOffset(offsetX, offsetY);
}

extern "C" void Raylib::setMouseScale(float scaleX, float scaleY)
{
    SetMouseScale(scaleX, scaleY);
}

extern "C" float Raylib::getMouseWheelMove(void)
{
    return (GetMouseWheelMove());
}

extern "C" void Raylib::setMouseCursor(int cursor)
{
    SetMouseCursor(cursor);
}

extern "C" int Raylib::getTouchX(void)
{
    return (GetTouchX());
}

extern "C" int Raylib::getTouchY(void)
{
    return (GetTouchY());
}

extern "C" std::tuple<float, float> getTouchPosition(int index)
{
    Vector2 touchPosition = GetTouchPosition(index);

    return (std::make_tuple(touchPosition.x, touchPosition.y));
}

extern "C" void Raylib::drawText(const std::string &pText, int posX, int posY, int fontSize, Color textColor)
{
    return (DrawText(pText.c_str(), posX, posY, fontSize, textColor));
}

extern "C" void Raylib::drawCircle(int centerX, int centerY, float radius, Color ballColor)
{
    return (DrawCircle(centerX, centerY, radius, ballColor));
}