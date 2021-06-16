/*
** EPITECH PROJECT, 2021
** B-YEP-400-NAN-4-1-indiestudio-gildas.gonzalez [WSL: Ubuntu-20.04]
** File description:
** Collectible
*/

#include "Collectible.hpp"

ECS::Collectible::Collectible(ECS::BonusType newType)
{
    this->_collect = false;
    this->_type = newType;
}

ECS::Collectible::~Collectible() = default;

void ECS::Collectible::collect()
{
    _collect = true;
}

bool ECS::Collectible::isCollect() const
{
    return(this->_collect);
}

void ECS::Collectible::setBonus(ECS::Entity &targetEntity)
{
    if (this->_type == ECS::MOVE) {
        ECS::Moveable &m = targetEntity.getComponent<ECS::Moveable>(ECS::MOVEABLE);
        m.setSpeed(m.getSpeed() * 1.1);
    }
    if (this->_type == ECS::RANGE) {
        ECS::Attacker &a = targetEntity.getComponent<ECS::Attacker>(ECS::ATTACKER);
        a.setRange(a.getRange() + 1);
    }
    if (this->_type == ECS::RELOAD) {
        ECS::Attacker &a = targetEntity.getComponent<ECS::Attacker>(ECS::ATTACKER);
        a.setReloadTime(a.getReloadTime() / 2);
    }
}

ECS::BonusType ECS::Collectible::getType(void) const
{
    return (this->_type);
}