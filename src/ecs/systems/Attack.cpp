/*
** EPITECH PROJECT, 2021
** B-YEP-400-NAN-4-1-indiestudio-gildas.gonzalez [WSL: Ubuntu-20.04]
** File description:
** Attack
*/

#include "Attack.hpp"

#include <math.h>

void ECS::Attack::manageBombs(std::vector<ECS::Entity> &entity)
{
    raylib::Controls controls;
    ECS::Attacker &tmp = entity.at(12).getComponent<ECS::Attacker>(ATTACKER);
    ECS::Entity e;

    if (controls.isKeyPressed(raylib::Keys::KEY_SPACE)) {
        if (tmp.isReload()) {
            e = Presets::createBomb("bomb-" + std::to_string(this->_bombId), this->_findBombPos(entity.at(12).getComponent<ECS::Transform>(TRANSFORM)), tmp.getDamage());
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

ECS::Vector3<float> ECS::Attack::_findBombPos(ECS::Transform playerT)
{
    ECS::Vector3<float> bombPos(0, 0, 0);
    ECS::Vector3<float> mRelPlayPos(0, 0, 0);
    double modX = 0.0;
    double modZ = 0.0;

    mRelPlayPos.X = static_cast<float>(((MAP_SIZE_X / 2) - playerT.getPosition().X) - 1.5f);
    mRelPlayPos.Z = static_cast<float>(((MAP_SIZE_Z / 2) - playerT.getPosition().Z) - 1.5f);

    modX = fmod(mRelPlayPos.X, 3);
    modZ = fmod(mRelPlayPos.Z, 3);

    if (modX == 0) {
        bombPos.X -= mRelPlayPos.X;
    }
    else if (modX < 1.5) {
        bombPos.X -= mRelPlayPos.X - modX;
    }
    else {
        bombPos.X -= mRelPlayPos.X + (3 - modX);
    }

    if (modZ == 0) {
        bombPos.Z = mRelPlayPos.Z;
    }
    else if (modZ < 0.5) {
        bombPos.Z -= mRelPlayPos.Z - modZ;
    }
    else {
        bombPos.Z -= mRelPlayPos.Z + (3 - modZ);
    }

    bombPos.X += 3;
    bombPos.Z += 3;

    return (bombPos);
} 
