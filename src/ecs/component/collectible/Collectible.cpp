/*
** EPITECH PROJECT, 2021
** B-YEP-400-NAN-4-1-indiestudio-gildas.gonzalez [WSL: Ubuntu-20.04]
** File description:
** Collectible
*/

#include "Collectible.hpp"

ECS::Collectible::Collectible()
{
    this->_collect = false;
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