/*
** EPITECH PROJECT, 2021
** B-YEP-400-NAN-4-1-indiestudio-gildas.gonzalez
** File description:
** Hud
*/

#include "Hud.hpp"

Hud::Hud(const std::vector<ECS::Entity> &gameEntities)
    :_gameEntities(gameEntities)
{}

void Hud::storeGameEntities(std::vector<ECS::Entity> gameEnts)
{
    this->_gameEntities = gameEnts;
}

std::vector<ECS::Entity> Hud::getGameEntities(void) const
{
    return (_gameEntities);
}