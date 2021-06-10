/*
** EPITECH PROJECT, 2021
** B-YEP-400-NAN-4-1-indiestudio-gildas.gonzalez [WSL: Ubuntu-20.04]
** File description:
** Moveable
*/

#include "Moveable.hpp"

ECS::Moveable::Moveable(int posX, int posY, int posZ, ECS::Vector3<float> velocity) : _position(ECS::Vector3<float>(posX, posY, posZ)), _velocityVector(velocity)
{}

ECS::Moveable::Moveable(ECS::Vector3<float> &position, ECS::Vector3<float> velocity) : _position(position), _velocityVector(velocity)
{}

ECS::Moveable::~Moveable() = default;

void ECS::Moveable::moveX(int offsetX)
{
    this->_position.X = offsetX;
}

void ECS::Moveable::moveY(int offsetY)
{
    this->_position.Y = offsetY;
}

void ECS::Moveable::moveZ(int offsetZ)
{
    this->_position.Z = offsetZ;
}

void ECS::Moveable::move(int offsetX, int offsetY, int offsetZ)
{
    this->_position.X += offsetX;
    this->_position.Y += offsetY;
    this->_position.Z += offsetZ;
}

void ECS::Moveable::move(ECS::Vector3<float> offsetPosition)
{
    this->_position += offsetPosition;
}

void ECS::Moveable::place(int offsetX, int offsetY, int offsetZ)
{
    this->_position.X = offsetX;
    this->_position.Y = offsetY;
    this->_position.Z = offsetZ;
}

void ECS::Moveable::place(ECS::Vector3<float> offsetPosition)
{
    this->_position = offsetPosition;
}

const ECS::Vector3<float> ECS::Moveable::getPosition() const
{
    return (_position);
}

void ECS::Moveable::setVelocity(const ECS::Vector3<float> &newVector)
{
    _velocityVector = newVector;
}

void ECS::Moveable::setVelocity(int x, int y, int z)
{
    _velocityVector.X = x;
    _velocityVector.Y = y;
    _velocityVector.Z = z;
}

ECS::Vector3<float> &ECS::Moveable::getVelocity(void) const
{
    return (_velocityVector);
}