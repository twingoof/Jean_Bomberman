/*
** EPITECH PROJECT, 2021
** B-YEP-400-NAN-4-1-indiestudio-gildas.gonzalez [WSL: Ubuntu-20.04]
** File description:
** Moveable
*/

#include "Moveable.hpp"

Moveable::Moveable(int posX, int posY, int posZ)
{
    this->_position.setX(posX);
    this->_position.setY(posY);
    this->_position.setZ(posZ);
}

Moveable::Moveable(ECSVector3 position)
{
    this->_position = position;
}

Moveable::~Moveable() = default;

void Moveable::moveX(int offsetX)
{
    this->_position.setX(offsetX);
}

void Moveable::moveY(int offsetY)
{
    this->_position.setY(offsetY);
}

void Moveable::moveZ(int offsetZ)
{
    this->_position.setZ(offsetZ);
}

void Moveable::move(int offsetX, int offsetY, int offsetZ)
{
    this->_position.setX(offsetX);
    this->_position.setY(offsetY);
    this->_position.setZ(offsetZ);
}

void Moveable::move(ECSVector3 offsetPosition)
{
    this->_position = offsetPosition;
}

const ECSVector3 Moveable::getPosition() const
{
    return (_position);
}