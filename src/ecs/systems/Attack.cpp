/*
** EPITECH PROJECT, 2021
** B-YEP-400-NAN-4-1-indiestudio-gildas.gonzalez [WSL: Ubuntu-20.04]
** File description:
** Attack
*/

#include "Attack.hpp"
#include <cmath>

void ECS::Attack::manageBombs(std::vector<ECS::Entity> &entity)
{
    raylib::Controls controls;
    ECS::Entity e;
    std::vector<std::tuple<bool, ECS::Entity &>> players = ECS::getEntitiesByName("player", entity);

    for (auto it = players.begin(); it != players.end(); it++) {
        try {
            ECS::Entity &player = std::get<1>(*it);
            ECS::Attacker &tmp = player.getComponent<ECS::Attacker>(ATTACKER);
            std::map<std::string, raylib::Keys> keys = player.getComponent<ECS::Moveable>(MOVEABLE).getKeys();
            if (controls.isKeyPressed(keys["bomb"])) {
                if (tmp.isReload()) {
                    e = Presets::createBomb("bomb-" + std::to_string(this->_bombId), this->_findBombPos(player.getComponent<ECS::Transform>(TRANSFORM)), tmp.getDamage(), tmp.getRange());
                    entity.push_back(e);
                    tmp.reload();
                    this->_bombId++;
                }
            }
        } catch (std::out_of_range &e) {
            continue;
        }
    }
    this->exploseBombs(entity);
}

void ECS::Attack::exploseBombs(std::vector<ECS::Entity> &entity)
{
    for (auto it = entity.begin(); it != entity.end(); it++) {
        ECS::Timer t;
        try {
            t = (*it).getComponent<ECS::Timer>(TIMER);
        } catch(std::out_of_range &e) {
            continue;
        }
        if (t.getTimeElapsed() > t.getRestartTime()) {
            this->manageErase(entity, (*it));
            if ((it + 1) == entity.end()){
                entity.erase(it);
                break;
            }
            entity.erase(it);
        }
    }
}

void ECS::Attack::manageErase(std::vector<ECS::Entity> &entities, ECS::Entity &bomb)
{
    ECS::Entity &tmp = bomb;
    ECS::Attacker &a = tmp.getComponent<ECS::Attacker>(ECS::ATTACKER);
    int spaceBtwEnt = 1;

    killPosKillable(entities, tmp);
    for (int i = 0; i < a.getRange(); i++) {
        if (killTopKillable(entities, tmp, spaceBtwEnt))
            spaceBtwEnt++;
        else
            break;
    }
    spaceBtwEnt = 1;
    for (int i = 0; i < a.getRange(); i++) {
        if (killBotKillable(entities, tmp, spaceBtwEnt))
            spaceBtwEnt++;
        else
            break;
    }
    spaceBtwEnt = 1;
    for (int i = 0; i < a.getRange(); i++) {
        if (killLeftKillable(entities, tmp, spaceBtwEnt))
            spaceBtwEnt++;
        else
            break;
    }
    spaceBtwEnt = 1;
    for (int i = 0; i < a.getRange(); i++) {
        if (killRightKillable(entities, tmp, spaceBtwEnt))
            spaceBtwEnt++;
        else
            break;
    }
}

void ECS::Attack::killPosKillable(std::vector<ECS::Entity> &entities, ECS::Entity &bomb)
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
        if (posIsColliding(t, bomb.getComponent<ECS::Transform>(TRANSFORM), 0, 0)) {
            try {
                (*it.base()).getComponent<ECS::Killable>(KILLABLE).takeDamage(bomb.getComponent<ECS::Attacker>(ATTACKER).getDamage());
            } catch(std::out_of_range &e) {
                break;
            }
            break;
        }
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
            t = (*it).getComponent<ECS::Transform>(TRANSFORM);
        } catch(std::out_of_range &e) {
            continue;
        }
        if (posIsColliding(t, bomb.getComponent<ECS::Transform>(TRANSFORM), 0, (-spaceBtwEnt))) {
            try {
                k = (*it).getComponent<ECS::Killable>(KILLABLE);
            } catch(std::out_of_range &e) {
                return (false);
            }
            (*it).getComponent<ECS::Killable>(KILLABLE).takeDamage(bomb.getComponent<ECS::Attacker>(ATTACKER).getDamage());
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
            t = (*it).getComponent<ECS::Transform>(TRANSFORM);
        } catch(std::out_of_range &e) {
            continue;
        }
        if (posIsColliding(t, bomb.getComponent<ECS::Transform>(TRANSFORM), 0, spaceBtwEnt)) {
            try {
                k = (*it).getComponent<ECS::Killable>(KILLABLE);
            } catch(std::out_of_range &e) {
                return (false);
            }
            (*it).getComponent<ECS::Killable>(KILLABLE).takeDamage(bomb.getComponent<ECS::Attacker>(ATTACKER).getDamage());
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
            t = (*it).getComponent<ECS::Transform>(TRANSFORM);
        } catch(std::out_of_range &e) {
            continue;
        }
        if (posIsColliding(t, bomb.getComponent<ECS::Transform>(TRANSFORM), (-spaceBtwEnt), 0)) {
            try {
                k = (*it).getComponent<ECS::Killable>(KILLABLE);
            } catch(std::out_of_range &e) {
                return (false);
            }
            (*it).getComponent<ECS::Killable>(KILLABLE).takeDamage(bomb.getComponent<ECS::Attacker>(ATTACKER).getDamage());
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
            t = (*it).getComponent<ECS::Transform>(TRANSFORM);
        } catch(std::out_of_range &e) {
            continue;
        }
        if (posIsColliding(t, bomb.getComponent<ECS::Transform>(TRANSFORM), spaceBtwEnt, 0)) {
            try {
                k = (*it).getComponent<ECS::Killable>(KILLABLE);
            } catch(std::out_of_range &e) {
                return (false);
            }
            (*it).getComponent<ECS::Killable>(KILLABLE).takeDamage(bomb.getComponent<ECS::Attacker>(ATTACKER).getDamage());
            return (true);
        }
    }
    return (true);
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
        bombPos.Z -= (mRelPlayPos.Z - modZ);
    }
    else {
        bombPos.Z -= mRelPlayPos.Z + (3 - modZ);
    }

    bombPos.X += 3;
    bombPos.Z += 3;

    return (bombPos);
}

bool ECS::Attack::posIsColliding(ECS::Transform t1, ECS::Transform t2, int t2_x_multiplicator, int t2_y_multiplicator)
{
    return (CheckCollisionRecs({t1.getPosition().X, t1.getPosition().Z, static_cast<float>(t1.getSize().X), static_cast<float>(t1.getSize().Z)}, {t2.getPosition().X + t2_x_multiplicator * t2.getSize().X, t2.getPosition().Z + t2_y_multiplicator * t2.getSize().Z, static_cast<float>(t2.getSize().X), static_cast<float>(t2.getSize().Z)}));
}
