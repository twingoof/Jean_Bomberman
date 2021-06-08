/*
** EPITECH PROJECT, 2021
** indie
** File description:
** TODO: add description
*/

#include "Entity.hpp"

Entity::Entity(ECSVector3 &position, ECSVector3 &size): _position(position), _size(size)
{
}

template<class T>
void Entity::addComponent(T &component, ComponentType type)
{
    this->_components.insert(std::make_pair(type, std::make_shared<T>(component)));
}

template<class T>
T &Entity::getComponent(ComponentType type) const
{
    return dynamic_cast<T&>((*this->_components.at(type)));
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