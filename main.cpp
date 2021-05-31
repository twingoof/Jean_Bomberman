/*
** EPITECH PROJECT, 2021
** B-YEP-400-NAN-4-1-indiestudio-gildas.gonzalez [WSL: Ubuntu-20.04]
** File description:
** main
*/

#include "src/raylib/Window.hpp"
#include "src/raylib/Text.hpp"
#include "src/raylib/Font.hpp"

int main(void)
{
    raylib::Window testWindow = raylib::Window::getWindow();
    raylib::Font testFont;

    testWindow.initWindow(800, 800, "Test Window Encapsulation", FLAG_WINDOW_RESIZABLE);
    if (testWindow.isReady()) {
        while (!testWindow.isClosed()) {
            testWindow.beginDrawing();
            raylib::DrawText(testFont, "On print mon texte.", {20, 20}, 50, WHITE);
            testWindow.clearW();
            testWindow.endDrawing();
        }
    }
    return (0);
}