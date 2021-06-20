/*
** EPITECH PROJECT, 2021
** B-YEP-400-NAN-4-1-indiestudio-gildas.gonzalez
** File description:
** Hud
*/

#include "Hud.hpp"

// Taille de l'image / taille de la fenêtre

ECS::Hud::Hud(std::vector<ECS::Entity> &gameEntites)
{
    this->createHudEntities(gameEntites);
}

void ECS::Hud::createHudEntities(std::vector<ECS::Entity> &gameEntities)
{
    std::vector<std::tuple<bool, ECS::Entity &>> playerEnts;
    raylib::Window &window = raylib::Window::getWindow();
    float scaleX = static_cast<float>(window.getWindowWidth()) / 5.0;
    float scaleY = static_cast<float>(window.getWindowHeight()) / 7.0;
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
                newEnt = Presets::createImage(hudName, {0.0, 0.0, 0.0}, {static_cast<int>(scaleX), static_cast<int>(scaleY), 0}, "../assets/player1_hud.png");
                break;
            case 2:
                newEnt = Presets::createImage(hudName, {static_cast<float>(window.getWindowWidth()) - scaleX, 0.0, 0.0}, {static_cast<int>(scaleX), static_cast<int>(scaleY), 0}, "../assets/player2_hud.png");
                break;
            case 3:
                newEnt = Presets::createImage(hudName, {0.0, static_cast<float>(window.getWindowHeight()) - scaleY, 0.0}, {static_cast<int>(scaleX), static_cast<int>(scaleY), 0}, "../assets/player3_hud.png");
                break;
            case 4:
                newEnt = Presets::createImage(hudName, {static_cast<float>(window.getWindowWidth()) - scaleX, static_cast<float>(window.getWindowHeight()) - scaleY, 0.0}, {static_cast<int>(scaleX), static_cast<int>(scaleY), 0}, "../assets/player4_hud.png");
                break;
            default:
                continue;
                break;
        }
        gameEntities.push_back(newEnt);
    }
}

void ECS::Hud::updateHudEntities(std::vector<ECS::Entity> &gameEntities, int width, int height)
{
    std::vector<std::tuple<bool, ECS::Entity &>> hudEnts;
    float scaleX = static_cast<float>(width) / 5.0;
    float scaleY = static_cast<float>(height) / 7.0;
    int id = 0;

    hudEnts = ECS::getEntitiesByName("hud", gameEntities);
    for (auto it = hudEnts.begin(); it != hudEnts.end(); it++) {
        ECS::Transform &hudT = std::get<1>(*it).getComponent<ECS::Transform>(ECS::TRANSFORM);
        ECS::Drawable2D &hudD = std::get<1>(*it).getComponent<ECS::Drawable2D>(ECS::DRAWABLE2D);
        if (!std::get<0>(*it))
            continue;
        id = std::stoi(std::get<1>(*it).getName().substr(3));
        hudD.setSize({static_cast<int>(scaleX), static_cast<int>(scaleY), 0});
        switch (id) {
            case 1:
                break;
            case 2:
                hudT.setPosition({static_cast<float>(width) - scaleX, 0.0, 0.0});
                break;
            case 3:
                hudT.setPosition({0.0, static_cast<float>(height) - scaleY, 0.0});
                break;
            case 4:
                hudT.setPosition({static_cast<float>(width) - scaleX, static_cast<float>(height) - scaleY, 0.0});
                break;
            default:
                continue;
                break;
        }
    }
}