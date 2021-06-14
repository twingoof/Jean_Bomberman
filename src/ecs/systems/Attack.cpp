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
            this->manageErase(entity, (*it));
            if ((it + 1) == entity.end()){
                entity.erase(it);
                break;
            }
            entity.erase(it);
        }
    }
}

void ECS::Attack::manageErase(std::vector<ECS::Entity> &entities, ECS::Entity &bomb) {
    ECS::Entity &tmp = bomb;
    int spaceBtwEnt = 1;

    for (int i = 0; i < 2; i++) {
        if (killTopKillable(entities, tmp, spaceBtwEnt)) {
            spaceBtwEnt++;
        } else
            break;
    }
    spaceBtwEnt = 1;
    for (int i = 0; i < 2; i++) {
        if (killBotKillable(entities, tmp, spaceBtwEnt)) {
            spaceBtwEnt++;
        } else
            break;
    }
    spaceBtwEnt = 1;
    for (int i = 0; i < 2; i++) {
        if (killLeftKillable(entities, tmp, spaceBtwEnt)) {
            spaceBtwEnt++;
        } else
            break;
    }
    spaceBtwEnt = 1;
    for (int i = 0; i < 2; i++) {
        if (killRightKillable(entities, tmp, spaceBtwEnt)) {
            spaceBtwEnt++;
        } else
            break;
    }
}

bool ECS::Attack::killTopKillable(std::vector<ECS::Entity> &entities, ECS::Entity &bomb, int spaceBtwEnt)
{
    ECS::Entity tmpEnt;
    ECS::Transform t;
    ECS::Killable k;
    ECS::Vector3<float> pos;

    for (auto it = entities.begin(); it != entities.end(); it++) {
        try {
            t = (*it.base()).getComponent<ECS::Transform>(TRANSFORM);
        } catch(std::out_of_range &e) {
            continue;
        }
        if (t.getPosition().Z == static_cast<int>(bomb.getComponent<ECS::Transform>(TRANSFORM).getPosition().Z - spaceBtwEnt * bomb.getComponent<ECS::Transform>(TRANSFORM).getSize().Z) && t.getPosition().X == static_cast<int>(bomb.getComponent<ECS::Transform>(TRANSFORM).getPosition().X)) {
            try {
                k = (*it.base()).getComponent<ECS::Killable>(KILLABLE);
            } catch(std::out_of_range &e) {
                return (false);
            }
            (*it.base()).getComponent<ECS::Killable>(KILLABLE).takeDamage(bomb.getComponent<ECS::Attacker>(ATTACKER).getDamage());
            return (true);
        }
    }
    return (true);
}

bool ECS::Attack::killBotKillable(std::vector<ECS::Entity> &entities, ECS::Entity &bomb, int spaceBtwEnt)
{
    ECS::Entity tmpEnt;
    ECS::Transform t;
    ECS::Killable k;
    ECS::Vector3<float> pos;

    for (auto it = entities.begin(); it != entities.end(); it++) {
        try {
            t = (*it.base()).getComponent<ECS::Transform>(TRANSFORM);
        } catch(std::out_of_range &e) {
            continue;
        }
        if (t.getPosition().Z == static_cast<int>(bomb.getComponent<ECS::Transform>(TRANSFORM).getPosition().Z + spaceBtwEnt * bomb.getComponent<ECS::Transform>(TRANSFORM).getSize().Z) && t.getPosition().X == static_cast<int>(bomb.getComponent<ECS::Transform>(TRANSFORM).getPosition().X)) {
            try {
                k = (*it.base()).getComponent<ECS::Killable>(KILLABLE);
            } catch(std::out_of_range &e) {
                return (false);
            }
            (*it.base()).getComponent<ECS::Killable>(KILLABLE).takeDamage(bomb.getComponent<ECS::Attacker>(ATTACKER).getDamage());
            return (true);
        }
    }
    return (true);
}

bool ECS::Attack::killLeftKillable(std::vector<ECS::Entity> &entities, ECS::Entity &bomb, int spaceBtwEnt)
{
    ECS::Entity tmpEnt;
    ECS::Transform t;
    ECS::Killable k;
    ECS::Vector3<float> pos;

    for (auto it = entities.begin(); it != entities.end(); it++) {
        try {
            t = (*it.base()).getComponent<ECS::Transform>(TRANSFORM);
        } catch(std::out_of_range &e) {
            continue;
        }
        if (t.getPosition().X == static_cast<int>(bomb.getComponent<ECS::Transform>(TRANSFORM).getPosition().X - spaceBtwEnt * bomb.getComponent<ECS::Transform>(TRANSFORM).getSize().X) && t.getPosition().Z == static_cast<int>(bomb.getComponent<ECS::Transform>(TRANSFORM).getPosition().Z)) {
            try {
                k = (*it.base()).getComponent<ECS::Killable>(KILLABLE);
            } catch(std::out_of_range &e) {
                return (false);
            }
            (*it.base()).getComponent<ECS::Killable>(KILLABLE).takeDamage(bomb.getComponent<ECS::Attacker>(ATTACKER).getDamage());
            return (true);
        }
    }
    return (true);
}

bool ECS::Attack::killRightKillable(std::vector<ECS::Entity> &entities, ECS::Entity &bomb, int spaceBtwEnt)
{
    ECS::Entity tmpEnt;
    ECS::Transform t;
    ECS::Killable k;
    ECS::Vector3<float> pos;

    for (auto it = entities.begin(); it != entities.end(); it++) {
        try {
            t = (*it.base()).getComponent<ECS::Transform>(TRANSFORM);
        } catch(std::out_of_range &e) {
            continue;
        }
        if (t.getPosition().X == static_cast<int>(bomb.getComponent<ECS::Transform>(TRANSFORM).getPosition().X + spaceBtwEnt * bomb.getComponent<ECS::Transform>(TRANSFORM).getSize().X) && t.getPosition().Z == static_cast<int>(bomb.getComponent<ECS::Transform>(TRANSFORM).getPosition().Z)) {
            try {
                k = (*it.base()).getComponent<ECS::Killable>(KILLABLE);
            } catch(std::out_of_range &e) {
                return (false);
            }
            (*it.base()).getComponent<ECS::Killable>(KILLABLE).takeDamage(bomb.getComponent<ECS::Attacker>(ATTACKER).getDamage());
            return (true);
        }
    }
    return (true);
}