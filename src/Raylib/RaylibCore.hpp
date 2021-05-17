/*
** EPITECH PROJECT, 2021
** B-YEP-400-NAN-4-1-indiestudio-gildas.gonzalez [WSL: Ubuntu-20.04]
** File description:
** RaylibCore
*/

#ifndef RAYLIB_HPP_
#define RAYLIB_HPP_

#include "raylib.h"
#include <string>
#include <memory>

/**
 * @namespace Raylib
 */
namespace Raylib {

    /**
     * @brief Create a window with the parameters. Window is created such as stdscr is for NCurses.
     * @param width Window's width
     * @param height Window's height
     * @param winName Window's game
     */
    extern "C" void createWindow(int width, int height, const std::string &winName);

    /**
     * @brief Check if the window is closed or not.
     * @return True if the window is closed, False otherwise
     */
    extern "C" bool isWindowClosed(void);

    /**
     * @brief Close window.
     */
    extern "C" void closeWindow(void);

    /**
     * @brief Check if window is properly initialized.
     * @return True if the window is properly initialized, False otherwise
     */
    extern "C" bool isWindowReady(void);

    /**
     * @brief Check if window is in fullscreen mode.
     * @return True if the window is in fullscreen mode, False otherwise
     */
    extern "C" bool isWindowFullscreen(void);

    /**
     * @brief Check if window in hidden.
     * @return True if the window is hidden, False otherwise
     */
    extern "C" bool isWindowHidden(void);

    /**
     * @brief Check if window is currently minimized.
     * @return True if the window is minimized, False otherwise
     */
    extern "C" bool isWindowMinimized(void);

    /**
     * @brief Check if window is currently maximized.
     * @return True if the window is maximized, False otherwise
     */
    extern "C" bool isWindowMaximized(void);

    /**
     * @brief Check if window is currently focused.
     * @return True if the window is focused, False otherwise
     */
    extern "C" bool isWindowFocused(void);

    /**
     * @brief Check if window has been resized since last frame.
     * @return True if the window has been resized, False otherwise
     */
    extern "C" bool isWindowResized(void);

    /**
     * @brief Check if window flag has been enabled.
     * @return True if the flag is enabled, False otherwise
     */
    extern "C" bool isWindowState(unsigned int flag);

    /**
     * @brief Set the specific window flag passed as parameter.
     * @param flag Flag to set for the current window
     */
    extern "C" void setWindowState(unsigned int flag);

    /**
     * @brief Remove the specific window flag passed as parameter.
     * @param flag Flag to remove of the current window
     */
    extern "C" void clearWindowState(unsigned int flag);

    /**
     * @brief Toggle to Fullscreen or to windowed. If fullscreen is on, toggle to windowed. If windowed is on, toggle to fullscreen.
     */
    extern "C" void toggleFullscreen(void);

    /**
     * @brief Maximize window if resizable.
     */
    extern "C" void maximizeWindow(void);

    /**
     * @brief Minimize window if resizable.
     */
    extern "C" void minimizeWindow(void);

    /**
     * @brief Restore to not minimized / maximized.
     */
    extern "C" void restoreWindow(void);

    /**
     * @brief Set icon for window.
     */
    extern "C" void setWindowIcon(Image image);

    /**
     * @brief Set title for window.
     * @param winName Window's name to set
     */
    extern "C" void setWindowTitle(const std::string &winName);

    /**
     * @brief Set window position on screen.
     * @param x Window's x position on screen
     * @param y Window's y position on screen
     */
    extern "C" void setWindowPosition(int x, int y);

    extern "C" void setWindowMonitor(int monitor);

    /**
     * @brief Set window minimum dimensions.
     * @param width Window's minimum width
     * @param height Window's minimum height
     */
    extern "C" void setWindowMinSize(int width, int height);

    /**
     * @brief Set window dimensions.
     * @param width Window's width
     * @param height Window's height
     */
    extern "C" void setWindowSize(int width, int height);

    /**
     * @brief Get current screen width.
     * @return Screen width
     */
    extern "C" int getScreenWidth(void);

    /**
     * @brief Get current screen height.
     * @return Screen height
     */
    extern "C" int getScreenHeight(void);

    /**
     * @brief Get the number of connected monitors.
     * @return Number of connected monitors
     */
    extern "C" int getMonitorCount(void);

    /**
     * @brief Get the current connected monitors.
     * @return Connected monitor's ID
     */
    extern "C" int getCurrentMonitor(void);

    extern "C" std::tuple<float, float> getMonitorPosition(int monitor);

    /**
     * @brief Get specified monitor width.
     * @param monitor Monitor's ID
     * @return Screen width
     */
    extern "C" int getMonitorWidth(int monitor);

