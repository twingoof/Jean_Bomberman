/*
** EPITECH PROJECT, 2021
** B-YEP-400-NAN-4-1-indiestudio-gildas.gonzalez [WSL: Ubuntu-20.04]
** File description:
** Moveable
*/

#include "Moveable.hpp"

Moveable::Moveable(int posX, int posY, int posZ, float velocity)
{
    this->_position.setX(posX);
    this->_position.setY(posY);
    this->_position.setZ(posZ);
    this->setVelocity(velocity);
}

Moveable::Moveable(ECSVector3 position, float velocity)
{
    this->_position = position;
    this->setVelocity(velocity);
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
    this->_position._x += offsetX;
    this->_position._y += offsetY;
    this->_position._z += offsetZ;
}

void Moveable::move(ECSVector3 offsetPosition)
{
    this->_position += offsetPosition;
}

void Moveable::place(int offsetX, int offsetY, int offsetZ)
{
    this->_position.setX(offsetX);
    this->_position.setY(offsetY);
    this->_position.setZ(offsetZ);
}

void Moveable::place(ECSVector3 offsetPosition)
{
    this->_position = offsetPosition;
}

const ECSVector3 Moveable::getPosition() const
{
    return (_position);
}

void Moveable::setVelocity(float newValue)
{
    _velocity = newValue;
}

const float Moveable::getVelocity(void) const
{
    return (_velocity);
}