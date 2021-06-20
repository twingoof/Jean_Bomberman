/*
** EPITECH PROJECT, 2021
** B-YEP-400-NAN-4-1-indiestudio-gildas.gonzalez
** File description:
** Kill
*/

#include "Kill.hpp"

#include <random>

ECS::Kill::Kill()
    : playerDead("../assets/mort.mp3")
{}

void ECS::Kill::deleteWall(std::vector<ECS::Entity> &entities)
{
    ECS::Killable k;
    std::vector<std::vector<ECS::Entity>::iterator> toRm;
    std::vector<ECS::Entity> toAdd;

    for (auto it = entities.begin(); it != entities.end(); it++) {
        ECS::Entity e = (*it);
        try {
            k = e.getComponent<ECS::Killable>(ECS::KILLABLE);
        } catch (std::out_of_range &err) {
            continue;
        }
        if (k.getLife() <= 0) {
            if (e.getName().find("player") != std::string::npos) {
                playerDead.playSound();
            } else {
                std::srand(std::time(nullptr));
                if (std::rand() % 1 == 0) {
                    ECS::BonusType bonusType = static_cast<ECS::BonusType>(std::rand() % 3);
                    ECS::Transform t;
                    try {
                        t = e.getComponent<ECS::Transform>(ECS::TRANSFORM);
                        toAdd.push_back(Presets::createBonus("bonus" + std::to_string(this->_bonusId++), t.getPosition(), bonusType));
                    } catch (std::out_of_range &errrr) {
                        std::cerr<<"ERROR: "<<e.getName()<<" has no transform component."<<std::endl;
                    }
                }
            }
            toRm.insert(toRm.begin(), it);
        }
    }

    for (const auto &it: toRm)
        entities.erase(it);
    for (const auto &e: toAdd)
        entities.push_back(e);
}