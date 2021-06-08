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
#include "EntityManager.hpp"

int main()
{
    /*raylib::Window &win = raylib::Window::getWindow();
    EntityManager scene;
    Renderer r;
    Collider c;
    Displacer d;
    Controller ct;
    ECS::Clock clock;
    Camera camera = {0};

    scene.createEntity("boule", {90, 90, 90}, {10, 10, 10});
    scene.addMoveable("boule");
    scene.addDrawable3D("boule", CIRCLE);
    camera.position = (Vector3){ 0.0f, 10.0f, 10.0f };
    camera.target = (Vector3){ 0.0f, 0.0f, 0.0f };
    camera.up = (Vector3){ 0.0f, 1.0f, 0.0f };
    camera.fovy = 45.0f;
    camera.projection = CAMERA_PERSPECTIVE;
    win.initWindow(1000, 1000, "Démo", FLAG_WINDOW_RESIZABLE);
    clock.startClock();
    while (!WindowShouldClose()) {
        win.beginDrawing();
        win.begin3DMode(camera);
        win.clearWindow(RAYWHITE);
        if (clock.getTimeElapsed() >= 0.06) {
            ct.moveEntity(scene.getEntity("boule"));
            d.moveEntity(scene.getEntity("boule"));
            c.checkCollision(scene);
            clock.restartClock();
        }
        r.draw({scene.getEntity("boule")});
        win.endDrawing();
        win.end3DMode();
    }
    win.closeWindow();
    return 0;*/
}