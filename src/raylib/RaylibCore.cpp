/*
** EPITECH PROJECT, 2021
** B-YEP-400-NAN-4-1-indiestudio-gildas.gonzalez [WSL: Ubuntu-20.04]
** File description:
** RaylibCore
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

extern "C" void Raylib::beginMode2D(Camera2D camera)
{
    BeginMode2D(camera);
}

extern "C" void Raylib::endMode2D(void)
{
    EndMode2D();
}

extern "C" void Raylib::beginMode3D(Camera3D camera)
{
    BeginMode3D(camera);
}

extern "C" void Raylib::endMode3D(void)
{
    EndMode3D();
}

extern "C" void Raylib::beginTextureMode(RenderTexture2D target)
{
    BeginTextureMode(target);
}

extern "C" void Raylib::endTextureMode(void)
{
    EndTextureMode();
}

extern "C" void Raylib::beginShaderMode(Shader shader)
{
    BeginShaderMode(shader);
}

extern "C" void Raylib::endShaderMode(void)
{
    EndShaderMode();
}

extern "C" void Raylib::beginBlendMode(int mode)
{
    BeginBlendMode(mode);
}

extern "C" void Raylib::endBlendMode(void)
{
    EndBlendMode();
}

extern "C" void Raylib::beginScissorMode(int x, int y, int width, int height)
{
    BeginScissorMode(x, y, width, height);
}

extern "C" void Raylib::endScissorMode(void)
{
    EndScissorMode();
}

extern "C" void Raylib::setGesturesEnabled(unsigned int flags)
{
    SetGesturesEnabled(flags);
}

extern "C" bool Raylib::isGestureDetected(int gesture)
{
    return (IsGestureDetected(gesture));
}

extern "C" int Raylib::getGestureDetected(void)
{
    return (GetGestureDetected());
}

extern "C" int Raylib::getTouchPointsCount(void)
{
    return (GetTouchPointsCount());
}

extern "C" float Raylib::getGestureHoldDuration(void)
{
    return (GetGestureHoldDuration());
}

extern "C" Vector2 Raylib::getGestureDragVector(void)
{
    return (GetGestureDragVector());
}

extern "C" float Raylib::getGestureDragAngle(void)
{
    return (GetGestureDragAngle());
}

extern "C" Vector2 Raylib::getGesturePinchVector(void)
{
    return (GetGesturePinchVector());
}

extern "C" float Raylib::getGesturePinchAngle(void)
{
    return (GetGesturePinchAngle());
}

extern "C" void Raylib::setCameraMode(Camera camera, int mode)
{
    SetCameraMode(camera, mode);
}

extern "C" void Raylib::updateCamera(std::unique_ptr<Camera> camera)
{
    UpdateCamera(camera.get());
}

extern "C" void Raylib::setCameraPanControl(int keyPan)
{
    SetCameraPanControl(keyPan);
}

extern "C" void Raylib::setCameraAltControl(int keyAlt)
{
    SetCameraAltControl(keyAlt);
}

extern "C" void Raylib::setCameraSmoothZoomControl(int keySmoothZoom)
{
    SetCameraSmoothZoomControl(keySmoothZoom);
}

extern "C" void Raylib::setCameraMoveControls(int frontKey, int backKey, int rightKey, int leftKey,
int upKey, int downKey)
{
    SetCameraMoveControls(frontKey, backKey, rightKey, leftKey, upKey, downKey);
}