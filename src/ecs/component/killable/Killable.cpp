/*
** EPITECH PROJECT, 2021
** B-YEP-400-NAN-4-1-indiestudio-gildas.gonzalez [WSL: Ubuntu-20.04]
** File description:
** Killable
*/

#include "Killable.hpp"

Killable::Killable(unsigned short life)
{
    this->_life = life;
}

Killable::~Killable() = default;

unsigned short Killable::getLife(void) const
{
    return (this->_life);
}

void Killable::takeDamage(unsigned short damage)
{
    if (this->_life < damage)
        this->_life = 0;
    else
        this->_life -= damage;
}

bool Killable::isAlive(void)
{
    return (this->_life == 0);
}