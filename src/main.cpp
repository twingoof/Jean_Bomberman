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
#include "Controller.hpp"
#include "Text.hpp"
#include "Displacer.hpp"
#include "Renderer2D.hpp"

int main()
{
    raylib::Window &window = raylib::Window::getWindow();
    ECSVector3 pos = {90,90,90};
    ECSVector3 vel = {1, 1, 1};
    Entity e(pos, pos);
    Drawable2D d("Bonjour", {10, 10, 10}, CIRCLE);
    std::vector<Entity> v;
    Renderer2D r;
    Moveable m(e.getPosition());
    Collider c;
    Displacer dbis;
    Controller ctller;

    window.setWindowFPS(60);
    e.addComponent<Drawable2D>(d, DRAWABLE2D);
    e.addComponent<Moveable>(m, MOVEABLE);
    m.setVelocity(vel);
    v.push_back(e);
    window.initWindow(800, 450, "raylib [core] example - basic window", FLAG_WINDOW_RESIZABLE);
    while (!WindowShouldClose()) {
        window.beginDrawing();
            window.clearWindow(RAYWHITE);
//            dbis.moveEntity(e, m.getVelocity());
            ctller.moveEntity(e);
            c.checkWindowCollisiton(e);
            r.draw(v);
        window.endDrawing();
    }
    window.closeWindow();
    return 0;
}