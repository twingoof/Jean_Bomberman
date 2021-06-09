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
#include "Clock.hpp"

int main()
{
    raylib::Window &window = raylib::Window::getWindow();
    ECS::EntityManager man;
    ECS::Renderer r;
    raylib::Camera3D camera((Vector3){0, 20, 20}, (Vector3){0, 0, 0}, (Vector3){0, 1, 0}, 45, CAMERA_PERSPECTIVE);

    window.initWindow(1000, 1000, "Bonjour Jeremy", FLAG_WINDOW_RESIZABLE);
    // man.createEntity("boule", ECSVector3(0, 0, 0), ECSVector3(90, 90, 90));
    man.createEntity("k-ré", {0, 0, 0}, {10, 10, 0});
    man.addDrawable3D("k-ré", ECS::DrawableType::RECT);
    while (!window.windowShouldClose())
    {
        window.beginDrawing();
        window.begin3DMode(camera);
        r.draw(man.getEntities());
        DrawGrid(10, 1.0f);
        window.end3DMode();
        window.endDrawing();
    }
    window.closeWindow();
    return 0;
}