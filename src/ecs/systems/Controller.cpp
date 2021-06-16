/*
** EPITECH PROJECT, 2021
** B-YEP-400-NAN-4-1-indiestudio-gildas.gonzalez
** File description:
** Controller
*/

#include "Controller.hpp"
#include "Presets.hpp"
#include "transform/Transform.hpp"
#include "vectors/ECSVector.hpp"
#include "Collider.hpp"

void ECS::Controller::moveEntity(std::vector<ECS::Entity> &entity)
{
    for (auto it = entity.begin(); it != entity.end(); it++) {
        try {
            ECS::Moveable &m = (*it).getComponent<ECS::Moveable>(MOVEABLE);
            raylib::Controls controls;
            ECS::Vector3<float> newVel;
            int i = 0;
            
            if (controls.isKeyDown(m.getKeys()["up"])) {
                if (canMoveTop(entity, *it)) {
                    newVel.Z = -(m.getSpeed());
                    i = 1;
                }
            }
            if (controls.isKeyDown(m.getKeys()["down"])) {
                if (canMoveDown(entity, *it)) {
                    newVel.Z = m.getSpeed();
                    i = 1;
                }
            }
            if (controls.isKeyDown(m.getKeys()["left"])) {
                if (canMoveLeft(entity, *it)) {
                    newVel.X = -(m.getSpeed());
                    i = 1;
                }
            }
            if (controls.isKeyDown(m.getKeys()["right"])) {
                if (canMoveRight(entity, *it)) {
                    newVel.X = m.getSpeed();
                    i = 1;
                }
            }
            if (i == 0)
                m.setVelocity({0, 0, 0});
            m.setVelocity(newVel);
        } catch (std::out_of_range &e) {}
    }
}

bool ECS::Controller::canMoveTop(std::vector<ECS::Entity> &entity, ECS::Entity &player)
{
    ECS::Transform play = player.getComponent<ECS::Transform>(TRANSFORM);
    ::Rectangle p = {play.getPosition().X, play.getPosition().Z - player.getComponent<ECS::Moveable>(MOVEABLE).getSpeed(), play.getSize().X, play.getSize().Z};

    for (auto it = entity.begin(); it != entity.end(); it++) {
        if ((*it).getName() == player.getName())
            continue;
        if ((*it).getName().find("bomb") != (*it).getName().npos)
            continue;
        if ((*it).getName().find("bonus") != (*it).getName().npos)
            continue;
        ECS::Transform t = (*it).getComponent<ECS::Transform>(TRANSFORM);
        ::Rectangle other = {t.getPosition().X, t.getPosition().Z + player.getComponent<ECS::Moveable>(MOVEABLE).getSpeed(), t.getSize().X, t.getSize().Z};
        if (raylib::checkCollisionRecs(p, other)) {
            if ((*it).getName().find("bonus") != (*it).getName().npos) {
                ECS::Collectible &collectible = (*it).getComponent<ECS::Collectible>(ECS::COLLECTIBLE);
                collectible.setBonus(player);
                entity.erase(it);
                return true;
            }
            else
                return false;
        }
    }
    return true;
}

bool ECS::Controller::canMoveDown(std::vector<ECS::Entity> &entity, ECS::Entity &player)
{
    ECS::Transform play = player.getComponent<ECS::Transform>(TRANSFORM);
    ::Rectangle p = {play.getPosition().X, play.getPosition().Z + player.getComponent<ECS::Moveable>(MOVEABLE).getSpeed(), play.getSize().X, play.getSize().Z};

    for (auto it = entity.begin(); it != entity.end(); it++) {
        if ((*it).getName() == player.getName())
            continue;
        if ((*it).getName().find("bomb") != (*it).getName().npos)
            continue;
        if ((*it).getName().find("bonus") != (*it).getName().npos)
            continue;
        ECS::Transform t = (*it).getComponent<ECS::Transform>(TRANSFORM);
        ::Rectangle other = {t.getPosition().X, t.getPosition().Z - player.getComponent<ECS::Moveable>(MOVEABLE).getSpeed(), t.getSize().X, t.getSize().Z};
        if (raylib::checkCollisionRecs(p, other)) {
            if ((*it).getName().find("bonus") != (*it).getName().npos) {
                ECS::Collectible &collectible = (*it).getComponent<ECS::Collectible>(ECS::COLLECTIBLE);
                collectible.setBonus(player);
                entity.erase(it);
                return true;
            }
            else
                return false;
        }
    }
    return true;
}
bool ECS::Controller::canMoveLeft(std::vector<ECS::Entity> &entity, ECS::Entity &player)
{
    ECS::Transform play = player.getComponent<ECS::Transform>(TRANSFORM);
    ::Rectangle p = {play.getPosition().X - player.getComponent<ECS::Moveable>(MOVEABLE).getSpeed(), play.getPosition().Z, play.getSize().X, play.getSize().Z};

    for (auto it = entity.begin(); it != entity.end(); it++) {
        if ((*it).getName() == player.getName())
            continue;
        if ((*it).getName().find("bomb") != (*it).getName().npos)
            continue;
        if ((*it).getName().find("bonus") != (*it).getName().npos)
            continue;
        ECS::Transform t = (*it).getComponent<ECS::Transform>(TRANSFORM);
        ::Rectangle other = {t.getPosition().X + player.getComponent<ECS::Moveable>(MOVEABLE).getSpeed(), t.getPosition().Z, t.getSize().X, t.getSize().Z};
        if (raylib::checkCollisionRecs(p, other)) {
            if ((*it).getName().find("bonus") != (*it).getName().npos) {
                ECS::Collectible &collectible = (*it).getComponent<ECS::Collectible>(ECS::COLLECTIBLE);
                collectible.setBonus(player);
                entity.erase(it);
                return true;
            }
            else
                return false;
        }
    }
    return true;
}

bool ECS::Controller::canMoveRight(std::vector<ECS::Entity> &entity, ECS::Entity &player)
{
    ECS::Transform play = player.getComponent<ECS::Transform>(TRANSFORM);
    ::Rectangle p = {play.getPosition().X + player.getComponent<ECS::Moveable>(MOVEABLE).getSpeed(), play.getPosition().Z, play.getSize().X, play.getSize().Z};

    for (auto it = entity.begin(); it != entity.end(); it++) {
        if ((*it).getName() == player.getName())
            continue;
        if ((*it).getName().find("bomb") != (*it).getName().npos)
            continue;
        ECS::Transform t = (*it).getComponent<ECS::Transform>(TRANSFORM);
        ::Rectangle other = {t.getPosition().X - player.getComponent<ECS::Moveable>(MOVEABLE).getSpeed(), t.getPosition().Z, t.getSize().X, t.getSize().Z};
        if (raylib::checkCollisionRecs(p, other)) {
            if ((*it).getName().find("bonus") != (*it).getName().npos) {
                ECS::Collectible &collectible = (*it).getComponent<ECS::Collectible>(ECS::COLLECTIBLE);
                collectible.setBonus(player);
                entity.erase(it);
                return true;
            }
            else
                return false;
        }
    }
    return true;
}