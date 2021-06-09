/*
** EPITECH PROJECT, 2021
** indie
** File description:
** TODO: add description
*/

#include "Entity.hpp"

ECS::Entity::Entity(ECS::Vector3<float> &position, ECS::Vector3<int> &size): _position(position), _size(size)
{
}

ECS::Vector3<float> &ECS::Entity::getPosition() const
{
    return (this->_position);
}

ECS::Vector3<int> &ECS::Entity::getSize() const
{
    return (this->_size);
}

void ECS::Entity::setPosition(const ECS::Vector3<float> &newPos)
{
    this->_position = newPos;
}

void ECS::Entity::setSize(const ECS::Vector3<int> &newSize)
{
    this->_size = newSize;
}