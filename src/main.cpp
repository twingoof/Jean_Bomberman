/*
** EPITECH PROJECT, 2021
** indie
** File description:
** TODO: add description
*/

#include "Collider.hpp"
#include "Moveable.hpp"
#include "enum.hpp"
#include "Window.hpp"
#include "Camera.hpp"
#include "Displacer.hpp"
#include "Renderer.hpp"

int main()
{
    raylib::Window &window = raylib::Window::getWindow();
    ECSVector3 pos = {90,90,90};
    ECSVector3 vel = {10, 10, 10};
    Entity e(pos, pos);
    Drawable2D d("BOnjour", {10, 10, 10}, CIRCLE);
    Drawable3D d2("../assets/cat.obj", {0, 0, 0});
    std::vector<Entity> v;
    Renderer r;
    Moveable m(e.getPosition());
    Collider c;
    Displacer dbis;
    raylib::Camera3D camera({50, 50, 50}, {0, 0, 0}, {0, 0, 1}, 75, CAMERA_FREE);

    window.setWindowFPS(60);
    e.addComponent<Drawable3D>(d2, DRAWABLE3D);
    e.addComponent<Moveable>(m, MOVEABLE);
    m.setVelocity(vel);
    v.push_back(e);
    window.initWindow(800, 450, "raylib [core] example - basic window", FLAG_WINDOW_RESIZABLE);
    while (!WindowShouldClose()) {
        camera.update();
        window.beginDrawing();
        window.clearWindow(WHITE);
        window.begin3DMode(camera);
        r.draw(v);
        window.end3DMode();
        window.endDrawing();
    }
    window.closeWindow();
    return 0;
}