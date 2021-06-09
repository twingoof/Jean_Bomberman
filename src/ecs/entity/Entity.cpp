/*
** EPITECH PROJECT, 2021
** indie
** File description:
** TODO: add description
*/

#include "Entity.hpp"

ECS::Entity::Entity(ECS::Vector3 &position, ECS::Vector3 &size): _position(position), _size(size)
{
}

ECS::Vector3 &ECS::Entity::getPosition() const
{
    return (this->_position);
}

ECS::Vector3 &ECS::Entity::getSize() const
{
    return (this->_size);
}

void ECS::Entity::setPosition(const ECS::Vector3 &newPos)
{
    this->_position = newPos;
}

void ECS::Entity::setSize(const ECS::Vector3 &newSize)
{
    this->_size = newSize;
}