/*
** EPITECH PROJECT, 2021
** B-YEP-400-NAN-4-1-indiestudio-gildas.gonzalez [WSL: kali-linux]
** File description:
** Transform
*/

#include "Transform.hpp"

ECS::Transform::Transform(ECS::Vector3<float> position, ECS::Vector3<int> size): _position(position), _lastPosition(position), _size(size)
{}

void ECS::Transform::setPosition(ECS::Vector3<float> newPosition)
{
    this->_position.X = newPosition.X;
    this->_position.Y = newPosition.Y;
    this->_position.Z = newPosition.Z;
}

void ECS::Transform::setLastPosition(ECS::Vector3<float> newPosition)
{
    this->_lastPosition.X = newPosition.X;
    this->_lastPosition.Y = newPosition.Y;
    this->_lastPosition.Z = newPosition.Z;
}

void ECS::Transform::setSize(ECS::Vector3<int> newSize)
{
    this->_size = newSize;
}

ECS::Vector3<float> &ECS::Transform::getPosition()
{
    return (this->_position);
}

ECS::Vector3<float> &ECS::Transform::getLastPosition()
{
    return (this->_lastPosition);
}

ECS::Vector3<int> &ECS::Transform::getSize()
{
    return (this->_size);
}