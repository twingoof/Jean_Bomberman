/*
** EPITECH PROJECT, 2021
** B-YEP-400-NAN-4-1-indiestudio-gildas.gonzalez
** File description:
** Hud
*/

#include "Hud.hpp"

// Taille de l'image / taille de la fenêtre

Hud::Hud(std::vector<ECS::Entity> &gameEntites)
{
    this->createHudEntities(gameEntites);
}

void Hud::createHudEntities(std::vector<ECS::Entity> &gameEntities)
{
    std::vector<std::tuple<bool, ECS::Entity &>> playerEnts;
    raylib::Window &window = raylib::Window::getWindow();
    float scaleX = window.getWindowWidth() / 5;
    float scaleY = window.getWindowHeight() / 7;
    std::string hudName;
    ECS::Entity newEnt;
    int id = 0;

    playerEnts = ECS::getEntitiesByName("player", gameEntities);
    for (auto it = playerEnts.begin(); it != playerEnts.end(); it++) {
        if (!std::get<0>(*it))
            continue;
        id = std::stoi(std::get<1>(*it).getName().substr(6));
        hudName = "hud" + std::to_string(id);
        switch (id) {
            case 1:
                newEnt = Presets::createImage(hudName, {0.0, 0.0, 0.0}, {scaleX, scaleY, 0}, "../assets/hud_left.png");
                break;
            case 2:
                newEnt = Presets::createImage(hudName, {static_cast<float>(window.getWindowWidth()) - scaleX, 0.0, 0.0}, {scaleX, scaleY, 0}, "../assets/hud_right.png");
                break;
            case 3:
                newEnt = Presets::createImage(hudName, {0.0, static_cast<float>(window.getWindowHeight()) - static_cast<float>(scaleY), 0.0}, {scaleX, scaleY, 0}, "../assets/hud_left.png");
                break;
            case 4:
                newEnt = Presets::createImage(hudName, {static_cast<float>(window.getWindowWidth()) - scaleX, static_cast<float>(window.getWindowHeight()) - static_cast<float>(scaleY), 0.0}, {scaleX, scaleY, 0}, "../assets/hud_right.png");
                break;
            default:
                continue;
                break;
        }
        gameEntities.push_back(newEnt);
    }
}

void Hud::updateHudEntities(std::vector<ECS::Entity> &gameEntities)
{
    std::vector<std::tuple<bool, ECS::Entity &>> hudEnts;
    raylib::Window &window = raylib::Window::getWindow();
    float scaleX = window.getWindowWidth() / 5;
    float scaleY = window.getWindowHeight() / 7;
    int id = 0;

    hudEnts = ECS::getEntitiesByName("hud", gameEntities);
    for (auto it = hudEnts.begin(); it != hudEnts.end(); it++) {
        if (!std::get<0>(*it))
            continue;
        id = std::stoi(std::get<1>(*it).getName().substr(3));
        switch (id) {
            case 1:
                break;
            case 2:
                std::get<1>(*it).getComponent<ECS::Transform>(ECS::TRANSFORM).setPosition({static_cast<float>(window.getWindowWidth()) - static_cast<float>(scaleX), 0.0, 0.0});
                break;
            case 3:
                std::get<1>(*it).getComponent<ECS::Transform>(ECS::TRANSFORM).setPosition({0.0, static_cast<float>(window.getWindowHeight()) - static_cast<float>(scaleY), 0.0});
                break;
            case 4:
                std::get<1>(*it).getComponent<ECS::Transform>(ECS::TRANSFORM).setPosition({static_cast<float>(window.getWindowWidth()) - static_cast<float>(scaleX), static_cast<float>(window.getWindowHeight()) - static_cast<float>(scaleY), 0.0});
                break;
            default:
                continue;
                break;
        }
        std::get<1>(*it).getComponent<ECS::Transform>(ECS::TRANSFORM).setSize({scaleX, scaleY, 0});
    }
}