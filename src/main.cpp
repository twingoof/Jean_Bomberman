/*
** EPITECH PROJECT, 2021
** indie
** File description:
** main
*/

#include "Window.hpp"
#include "Camera.hpp"

int main() {
    raylib::Window window = raylib::Window::getWindow();

    window.initWindow(1000, 1000, "aled", FLAG_WINDOW_RESIZABLE);
    window.setWindowFPS(30);

    Vector3 pos2 = {20, 20, 20};
    Vector3 target = {0, 0, 0};
    Vector3 up = {0, 1, 0};
    Vector3 cubePosition = { 0.0f, 0.0f, 0.0f };

    raylib::Camera3D cam(pos2, target, up, 45, CAMERA_PERSPECTIVE);

    while (!window.windowShouldClose()) {
        window.beginDrawing();

        window.clearWindow(BLUE);
        cam.update();
        cam.setMode(CAMERA_FREE);
        BeginMode3D(cam);

        DrawCube(cubePosition, 2.0f, 2.0f, 2.0f, PINK);
        DrawCubeWires(cubePosition, 2.0f, 2.0f, 2.0f, MAROON);

        DrawGrid(10, 1.0f);

        EndMode3D();
        window.endDrawing();

    }

    window.closeWindow();
}