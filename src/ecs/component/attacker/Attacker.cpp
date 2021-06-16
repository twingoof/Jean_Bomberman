/*
** EPITECH PROJECT, 2021
** B-YEP-400-NAN-4-1-indiestudio-gildas.gonzalez [WSL: Ubuntu-20.04]
** File description:
** Attacker
*/

#include "Attacker.hpp"

ECS::Attacker::Attacker(unsigned int ammo, unsigned short damage)
    : _baseDamage(damage)
{
    this->_ammo = ammo;
    this->_damage = damage;
}

ECS::Attacker::~Attacker() = default;

unsigned int ECS::Attacker::getAmmo() const
{
    return (this->_ammo);
}

unsigned short ECS::Attacker::getDamage() const
{
    return (this->_damage);
}

unsigned short ECS::Attacker::getBaseDamage() const
{
    return (this->_baseDamage);
}

void ECS::Attacker::setAmmo(unsigned int ammo)
{
    this->_ammo = ammo;
}

void ECS::Attacker::setDamage(unsigned short damage)
{
    this->_damage = damage;
}

void ECS::Attacker::dealDamage(ECS::Killable &target)
{
    if (this->_ammo > 0) {
        this->_ammo = (this->_ammo - 1);
        target.takeDamage(this->_damage);
    }
}

void ECS::Attacker::resetDamage()
{
    this->_damage = this->_baseDamage;
}