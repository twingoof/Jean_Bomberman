/*
** EPITECH PROJECT, 2021
** B-YEP-400-NAN-4-1-indiestudio-gildas.gonzalez [WSL: Ubuntu-20.04]
** File description:
** Attack
*/

#include "Attack.hpp"

void ECS::Attack::manageBombs(std::vector<ECS::Entity> &entity)
{
    raylib::Controls controls;
    ECS::Attacker &tmp = entity.at(12).getComponent<ECS::Attacker>(ATTACKER);
    ECS::Entity e;

    if (controls.isKeyPressed(raylib::Keys::KEY_SPACE)) {
        if (tmp.isReload()) {
            e = Presets::createBomb("bomb-" + std::to_string(this->_bombId), entity.at(12).getComponent<ECS::Transform>(TRANSFORM).getPosition(), tmp.getDamage());
            entity.push_back(e);
            tmp.reload();
            this->_bombId++;
        }
    }
    this->exploseBombs(entity);
}

void ECS::Attack::exploseBombs(std::vector<ECS::Entity> &entity)
{
    for (auto it = entity.begin(); it != entity.end(); it++) {
        ECS::Timer t;
        try {
            t = (*it.base()).getComponent<ECS::Timer>(TIMER);
        } catch(std::out_of_range &e) {
            continue;
        }
        if (t.getTimeElapsed() > 3) {
            this->rangeExplosion(entity);
            // Fonction qui casse tout
            if ((it + 1) == entity.end()){
                entity.erase(it);
                break;
            }
            entity.erase(it);
        }
    }
}

void ECS::Attack::rangeExplosion(std::vector<ECS::Entity> &entity)
{
    for (auto it = entity.begin(); it != entity.end(); it++) {
        ECS::Killable kill;
        try {
            kill = (*it.base()).getComponent<ECS::Killable>(KILLABLE);
        } catch(std::out_of_range &e) {
            continue;
        }
        if (kill.isAlive()) {
            kill.takeDamage(25);
        }
    }
}
