<<<<<<< HEAD
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
=======
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
>>>>>>> 05938a43ba7df350ffc50db201868b91ce697826
}