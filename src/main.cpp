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
#include "Attack.hpp"
#include "Controller.hpp"
#include "Text.hpp"
#include "Displacer.hpp"
#include "Transform.hpp"
#include "MapGenerator.hpp"
#include "vectors/ECSVector.hpp"
#include "Clock.hpp"
#include "Kill.hpp"
#include "GetEntityInVector.hpp"

int main()
{
    MapGenerator map(MAP_SIZE_X, MAP_SIZE_Z);
    raylib::Window &window = raylib::Window::getWindow();
    raylib::Camera3D camera({0, 45, 20}, {0, 0, 0}, {0, 1, 0}, 45, CAMERA_PERSPECTIVE);
    std::vector<ECS::Entity> mapEntities;
    ECS::Renderer r;
    ECS::Kill kill;
    ECS::Attack atk;
    ECS::Controller ctrl;
    ECS::Displacer disp;
    ECS::Collider cld;
    ECS::Clock clock;
    std::vector<ECS::Entity> gameEntities;

    window.initWindow(1600, 900, "Demo Multiplayer", FLAG_WINDOW_RESIZABLE);
    window.setWindowFPS(60);
    gameEntities = map.generateMapEntities();
    clock.startClock();
    while (!window.windowShouldClose()) {
        window.beginDrawing();
        window.begin3DMode(camera);
        window.clearWindow(RAYWHITE);
        DrawGrid(50, 1.0f);
        if (clock.getTimeElapsed() > 0.01) {
            if (ECS::getNbEntitiesByName("player", gameEntities) == 0) {
                std::cout << "Equality" << std::endl;
                break;
            } else if (ECS::getNbEntitiesByName("player", gameEntities) == 1) {
                std::cout << "And the winner is: " << std::get<ECS::Entity &>(*(ECS::getEntitiesByName("player", gameEntities).begin())).getName() << std::endl;
                break;
            }
            std::vector<std::tuple<bool, ECS::Entity &>> players = ECS::getEntitiesByName("player", gameEntities);
            for (auto it = players.begin(); it != players.end(); it++)
                ctrl.moveEntity(std::get<1>(*it));
            atk.manageBombs(gameEntities);
            cld.checkCollision(gameEntities);
            disp.moveEntity(gameEntities);
            kill.deleteWall(gameEntities);
            clock.restartClock();
        }
        r.draw(gameEntities);
        window.end3DMode();
        DrawFPS(10, 10);
        window.endDrawing();
    }
    window.closeWindow();
    return 0;
}