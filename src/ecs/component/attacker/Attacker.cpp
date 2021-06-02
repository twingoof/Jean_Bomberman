/*
** EPITECH PROJECT, 2021
** B-YEP-400-NAN-4-1-indiestudio-gildas.gonzalez [WSL: Ubuntu-20.04]
** File description:
** Attacker
*/

#include "Attacker.hpp"

Attacker::Attacker(unsigned int ammo, unsigned short damage)
    : _baseDamage(damage)
{
    this->_ammo = ammo;
    this->_damage = damage;
}

Attacker::~Attacker() = default;

void Attacker::setAmmo(unsigned int ammo)
{
    this->_ammo = ammo;
}

void Attacker::setDamage(unsigned short damage)
{
    this->_damage = damage;
}

void Attacker::dealDamage(Killable &target) const
{
    if (this->_ammo > 0)
        target.takeDamage(this->_damage);
}

void Attacker::resetDamage()
{
    this->_damage = this->_baseDamage;
}