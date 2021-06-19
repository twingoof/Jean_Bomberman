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
#include "MenuGenerator.hpp"
#include "ButtonClickManager.hpp"

void test() {
    std::cout << "Lancement du play";
}

int main()
{
    int nbPlayer = 4;
    MapGenerator map(MAP_SIZE_X, MAP_SIZE_Z, nbPlayer);
    raylib::Window &window = raylib::Window::getWindow();
    raylib::Camera3D camera({0, 80, 25}, {0, -10, 0}, {0, 1, 0}, 45, CAMERA_PERSPECTIVE);

    menu::MenuGenerator &menu = menu::MenuGenerator::getMenuGenerator();
    std::vector<ECS::Entity> &menuEntities = menu.getMenuEntities();
    // raylib::Camera3D camera({0, 60, 10}, {0, 0, 0}, {0, 1, 0}, 45, CAMERA_PERSPECTIVE);
    // std::vector<ECS::Entity> mapEntities;
    // std::vector<ECS::Entity> gameEntities;
    ECS::Renderer r;
    ECS::Kill kill;
    ECS::Attack atk;
    ECS::Controller ctrl;
    ECS::Displacer disp;
    //ECS::Collider cld;
    ECS::Clock clock;
    ECS::ButtonClickManager btnManager;

    window.initWindow(1600, 900, "Demo Multiplayer", FLAG_WINDOW_RESIZABLE);
    window.setWindowFPS(60);
    window.initAudioDevice();
    menu.initMenuGenerator(&test);
    clock.startClock();
    while (!window.windowShouldClose()) {
        if (menu.needToExit())
            break;
        window.beginDrawing();
        window.clearWindow(RAYWHITE);
        if (clock.getTimeElapsed() > 0.01) {
            btnManager.checkButtonArea(menuEntities);
            menu.updateEntities();
            clock.restartClock();
        }
        r.draw(menuEntities);
        DrawFPS(10, 10);
        window.endDrawing();
    }
    window.stopAudioDevice();
    window.closeWindow();
    return 0;
}