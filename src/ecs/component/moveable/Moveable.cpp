/*
** EPITECH PROJECT, 2021
** B-YEP-400-NAN-4-1-indiestudio-gildas.gonzalez [WSL: Ubuntu-20.04]
** File description:
** Moveable
*/

#include "Moveable.hpp"

ECS::Moveable::Moveable(int posX, int posY, int posZ, ECS::ECSVector3 velocity)
    : _position(ECS::ECSVector3(posX, posY, posZ)), _velocityVector(velocity)
{}

ECS::Moveable::Moveable(ECS::ECSVector3 &position, ECS::ECSVector3 velocity) : _position(position), _velocityVector(velocity) {}

ECS::Moveable::~Moveable() = default;

void ECS::Moveable::moveX(int offsetX)
{
    this->_position.setX(offsetX);
}

void ECS::Moveable::moveY(int offsetY)
{
    this->_position.setY(offsetY);
}

void ECS::Moveable::moveZ(int offsetZ)
{
    this->_position.setZ(offsetZ);
}

void ECS::Moveable::move(int offsetX, int offsetY, int offsetZ)
{
    this->_position._x += offsetX;
    this->_position._y += offsetY;
    this->_position._z += offsetZ;
}

void ECS::Moveable::move(ECS::ECSVector3 offsetPosition)
{
    this->_position += offsetPosition;
}

void ECS::Moveable::place(int offsetX, int offsetY, int offsetZ)
{
    this->_position.setX(offsetX);
    this->_position.setY(offsetY);
    this->_position.setZ(offsetZ);
}

void ECS::Moveable::place(ECS::ECSVector3 offsetPosition)
{
    this->_position = offsetPosition;
}

const ECS::ECSVector3 ECS::Moveable::getPosition() const
{
    return (_position);
}

void ECS::Moveable::setVelocity(const ECS::ECSVector3 &newVector)
{
    _velocityVector = newVector;
}

ECS::ECSVector3 &ECS::Moveable::getVelocity(void) const
{
    return (_velocityVector);
}