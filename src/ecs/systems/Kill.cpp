/*
** EPITECH PROJECT, 2021
** B-YEP-400-NAN-4-1-indiestudio-gildas.gonzalez
** File description:
** Kill
*/

#include "Kill.hpp"

ECS::Kill::Kill()
    : playerDead("./assets/boom/mp3")
{}

void ECS::Kill::deleteWall(std::vector<ECS::Entity> &entity)
{
    int type = 0;
    ECS::BonusType bonusType;
    ECS::Entity newCollectible;

    std::srand(static_cast<unsigned int>(std::time(nullptr)));
    for (auto it = entity.begin(); it != entity.end(); it++) {
        ECS::Killable kill;
        try {
            kill = (*it.base()).getComponent<ECS::Killable>(ECS::KILLABLE);
        } catch(std::out_of_range &e) {
            continue;
        }
        if (!kill.getLife()) {
            if ((*it).getName().find("wall") != (*it).getName().npos) {
                if (std::rand() % 3 == 0) {
                    type = std::rand() % 3;
                    if (type == 0)
                        bonusType = ECS::BonusType::MOVE;
                    else if (type == 1)
                        bonusType = ECS::BonusType::RANGE;
                    else
                        bonusType = ECS::BonusType::RELOAD;
                    newCollectible = Presets::createBonus("bonus" + std::to_string(this->_bonusId), (*it).getComponent<ECS::Transform>(ECS::TRANSFORM).getPosition(), bonusType);
                    this->_bonusId++;
                    entity.push_back(newCollectible);
                }
            }
            if ((*it).getName().find("player") == (*it).getName().npos) {
                playerDead.playSound();
            }
            entity.erase(it);
        }
    }
}