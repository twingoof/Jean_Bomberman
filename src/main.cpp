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
    ECSVector3 pos = {0,0,0};
    ECSVector3 vel = {0, 0, 0};
    Entity e(pos, pos);
    Drawable3D d(DrawableType::CIRCLE, {10, 10, 10});
    std::vector<Entity> v;
    Renderer r;
    raylib::Camera3D camera((Vector3){0, 10, 10}, (Vector3){0, 0, 0}, (Vector3){0, 1, 0}, 45, CAMERA_PERSPECTIVE);

    window.initWindow(1000, 1000, "Bonjour Jeremy", FLAG_WINDOW_RESIZABLE);
    e.addComponent<Drawable3D>(d, DRAWABLE3D);
    v.push_back(e);

    while (!window.windowShouldClose())
    {
        window.beginDrawing();
        window.begin3DMode(camera);
        r.draw(v);
        DrawGrid(10, 1.0f);
        window.end3DMode();
        window.endDrawing();
    }
    

    return 0;
}