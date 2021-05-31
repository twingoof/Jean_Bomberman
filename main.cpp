/*
** EPITECH PROJECT, 2021
** B-YEP-400-NAN-4-1-indiestudio-gildas.gonzalez [WSL: Ubuntu-20.04]
** File description:
** main
*/

#include "src/raylib/Window.hpp"

int main(void)
{
    raylib::Window testWindow = raylib::Window::getWindow();

    testWindow.initWindow(800, 800, "Test Window Encapsulation", FLAG_WINDOW_RESIZABLE);
    if (testWindow.isReady()) {
        while (!testWindow.isClosed()) {
            testWindow.beginDrawing();
            DrawText("On print mon texte.", 20, 20, 50, WHITE);
            testWindow.clearW();
            testWindow.endDrawing();
        }
    }
    return (0);
}