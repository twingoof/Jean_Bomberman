/*
** EPITECH PROJECT, 2021
** indie
** File description:
** TODO: add description
*/

#include "Entity.hpp"

ECS::Entity::Entity(ECS::ECSVector3 &position, ECS::ECSVector3 &size): _position(position), _size(size)
{
}

template<class T>
void ECS::Entity::addComponent(T &component, ECS::ComponentType type)
{
    this->_components.insert(std::make_pair(type, std::make_shared<T>(component)));
}

template<class T>
T &ECS::Entity::getComponent(ECS::ComponentType type) const
{
    return dynamic_cast<T&>((*this->_components.at(type)));
}

ECS::ECSVector3 &ECS::Entity::getPosition() const
{
    return (this->_position);
}

ECS::ECSVector3 &ECS::Entity::getSize() const
{
    return (this->_size);
}

void ECS::Entity::setPosition(const ECS::ECSVector3 &newPos)
{
    this->_position = newPos;
}

void ECS::Entity::setSize(const ECS::ECSVector3 &newSize)
{
    this->_size = newSize;
}