/*
** EPITECH PROJECT, 2021
** B-YEP-400-NAN-4-1-indiestudio-gildas.gonzalez
** File description:
** Kill
*/

#include "Kill.hpp"

void ECS::Kill::deleteWall(std::vector<ECS::Entity> &entity)
{
    for (auto it = entity.begin(); it != entity.end(); it++) {
        ECS::Killable kill;
        try {
            kill = (*it.base()).getComponent<ECS::Killable>(ECS::KILLABLE);
        } catch(std::out_of_range &e) {
            continue;
        }
        if (!kill.isAlive()) {
            entity.erase(it);
        }
    }
}
