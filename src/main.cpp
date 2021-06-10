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
    raylib::Window &window = raylib::Window::getWindow();
    raylib::Camera3D camera((Vector3){0, 70, 35}, (Vector3){0, 0, 0}, (Vector3){0, 1, 0}, 45, CAMERA_PERSPECTIVE);
    std::vector<ECS::Entity> mapEntities;
    ECS::Renderer r;

    window.initWindow(1000, 1000, "Bonjour Jeremy", FLAG_WINDOW_RESIZABLE);
    man.createEntity("boule", ECS::Vector3<float> {0, 0, 0}, ECS::Vector3<int> {50, 50, 50});
    man.addDrawable3D("boule", ECS::CIRCLE);
    // man.createEntity("k-ré", {0, 0, 0}, {10, 10, 0});
    // man.addDrawable3D("k-ré", ECS::DrawableType::RECT);
    while (!window.windowShouldClose())
    {
        window.beginDrawing();
        window.begin3DMode(camera);
        window.clearWindow(RAYWHITE);
        r.draw(man.getEntities());
        DrawGrid(10, 1.0f);
        window.end3DMode();
        window.endDrawing();
    }
    window.closeWindow();
    return 0;
}