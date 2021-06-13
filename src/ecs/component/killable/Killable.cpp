/*
** EPITECH PROJECT, 2021
** B-YEP-400-NAN-4-1-indiestudio-gildas.gonzalez [WSL: Ubuntu-20.04]
** File description:
** Killable
*/

#include "Killable.hpp"

ECS::Killable::Killable(short life)
{
    this->_life = life;
}

ECS::Killable::~Killable() = default;

short ECS::Killable::getLife(void) const
{
    return (this->_life);
}

void ECS::Killable::takeDamage(short damage)
{
    if (this->_life < damage)
        this->_life = 0;
    else
        this->_life -= damage;
}

bool ECS::Killable::isAlive(void)
{
    return (this->_life > 0);
}