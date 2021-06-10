/*
** EPITECH PROJECT, 2021
** B-YEP-400-NAN-4-1-indiestudio-gildas.gonzalez [WSL: kali-linux]
** File description:
** Transform
*/

#include "Transform.hpp"

ECS::Transform::Transform(ECS::Vector3<float> position, ECS::Vector3<int> size): _position(position), _size(size)
{
}

void ECS::Transform::setPosition(ECS::Vector3<float> newPosition)
{
    this->_position = newPosition;
}

void ECS::Transform::setSize(ECS::Vector3<int> newSize)
{
    this->_size = newSize;
}

ECS::Vector3<float> &ECS::Transform::getPosition()
{
    return (this->_position);
}

ECS::Vector3<int> &ECS::Transform::getSize()
{
    return (this->_size);
}