/*
** EPITECH PROJECT, 2021
** indie
** File description:
** TODO: add description
*/

#include "Collider.hpp"
#include "Moveable.hpp"
#include "enum.hpp"
#include "Drawable3D.hpp"
#include "Window.hpp"
#include "Camera.hpp"
#include "Displacer.hpp"
#include "Renderer.hpp"
#include "Controller.hpp"
#include "Text.hpp"
#include "Displacer.hpp"
#include "MapGenerator.hpp"

int main()
{
    MapGenerator map(30, 30);
    raylib::Window &window = raylib::Window::getWindow();
    raylib::Camera3D camera((Vector3){0, 70, 35}, (Vector3){0, 0, 0},
                            (Vector3){0, 1, 0}, 45, CAMERA_PERSPECTIVE);
    std::vector<ECS::Entity> mapEntities;
    ECS::Renderer r;

    window.initWindow(1920, 1080, "Bonjour Jeremy", FLAG_WINDOW_RESIZABLE);
    while (!window.windowShouldClose())
    {
        window.beginDrawing();
        window.begin3DMode(camera);
        window.clearWindow(RAYWHITE);
        DrawGrid(50, 1.0f);
        map.drawMap();
        window.end3DMode();
        window.endDrawing();
    }
    window.closeWindow();
    return 0;
}