    /**
     * @brief Get specified monitor height.
     * @param monitor Monitor's ID
     * @return Screen height
     */
    extern "C" int getMonitorHeight(int monitor);

    /**
     * @brief Get specified monitor physical width.
     * @param monitor Monitor's ID
     * @return Screen width in millimeters
     */
    extern "C" int getMonitorPhysicalWidth(int monitor);

    /**
     * @brief Get specified monitor physical height.
     * @param monitor Monitor's ID
     * @return Screen height in millimeters
     */
    extern "C" int getMonitorPhysicalHeight(int monitor);

    /**
     * @brief Get specified monitor refresh rate.
     * @param monitor Monitor's ID
     * @return Refresh rate value
     */
    extern "C" int getMonitorRefreshRate(int monitor);

    /**
     * @brief Get window's position on current monitor.
     * @return Tuple of position x and y
     */
    extern "C" std::tuple<float, float> getWindowPosition(void);

    /**
     * @brief Get window's DPI factor on current monitor.
     * @return Tuple of DPI factor x and y
     */
    extern "C" std::tuple<float, float> getWindowScaleDPI(void);

    /**
     * @brief Get current monitor's name.
     * @param monitor Monitor's ID
     * @return Current monitor's name
     */
    extern "C" const std::string &getMonitorName(int monitor);

    /**
     * @brief Set a text to clipboard.
     * @param text Text to set to clipboard text
     */
    extern "C" void setClipboardText(const std::string &text);

    /**
     * @brief Get a text to clipboard.
     * @return Clipboard text
     */
    extern "C" const std::string &getClipboardText(void);

    /**
     * @brief Show mouse cursor.
     */
    extern "C" void showCursor(void);

    /**
     * @brief Hide mouse cursor.
     */
    extern "C" void hideCursor(void);

    /**
     * @brief Check if mouse cursor is hidden.
     * @return True if the mouse cursor is hidden, False otherwise
     */
    extern "C" bool isCursorHidden(void);

    /**
     * @brief Enables cursor.
     */
    extern "C" void enableCursor(void);

    /**
     * @brief Disable cursor.
     */
    extern "C" void disableCursor(void);

    /**
     * @brief Check if mouse cursor is on the current screen.
     * @return True if the mouse cursor on the current screen, False otherwise
     */
    extern "C" bool isCursorOnScreen(void);

    /**
     * @brief Clear the window's background with the color passed as parameter.
     * @param clearedColor Color clearing the window's background
     */
    extern "C" void clearBackground(Color clearedColor);

    /**
     * @brief Start drawing.
     */
    extern "C" void beginDrawing(void);

    /**
     * @brief End drawing.
     */
    extern "C" void endDrawing(void);

    /**
     * @brief Set a FPS limit for the created Window.
     * @param fpsLimit Window's Frame Per Second (FPS) Limit
     */
    extern "C" void setFPSLimit(int fpsLimit);

    /**
     * @brief Get the current FPS.
     * @return Current FPS
     */
    extern "C" int getFPS(void);

    /**
     * @brief Get the time in seconds for the last frame drawn.
     * @return Time in seconds
     */
    extern "C" float getFrameTime(void);

    /**
     * @brief Return elapsed time in seconds since InitWindow() fonction call.
     * @return Elasped time in seconds
     */
    extern "C" double getTime(void);

    /**
     * @brief Say if the key is pressed once.
     * @return True if the key is pressed, False otherwise
     */
    extern "C" bool isKeyPressed(int keyPressed);

    /**
     * @brief Say if the key is maintained pressed.
     * @return True if the key is pressed, False otherwise
     */
    extern "C" bool isKeyDown(int keyDown);

    /**
     * @brief Say if the key is released once.
     * @return True if the key is released, False otherwise
     */
    extern "C" bool isKeyReleased(int keyReleased);

    /**
     * @brief Say if the key is maintained released.
     * @return True if the key is released, False otherwise
     */
    extern "C" bool isKeyUp(int keyUp);

    /**
     * @brief Set a custom key to exit program. Default is ESC (Escape).
     * @param exitKey Key to exit program
     */
    extern "C" void setExitKey(int exitKey);

    /**
     * @brief Get key pressed (keycode), call it multiple times for keys queued.
     * @return Key pressed code
     */
    extern "C" int getKeyPressed(void);

    /**
     * @brief Get char pressed (unicode), call it multiple times for chars queued.
     * @return Key pressed code
     */
    extern "C" int getCharPressed(void);

    /**
     * @brief Detect if a gamepad is available.
     * @param gamepad Gamepad ID
     * @return Yes if gamepad is available, False otherwise
     */
    extern "C" bool isGamepadAvailable(int gamepad);

    /**
     * @brief Check gamepad name (if available).
     * @param gamepad Gamepad ID
     * @param name Gamepad name to check
     * @return Yes if gamepad name is the good one, False otherwise
     */
    extern "C" bool isGamepadName(int gamepad, const std::string &name);

