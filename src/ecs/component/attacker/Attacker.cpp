/*
** EPITECH PROJECT, 2021
** B-YEP-400-NAN-4-1-indiestudio-gildas.gonzalez [WSL: Ubuntu-20.04]
** File description:
** Attacker
*/

#include "Attacker.hpp"

ECS::Attacker::Attacker(double reloadTime, unsigned short damage)
    : _baseDamage(damage), _range(1)
{
    this->_clock.startClock();
    this->_reloadTime = reloadTime;
    this->_damage = damage;
}

ECS::Attacker::~Attacker() = default;

double ECS::Attacker::getReloadTime() const
{
    return (this->_reloadTime);
}

unsigned short ECS::Attacker::getDamage() const
{
    return (this->_damage);
}

unsigned short ECS::Attacker::getBaseDamage() const
{
    return (this->_baseDamage);
}

void ECS::Attacker::setReloadTime(double reloadTime)
{
    this->_reloadTime = reloadTime;
}

void ECS::Attacker::setDamage(unsigned short damage)
{
    this->_damage = damage;
}

void ECS::Attacker::resetDamage()
{
    this->_damage = this->_baseDamage;
}

bool ECS::Attacker::isReload(void)
{
    return (this->_clock.getTimeElapsed() > this->_reloadTime);
}

void ECS::Attacker::reload(void)
{
    this->_clock.restartClock();
}

int ECS::Attacker::getRange() const
{
    return (_range);
}

void ECS::Attacker::setRange(int newVal)
{
    _range = newVal;
}