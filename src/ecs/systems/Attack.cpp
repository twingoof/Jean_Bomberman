/*
** EPITECH PROJECT, 2021
** B-YEP-400-NAN-4-1-indiestudio-gildas.gonzalez [WSL: Ubuntu-20.04]
** File description:
** Attack
*/

#include "Attack.hpp"
#include <cmath>
#include "Sound.hpp"
#include "Music.hpp"

ECS::Attack::Attack()
    :bombExpl("../assets/explosion.mp3")
{}

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
                    if (!this->checkBombPos(this->_findBombPos(player.getComponent<ECS::Transform>(TRANSFORM)), entity))
                        continue;
                    e = Presets::createBomb("bomb-" + std::to_string(this->_bombId), this->_findBombPos(player.getComponent<ECS::Transform>(TRANSFORM)), tmp.getDamage(), tmp.getRange());
                    entity.push_back(e);
                    tmp.reload();
                    this->_bombId++;
                }
            }
        } catch (std::out_of_range &err) {
            continue;
        }
    }
    this->exploseBombs(entity);
}

void ECS::Attack::exploseBombs(std::vector<ECS::Entity> &entity)
{
    std::vector<std::vector<ECS::Entity>::iterator> toRm;

    for (auto it = entity.begin(); it != entity.end(); it++) {
        ECS::Entity e = (*it);
        if (e.getName().find("bomb") == std::string::npos)
            continue;
        ECS::Timer t;
        try {
            t = e.getComponent<ECS::Timer>(ECS::TIMER);
        } catch (std::out_of_range &err) {
            continue;
        }
        if (t.getTimeElapsed() > t.getRestartTime()) {
            bombExpl.playSound();
            this->manageErase(entity, e);
            toRm.insert(toRm.begin(), it);
        }
    }
    for (const auto &it: toRm)
        entity.erase(it);
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
            t = (*it).getComponent<ECS::Transform>(TRANSFORM);
        } catch(std::out_of_range &err) {
            continue;
        }
        if (posIsColliding(t, bomb.getComponent<ECS::Transform>(TRANSFORM), 0, 0)) {
            try {
                (*it).getComponent<ECS::Killable>(KILLABLE).takeDamage(bomb.getComponent<ECS::Attacker>(ATTACKER).getDamage());
            } catch(std::out_of_range &err) {
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
        } catch(std::out_of_range &err) {
            continue;
        }
        if (posIsColliding(t, bomb.getComponent<ECS::Transform>(TRANSFORM), 0, (-spaceBtwEnt))) {
            try {
                k = (*it).getComponent<ECS::Killable>(KILLABLE);
            } catch(std::out_of_range &err) {
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
        } catch(std::out_of_range &err) {
            continue;
        }
        if (posIsColliding(t, bomb.getComponent<ECS::Transform>(TRANSFORM), 0, spaceBtwEnt)) {
            try {
                k = (*it).getComponent<ECS::Killable>(KILLABLE);
            } catch(std::out_of_range &err) {
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
        } catch(std::out_of_range &err) {
            continue;
        }
        if (posIsColliding(t, bomb.getComponent<ECS::Transform>(TRANSFORM), (-spaceBtwEnt), 0)) {
            try {
                k = (*it).getComponent<ECS::Killable>(KILLABLE);
            } catch(std::out_of_range &err) {
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
        } catch(std::out_of_range &err) {
            continue;
        }
        if (posIsColliding(t, bomb.getComponent<ECS::Transform>(TRANSFORM), spaceBtwEnt, 0)) {
            try {
                k = (*it).getComponent<ECS::Killable>(KILLABLE);
            } catch(std::out_of_range &err) {
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

    mRelPlayPos.X = static_cast<float>(((MAP_SIZE_X / 2) - playerT.getPosition().X) - 3.f);
    mRelPlayPos.Z = static_cast<float>(((MAP_SIZE_Z / 2) - playerT.getPosition().Z) - 3.f);

    modX = fmod(mRelPlayPos.X, 3);
    modZ = fmod(mRelPlayPos.Z, 3);

    if (modX == 0) {
        bombPos.X -= mRelPlayPos.X;
    }
    else if (modX < 0.5) {
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

    bombPos.X += 6;
    bombPos.Z += 6;

    return (bombPos);
}

bool ECS::Attack::posIsColliding(ECS::Transform t1, ECS::Transform t2, int t2_x_multiplicator, int t2_y_multiplicator)
{
    ::Rectangle victim = {t1.getPosition().X, t1.getPosition().Z, static_cast<float>(t1.getSize().X), static_cast<float>(t1.getSize().Z)};
    ::Rectangle bomb = {t2.getPosition().X + static_cast<float>(t2_x_multiplicator * 3), t2.getPosition().Z + static_cast<float>(t2_y_multiplicator * 3), static_cast<float>(t2.getSize().X), static_cast<float>(t2.getSize().Z)};
    return (CheckCollisionRecs(victim, bomb));
}

bool ECS::Attack::checkBombPos(ECS::Vector3<float> pos, std::vector<ECS::Entity> &entity)
{
    for (auto it = entity.begin(); it != entity.end(); it++) {
        if ((*it).getName().find("bomb") == (*it).getName().npos)
            continue;
        ECS::Transform tEntity = (*it).getComponent<ECS::Transform>(TRANSFORM);
        if (tEntity.getPosition() == pos)
            return false;
    }
    return true;
}