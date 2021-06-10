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
    raylib::Camera3D camera((Vector3){20, 20, 20}, (Vector3){0, 0, 0}, (Vector3){0, 1, 0}, 45, CAMERA_PERSPECTIVE);
    std::vector<ECS::Entity> mapEntities;
    ECS::Renderer r;
    ECS::Controller d;
    ECS::Displacer p;
    ECS::Collider c;
    std::vector<ECS::Entity> gameEntities;
    ECS::Entity pl = Presets::createPlayer("player", ECS::Vector3<float>(2, 0, 1));

    window.initWindow(1920, 1080, "Bonjour Jeremy", FLAG_WINDOW_RESIZABLE);
    gameEntities = map.generateMapEntities();
    gameEntities.push_back(pl);
    while (!window.windowShouldClose())
    {
        window.beginDrawing();
        window.begin3DMode(camera);
        window.clearWindow(RAYWHITE);
        DrawGrid(50, 1.0f);
        p.moveEntity(gameEntities);
        r.draw(gameEntities);
        window.end3DMode();
        window.endDrawing();
    }
    window.closeWindow();
    return 0;
}