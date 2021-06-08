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
#include "clock/Clock.hpp"

int main()
{
    raylib::Window &window = raylib::Window::getWindow();
    ECSVector3 pos = {90,90,90};
    ECSVector3 vel = {0, 0, 0};
    Entity e(pos, pos);
    Drawable2D d("Bonjour", {10, 10, 10}, CIRCLE);
    std::vector<Entity> v;
    Renderer2D r;
    Moveable m(e.getPosition());
    Collider c;
    Displacer dbis;
    Controller ctller;
    ECS::Clock clock;

    Camera camera = { 0 };
    camera.position = (Vector3){ 0.0f, 10.0f, 10.0f };
    camera.target = (Vector3){ 0.0f, 0.0f, 0.0f };
    camera.up = (Vector3){ 0.0f, 1.0f, 0.0f };
    camera.fovy = 45.0f;
    camera.projection = CAMERA_PERSPECTIVE;

    window.initWindow(1000, 1000, "Bonjour Jeremy", FLAG_WINDOW_RESIZABLE);
    e.addComponent<Drawable3D>(d, DRAWABLE3D);
    v.push_back(e);
    window.initWindow(800, 450, "raylib [core] example - basic window", FLAG_WINDOW_RESIZABLE);
    clock.startClock();
    while (!WindowShouldClose()) {
        window.beginDrawing();
            window.clearWindow(RAYWHITE);
        //            dbis.moveEntity(e, m.getVelocity());
            if (clock.getTimeElapsed() >= 0.06) {
                ctller.moveEntity(e);
                dbis.moveEntity(e);
                clock.restartClock();
            }
            c.checkWindowCollisiton(e);
            r.draw(v);
        window.endDrawing();
    }
    window.closeWindow();

    return 0;
}