    /**
     * @brief Return gamepad internal name id.
     * @param gamepad Gamepad ID
     * @return Gamepas internal name id
     */
    extern "C" const std::string &getGamepadName(int gamepad);

    /**
     * @brief Detect if a gamepad button has been pressed once.
     * @param gamepad Gamepad ID
     * @param button Button pressed to check
     * @return Yes if gamepad button is pressed once, False otherwise
     */
    extern "C" bool isGamepadButtonPressed(int gamepad, int button);

    /**
     * @brief Detect if a gamepad button is being maintained pressed.
     * @param gamepad Gamepad ID
     * @param button Button pressed to check
     * @return Yes if gamepad button is pressed, False otherwise
     */
    extern "C" bool isGamepadButtonDown(int gamepad, int button);

    /**
     * @brief Detect if a gamepad button has been released once.
     * @param gamepad Gamepad ID
     * @param button Button pressed to check
     * @return Yes if gamepad button is released once, False otherwise
     */
    extern "C" bool isGamepadButtonReleased(int gamepad, int button);

    /**
     * @brief Detect if a gamepad button is NOT being pressed.
     * @param gamepad Gamepad ID
     * @param button Button pressed to check
     * @return Yes if gamepad button is not pressed, False otherwise
     */
    extern "C" bool isGamepadButtonUp(int gamepad, int button);

    /**
     * @brief Get the last gamepad button pressed.
     * @return Last gamepad pressed button code
     */
    extern "C" int getGamepadButtonPressed(void);

    /**
     * @brief Return gamepad axis count for a gamepad.
     * @param gamepad Gamepad ID
     * @return Gamepas axis count for gamepas given as parameter
     */
    extern "C" int getGamepadAxisCount(int gamepad);

    /**
     * @brief Return axis movement value for a gamepad axis.
     * @param gamepad Gamepad ID
     * @param axis Gamepad axis
     * @return Axis movement value
     */
    extern "C" float getGamepadAxisMovement(int gamepad, int axis);

    /**
     * @brief Set internal gamepad mappings (SDL_GameControllerDB).
     * @param mappings Internal gamepad mappings to set
     * @return SDL_GameControllerDB return value
     */
    extern "C" int setGamepadMappings(const std::string &mappings);

    /**
     * @brief Detect if a mouse button has been pressed once.
     * @param button Mouse button code
     * @return True if mouse button is pressed once, False otherwise
     */
    extern "C" bool isMouseButtonPressed(int button);

    /**
     * @brief Detect if a mouse button is being pressed.
     * @param button Mouse button code
     * @return True if mouse button is pressed, False otherwise
     */
    extern "C" bool isMouseButtonDown(int button);

    /**
     * @brief Detect if a mouse button has been released once.
     * @param button Mouse button code
     * @return True if mouse button is released once, False otherwise
     */
    extern "C" bool isMouseButtonReleased(int button);

    /**
     * @brief Detect if a mouse button is NOT being pressed.
     * @param button Mouse button code
     * @return True if mouse button is NOT pressed, False otherwise
     */
    extern "C" bool isMouseButtonUp(int button);

    /**
     * @brief Returns mouse position X.
     * @return Mouse's X Position
     */
    extern "C" int getMouseX(void);

    /**
     * @brief Returns mouse position Y.
     * @return Mouse's Y Position
     */
    extern "C" int getMouseY(void);

    /**
     * @brief Returns mouse position X and Y.
     * @return Mouse's X and Y Position
     */
    extern "C" std::tuple<float, float> getMousePosition(void);

    /**
     * @brief Set mouse position XY.
     * @param x X Position
     * @param y Y Position
     */
    extern "C" void setMousePosition(int x, int y);

    /**
     * @brief Set mouse offset.
     * @param x X Offset
     * @param y Y Offset
     */
    extern "C" void setMouseOffset(int offsetX, int offsetY);

    /**
     * @brief Set mouse scaling.
     * @param scaleX X Scale factor
     * @param scaleY Y Scale factor
     */
    extern "C" void setMouseScale(float scaleX, float scaleY);

    /**
     * @brief Returns mouse wheel movement Y.
     * @return Mouse wheel Y movement
     */
    extern "C" float getMouseWheelMove(void);

    /**
     * @brief Set mouse cursor.
     * @param cursor Cursor ID code
     */
    extern "C" void setMouseCursor(int cursor);

    /**
     * @brief Returns touch position X for touch point 0 (relative to screen size).
     * @return Touch position X for touch point 0
     */
    extern "C" int getTouchX(void);

    /**
     * @brief Returns touch position Y for touch point 0 (relative to screen size).
     * @return Touch position Y for touch point 0
     */
    extern "C" int getTouchY(void);

