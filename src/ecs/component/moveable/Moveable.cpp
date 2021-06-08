/*
** EPITECH PROJECT, 2021
** B-YEP-400-NAN-4-1-indiestudio-gildas.gonzalez [WSL: Ubuntu-20.04]
** File description:
** Moveable
*/

#include "Moveable.hpp"

ECS::Moveable::Moveable(int posX, int posY, int posZ, ECS::Vector3 velocity)
    : _position(ECS::Vector3(posX, posY, posZ)), _velocityVector(velocity)
{}

ECS::Moveable::Moveable(ECS::Vector3 &position, ECS::Vector3 velocity) : _position(position), _velocityVector(velocity) {}

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

void ECS::Moveable::move(ECS::Vector3 offsetPosition)
{
    this->_position += offsetPosition;
}

void ECS::Moveable::place(int offsetX, int offsetY, int offsetZ)
{
    this->_position.setX(offsetX);
    this->_position.setY(offsetY);
    this->_position.setZ(offsetZ);
}

void ECS::Moveable::place(ECS::Vector3 offsetPosition)
{
    this->_position = offsetPosition;
}

const ECS::Vector3 ECS::Moveable::getPosition() const
{
    return (_position);
}

void ECS::Moveable::setVelocity(const ECS::Vector3 &newVector)
{
    _velocityVector = newVector;
}

ECS::Vector3 &ECS::Moveable::getVelocity(void) const
{
    return (_velocityVector);
}