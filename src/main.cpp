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
#include "Clock.hpp"

int main()
{
    MapGenerator map(11, 11);
    raylib::Window &window = raylib::Window::getWindow();
    raylib::Camera3D camera((Vector3){0, 90, 2}, (Vector3){0, 0, 0}, (Vector3){0, 1, 0}, 45, CAMERA_PERSPECTIVE);
    std::vector<ECS::Entity> mapEntities;
    ECS::Renderer r;
    ECS::Controller ctrl;
    ECS::Displacer disp;
    ECS::Collider cld;
    ECS::Clock clock;
    std::vector<ECS::Entity> gameEntities;
    ECS::Entity pl = Presets::createPlayer("player", ECS::Vector3<float>(-30, 0, 1));

    window.initWindow(1920, 1080, "Bonjour Jeremy", FLAG_WINDOW_RESIZABLE);
    window.setWindowFPS(60);
    gameEntities = map.generateMapEntities();
    gameEntities.push_back(pl);
    clock.startClock();
    while (!window.windowShouldClose())
    {
        window.beginDrawing();
        window.begin3DMode(camera);
        window.clearWindow(RAYWHITE);
        DrawGrid(50, 1.0f);
        if (clock.getTimeElapsed() > 0.01) {
            ctrl.moveEntity(gameEntities.at(gameEntities.size() - 1));
            cld.checkCollision(gameEntities);
            disp.moveEntity(gameEntities);
            clock.restartClock();
        }
        r.draw(gameEntities);
        window.end3DMode();
        window.endDrawing();
    }
    window.closeWindow();
    return 0;
}