    /**
     * @brief Returns touch position X and Y for touch point 0 (relative to screen size).
     * @return Touch position X and Y for touch point 0
     */
    extern "C" std::tuple<float, float> getTouchPosition(int index);

    // Camera handling functions

    /**
     * @brief Begin 2D Mode
     * @param camera Camera to start 2D Mode
     */
    extern "C" void beginMode2D(Camera2D camera);

    /**
     * @brief End 2D Mode
     */
    extern "C" void endMode2D(void);

    /**
     * @brief Begin 3D Mode
     * @param camera Camera to start 3D Mode
     */
    extern "C" void beginMode3D(Camera3D camera);

    /**
     * @brief End 3D Mode
     */
    extern "C" void endMode3D(void);

    /**
     * @brief Begin Texture Mode
     * @param target 2D Texture to start Texture Mode with
     */
    extern "C" void beginTextureMode(RenderTexture2D target);

    /**
     * @brief End Texture Mode
     */
    extern "C" void endTextureMode(void);

    /**
     * @brief Begin Shader Mode
     * @param shader Shader to start Shader mode with
     */
    extern "C" void beginShaderMode(Shader shader);

    /**
     * @brief End shader mode
     */
    extern "C" void endShaderMode(void);

    /**
     * @brief Begin blend mode with specific mode
     * @param mode Blend mode
     */
    extern "C" void beginBlendMode(int mode);

    /**
     * @brief End blend mode
     */
    extern "C" void endBlendMode(void);

    /**
     * @brief Begin scissor mode
     * @param x X position
     * @param y Y position
     * @param width Scissor Mode width
     * @param height Scissor Mode height
     */
    extern "C" void beginScissorMode(int x, int y, int width, int height);

    /**
     * @brief End Scissor mode
     */
    extern "C" void endScissorMode(void);

    // Gestures and Touch Handling Functions (Module: gestures)

    /**
     * @brief Enable a set of gestures using flags
     * @param flags Flag index
     */
    extern "C" void setGesturesEnabled(unsigned int flags);

    /**
     * @brief Check if a gesture have been detected
     * @param gesture Gesture ID to detect
     * @return True if gesture is detected, False otherwise
     */
    extern "C" bool isGestureDetected(int gesture);

    /**
     * @brief Get latest detected gesture
     * @return Gesture ID
     */
    extern "C" int getGestureDetected(void);

    /**
     * @brief Get touch points count
     * @return Touch points count
     */
    extern "C" int getTouchPointsCount(void);

    /**
     * @brief Get gesture hold time in milliseconds
     * @return Gesture hold time in milliseconds
     */
    extern "C" float getGestureHoldDuration(void);

    /**
     * @brief Get gesture drag vector
     * @return Gesture drag vector
     */
    extern "C" Vector2 getGestureDragVector(void);

    /**
     * @brief Get gesture drag angle
     * @return Gesture drag angle
     */
    extern "C" float getGestureDragAngle(void);

    /**
     * @brief Get gesture pinch delta
     * @return Gesture pinch delta
     */
    extern "C" Vector2 getGesturePinchVector(void);

    /**
     * @brief Get gesture pinch angle
     * @return Gesture pinch angle
     */
    extern "C" float getGesturePinchAngle(void);

    // Camera System Functions (Module: camera)

    /**
     * @brief Set camera mode (multiple camera modes available)
     * @param camera Camera object
     * @param mode Camera mode to set
     */
    extern "C" void setCameraMode(Camera camera, int mode);

    /**
     * @brief Update camera position for selected mode
     * @param camera Pointer to a camera object
     */
    extern "C" void updateCamera(std::unique_ptr<Camera> camera);

    /**
     * @brief Set camera pan key to combine with mouse movement (free camera)
     * @param keyPan Pan key to be set
     */
    extern "C" void setCameraPanControl(int keyPan);

    /**
     * @brief Set camera alt key to combine with mouse movement (free camera)
     * @param keyAlt Alt key to be set
     */
    extern "C" void setCameraAltControl(int keyAlt);

    /**
     * @brief Set camera smooth zoom key to combine with mouse (free camera)
     * @param keySmoothZoom Smooth zoom key to be set
     */
    extern "C" void setCameraSmoothZoomControl(int keySmoothZoom);

    /**
     * @brief Set camera move controls (1st person and 3rd person cameras)
     * @param frontKey Front key to be set
     * @param backkey Back key to be set
     * @param rightKey Right key to be set
     * @param leftKey Left key to be set
     * @param upKey Up key to be set
     * @param downKey Down key to be set
     */
    extern "C" void setCameraMoveControls(int frontKey, int backKey,
    int rightKey, int leftKey,
    int upKey, int downKey);

}

#endif /* !RAYLIB_HPP_ */
