/*
** EPITECH PROJECT, 2021
** B-YEP-400-NAN-4-1-indiestudio-gildas.gonzalez [WSL: kali-linux]
** File description:
** Transform
*/

#include "Transform.hpp"

Transform::Transform(ECS::Vector3<float> position, ECS::Vector3<float> size): _position(position), _size(size)
{
}

void Transform::setPosition(ECS::Vector3<float> newPosition)
{
    this->_position = newPosition;
}

void Transform::setSize(ECS::Vector3<float> newSize)
{
    this->_size = newSize;
}

ECS::Vector3<float> &Transform::getPosition()
{
    return (this->_position);
}

ECS::Vector3<float> &Transform::getSize()
{
    return (this->_size);
}