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
#include "Transform.hpp"

int main()
{
    raylib::Window &window = raylib::Window::getWindow();
    raylib::Camera3D camera((Vector3){20, 20, 20}, (Vector3){0, 0, 0}, (Vector3){0, 1, 0}, 45, CAMERA_PERSPECTIVE);
    std::vector<ECS::Entity> mapEntities;
    ECS::Renderer r;
    ECS::Entity e("boule");
    ECS::Transform t({0.0f, 0.0f, 0.0f}, {10, 10, 10});
    ECS::Drawable3D d(ECS::RECT, t.getSize());
    std::vector<std::reference_wrapper<ECS::Entity>> v;

    e.addComponent<ECS::Drawable3D>(d, ECS::DRAWABLE3D);
    e.addComponent<ECS::Transform>(t, ECS::TRANSFORM);
    v.push_back(e);
    window.initWindow(1000, 1000, "Bonjour Jeremy", FLAG_WINDOW_RESIZABLE);
    while (!window.windowShouldClose())
    {
        window.beginDrawing();
        window.begin3DMode(camera);
        window.clearWindow(RAYWHITE);
        r.draw(v);
        DrawGrid(10, 1.0f);
        window.end3DMode();
        window.endDrawing();
    }
    window.closeWindow();
    return 0;
}