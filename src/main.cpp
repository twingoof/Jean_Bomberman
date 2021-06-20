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
#include "Sound.hpp"
#include "Hud.hpp"

int main()
{
    int nbPlayer = 4;
    raylib::Window &window = raylib::Window::getWindow();
    MapGenerator map(MAP_SIZE_X, MAP_SIZE_Z, nbPlayer);
    raylib::Camera3D camera({0, 80, 25}, {0, -10, 0}, {0, 1, 0}, 45, CAMERA_PERSPECTIVE);
    std::vector<ECS::Entity> mapEntities;

    int baseW = 1600;
    int baseH = 900;
    window.initWindow(baseW, baseH, "Demo Multiplayer", FLAG_WINDOW_RESIZABLE);
    window.initAudioDevice();
    window.setWindowFPS(60);
    window.setMainCamera(camera);
    ECS::Renderer r;
    ECS::Kill kill;
    ECS::Attack atk;
    ECS::Controller ctrl;
    ECS::Displacer disp;
    //ECS::Collider cld;
    ECS::Clock clock;
    std::vector<ECS::Entity> gameEntities;
    gameEntities = map.generateMapEntities();
    Hud hud(gameEntities);
    clock.startClock();
    while (!window.windowShouldClose()) {
        if (clock.getTimeElapsed() > 0.01) {
            if (ECS::getNbEntitiesByName("player", gameEntities) == 0) {
                std::cout << "Equality" << std::endl;
                break;
            } else if (ECS::getNbEntitiesByName("player", gameEntities) == 1) {
                std::cout << "And the winner is: " << std::get<ECS::Entity &>(*(ECS::getEntitiesByName("player", gameEntities).begin())).getName() << std::endl;
                break;
            }
            std::vector<std::tuple<bool, ECS::Entity &>> players = ECS::getEntitiesByName("player", gameEntities);
            ctrl.moveEntity(gameEntities);
            atk.manageBombs(gameEntities);
            //cld.checkCollision(gameEntities);
            disp.moveEntity(gameEntities);
            kill.deleteWall(gameEntities);
            if (window.getWindowWidth() != baseW || window.getWindowHeight() != baseH) {
                baseW = window.getWindowWidth();
                baseH = window.getWindowHeight();
                hud.updateHudEntities(gameEntities, baseW, baseH);
            }
            clock.restartClock();
        }
        r.draw(gameEntities);
    }
    window.stopAudioDevice();
    window.closeWindow();
    return 0;
}