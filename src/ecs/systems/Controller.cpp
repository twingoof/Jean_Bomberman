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

ECS::Controller::Controller()
    :collectBonus("../assets/boom.mp3")
{}

void ECS::Controller::moveEntity(std::vector<ECS::Entity> &entity)
{
    for (auto it = entity.begin(); it != entity.end(); it++) {
        try {
            ECS::Moveable &m = (*it).getComponent<ECS::Moveable>(MOVEABLE);
            raylib::Controls controls;
            ECS::Vector3<float> newVel;
            float speed = m.getSpeed();

            if (controls.isKeyDown(m.getKeys()["up"])) {
                if (canMoveTop(entity, *it, speed))
                    newVel.Z = -(speed);
            }
            if (controls.isKeyDown(m.getKeys()["down"])) {
                if (canMoveDown(entity, *it, speed))
                    newVel.Z = speed;
            }
            if (controls.isKeyDown(m.getKeys()["left"])) {
                if (canMoveLeft(entity, *it, speed))
                    newVel.X = -(speed);
            }
            if (controls.isKeyDown(m.getKeys()["right"])) {
                if (canMoveRight(entity, *it, speed))
                    newVel.X = speed;
            }
            m.setVelocity(newVel);
        } catch (std::out_of_range &e) {}
    }
}

bool ECS::Controller::canMoveTop(std::vector<ECS::Entity> &entity, ECS::Entity &player, float speed)
{
    ECS::Transform play = player.getComponent<ECS::Transform>(TRANSFORM);
    ::Rectangle p= {play.getPosition().X - static_cast<float>(play.getSize().X) / 2.0, (play.getPosition().Z - static_cast<float>(play.getSize().Z) / 2.0) - speed, static_cast<float>(play.getSize().X), static_cast<float>(play.getSize().Z)};

    for (auto it = entity.begin(); it != entity.end(); it++) {
        if ((*it).getName() == player.getName())
            continue;
        if ((*it).getName().find("bomb") != (*it).getName().npos)
            continue;
        ECS::Transform t = (*it).getComponent<ECS::Transform>(TRANSFORM);
        ::Rectangle other = {t.getPosition().X - static_cast<float>(t.getSize().X) / 2.0, t.getPosition().Z - static_cast<float>(t.getSize().Z) / 2.0, t.getSize().X, t.getSize().Z};
        if (raylib::checkCollisionRecs(p, other)) {
            if ((*it).getName().find("bonus") != (*it).getName().npos) {
                ECS::Collectible &collectible = (*it).getComponent<ECS::Collectible>(ECS::COLLECTIBLE);
                collectible.setBonus(player);
                collectBonus.playSound();
                entity.erase(it);
                return true;
            } else
                return false;
        }
    }
    return true;
}

bool ECS::Controller::canMoveDown(std::vector<ECS::Entity> &entity, ECS::Entity &player, float speed)
{
    ECS::Transform play = player.getComponent<ECS::Transform>(TRANSFORM);
    ::Rectangle p = {(play.getPosition().X - static_cast<float>(play.getSize().X) / 2.0), (play.getPosition().Z - static_cast<float>(play.getSize().Z) / 2.0) + speed, static_cast<float>(play.getSize().X), static_cast<float>(play.getSize().Z)};

    for (auto it = entity.begin(); it != entity.end(); it++) {
        if ((*it).getName() == player.getName())
            continue;
        if ((*it).getName().find("bomb") != (*it).getName().npos)
            continue;
        ECS::Transform t = (*it).getComponent<ECS::Transform>(TRANSFORM);
        ::Rectangle other = {t.getPosition().X - static_cast<float>(t.getSize().X) / 2.0, t.getPosition().Z - static_cast<float>(t.getSize().Z) / 2.0, t.getSize().X, t.getSize().Z};
        if (raylib::checkCollisionRecs(p, other)) {
            if ((*it).getName().find("bonus") != (*it).getName().npos) {
                (*it).getComponent<ECS::Collectible>(ECS::COLLECTIBLE).setBonus(player);
                entity.erase(it);
                collectBonus.playSound();
                return true;
            } else
                return false;
        }
    }
    return true;
}
bool ECS::Controller::canMoveLeft(std::vector<ECS::Entity> &entity, ECS::Entity &player, float speed)
{
    ECS::Transform play = player.getComponent<ECS::Transform>(TRANSFORM);
    ::Rectangle p = {(play.getPosition().X - static_cast<float>(play.getSize().X) / 2.0) - speed, play.getPosition().Z - static_cast<float>(play.getSize().Z) / 2.0, static_cast<float>(play.getSize().X), static_cast<float>(play.getSize().Z)};

    for (auto it = entity.begin(); it != entity.end(); it++) {
        if ((*it).getName() == player.getName())
            continue;
        if ((*it).getName().find("bomb") != (*it).getName().npos)
            continue;
        ECS::Transform t = (*it).getComponent<ECS::Transform>(TRANSFORM);
        ::Rectangle other = {t.getPosition().X - static_cast<float>(t.getSize().X) / 2.0, t.getPosition().Z - static_cast<float>(t.getSize().Z) / 2.0, t.getSize().X, t.getSize().Z};
        if (raylib::checkCollisionRecs(p, other)) {
            if ((*it).getName().find("bonus") != (*it).getName().npos) {
                ECS::Collectible &collectible = (*it).getComponent<ECS::Collectible>(ECS::COLLECTIBLE);
                collectible.setBonus(player);
                collectBonus.playSound();
                entity.erase(it);
                return true;
            } else
                return false;
        }
    }
    return true;
}

bool ECS::Controller::canMoveRight(std::vector<ECS::Entity> &entity, ECS::Entity &player, float speed)
{
    ECS::Transform play = player.getComponent<ECS::Transform>(TRANSFORM);
    ::Rectangle p = {(play.getPosition().X - static_cast<float>(play.getSize().X) / 2.0) + speed, play.getPosition().Z - static_cast<float>(play.getSize().Z) / 2.0, static_cast<float>(play.getSize().X), static_cast<float>(play.getSize().Z)};

    for (auto it = entity.begin(); it != entity.end(); it++) {
        if ((*it).getName() == player.getName())
            continue;
        if ((*it).getName().find("bomb") != (*it).getName().npos)
            continue;
        ECS::Transform t = (*it).getComponent<ECS::Transform>(TRANSFORM);
        ::Rectangle other = {t.getPosition().X - static_cast<float>(t.getSize().X) / 2.0, t.getPosition().Z - static_cast<float>(t.getSize().Z) / 2.0, t.getSize().X, t.getSize().Z};
        if (raylib::checkCollisionRecs(p, other)) {
            if ((*it).getName().find("bonus") != (*it).getName().npos) {
                ECS::Collectible &collectible = (*it).getComponent<ECS::Collectible>(ECS::COLLECTIBLE);
                collectible.setBonus(player);
                collectBonus.playSound();
                entity.erase(it);
                return true;
            } else
                return false;
        }
    }
    return true;
}