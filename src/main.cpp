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

int main()
{
    raylib::Window &window = raylib::Window::getWindow();
    
    ECSVector3 pos = {250, 250, 0};
    ECSVector3 siz = {900, 900, 900};

    Entity e(pos, siz);
    Drawable3D d(CIRCLE, siz);

    Renderer r;
    Camera3D c;    
    std::vector<Entity> v;

    c.fovy = 45;
    c.position = {0, 0, 0};
    c.projection = 0;
    c.target = {250, 250, 250};
    c.up = {0, 1, 0};

    window.initWindow(500, 500, "Bonjour Jeremy", FLAG_WINDOW_RESIZABLE);
    e.addComponent<Drawable3D>(d, DRAWABLE3D);
    SetCameraMode(c, CAMERA_FREE);
    v.push_back(e);
    window.setWindowFPS(30);
    while (!window.windowShouldClose())
    {
        window.beginDrawing();
        // window.clearWindow(RAYWHITE);
        window.begin3DMode(c);
        r.draw(v);
        DrawGrid(1000, 1.0f);
        window.end3DMode();
        window.endDrawing();
    }
    window.closeWindow();

    return 0;
}