/*
** EPITECH PROJECT, 2021
** indie
** File description:
** TODO: add description
*/

#include "Entity.hpp"

Entity::Entity(ECSVector3 &position, ECSVector3 &size) : _position(position), _size(size)
{
    // this->_position.setX(position.getX());
    // this->_position.setY(position.getY());
    // this->_position.setZ(position.getZ());

    // this->_size.setX(position.getX());
}

ECSVector3 &Entity::getPosition() const
{
    return (this->_position);
}

ECSVector3 &Entity::getSize() const
{
    return (this->_size);
}

void Entity::setPosition(const ECSVector3 &newPos)
{
    this->_position = newPos;
}

void Entity::setSize(const ECSVector3 &newSize)
{
    this->_size = newSize;
}