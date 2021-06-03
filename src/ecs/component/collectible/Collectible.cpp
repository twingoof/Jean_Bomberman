/*
** EPITECH PROJECT, 2021
** B-YEP-400-NAN-4-1-indiestudio-gildas.gonzalez [WSL: Ubuntu-20.04]
** File description:
** Collectible
*/

#include "Collectible.hpp"

Collectible::Collectible()
{
    this->_collect = false;
}

Collectible::~Collectible() = default;

void Collectible::collect()
{
    _collect = true;
}

const bool Collectible::isCollect() const
{
    return(this->_collect);
}