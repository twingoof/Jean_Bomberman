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
    
    ECSVector3 pos = {0, 0, 0};
    ECSVector3 siz = {100, 100, 100};

    Entity e(pos, siz);
    Drawable3D d(CIRCLE, siz);

    Renderer r;
    std::vector<Entity> v;

    Camera camera = { 0 };
    camera.position = (Vector3){ 0.0f, 10.0f, 10.0f };
    camera.target = (Vector3){ 0.0f, 0.0f, 0.0f };
    camera.up = (Vector3){ 0.0f, 1.0f, 0.0f };
    camera.fovy = 45.0f;
    camera.projection = CAMERA_PERSPECTIVE;

    window.initWindow(1000, 1000, "Bonjour Jeremy", FLAG_WINDOW_RESIZABLE);
    e.addComponent<Drawable3D>(d, DRAWABLE3D);
    v.push_back(e);
    window.setWindowFPS(30);
    while (!window.windowShouldClose())
    {
        window.beginDrawing();
            window.clearWindow(RAYWHITE);
            window.begin3DMode(camera);
                r.draw(v);
                DrawGrid(10, 1.0f);
            window.end3DMode();
        window.endDrawing();
    }
    window.closeWindow();

    return 0;
}