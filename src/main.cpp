/*
** EPITECH PROJECT, 2021
** indie
** File description:
** TODO: add description
*/

#include "Collider.hpp"
#include "Moveable.hpp"
#include "Window.hpp"
#include "Camera.hpp"
#include "Displacer.hpp"
#include "Renderer.hpp"
#include "Presets.hpp"
#include "Controller.hpp"
#include "Text.hpp"
#include "Displacer.hpp"
#include "Transform.hpp"
#include "MapGenerator.hpp"
#include "vectors/ECSVector.hpp"

int main()
{
    MapGenerator map(11, 11);
    raylib::Window &window = raylib::Window::getWindow();
    raylib::Camera3D camera({0, 45, 20}, {0, 0, 0}, {0, 1, 0}, 45, CAMERA_PERSPECTIVE);
    ECS::Renderer r;
    std::vector<ECS::Entity> gameEntities;
    ECS::Entity e;
    ECS::Transform t({0, 0, 0}, {10, 10, 10});
    ECS::Drawable3D d3(ECS::RECT, t.getSize());

    d3.setColor({255, 0, 0, 255});
    d3.setWColor({255, 0, 255, 255});
    window.initWindow(1600, 900, "Bonjour Jeremy", FLAG_WINDOW_RESIZABLE);
    window.setWindowFPS(60);
    window.setMainCamera(camera);

    e.addComponent<ECS::Drawable3D>(d3, ECS::DRAWABLE3D);
    e.addComponent<ECS::Transform>(t, ECS::TRANSFORM);
    gameEntities.push_back(e);

    while (!window.windowShouldClose())
    {
        window.clearWindow(RAYWHITE);
        window.beginDrawing();
        window.begin3DMode();
        DrawGrid(50, 1);
        r.draw(gameEntities);
        window.end3DMode();
        window.endDrawing();
    }
    window.closeWindow();
    return 0;
}