/*
** EPITECH PROJECT, 2021
** B-YEP-400-NAN-4-1-indiestudio-gildas.gonzalez [WSL: Ubuntu-20.04]
** File description:
** Moveable
*/

#include "Moveable.hpp"

Moveable::Moveable(int posX, int posY, int posZ, ECSVector3 velocity)
    : _position(ECSVector3(posX, posY, posZ)), _velocityVector(velocity)
{}

Moveable::Moveable(ECSVector3 &position, ECSVector3 velocity) : _position(position), _velocityVector(velocity) {}

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

void Moveable::setVelocity(const ECSVector3 &newVector)
{
    _velocityVector = newVector;
}

ECSVector3 &Moveable::getVelocity(void) const
{
    return (_velocityVector);
}