/*
** EPITECH PROJECT, 2021
** B-YEP-400-NAN-4-1-indiestudio-gildas.gonzalez
** File description:
** Entity
*/

#include "Entity.hpp"
#include "enum.hpp"

Entity::Entity(std::string id, ECSVector3 position, ECSVector3 size)
{
    this->_id = id;
    this->_position = position;
    this->_size = size;
}

Entity::~Entity() = default;

void Entity::addComponent(std::pair<ComponentType, IComponent> newComponent)
{
    this->_components.insert(newComponent);
}

void Entity::addComponents(std::map<ComponentType, IComponent> newComponents)
{
    for (const auto &newComponent:newComponents)
        this->_components.insert(newComponent);
}

void Entity::deleteComponent(ComponentType componentId)
{
    this->_components.erase(componentId);
}

void Entity::deleteComponents(std::vector<ComponentType> componentsId)
{
    for (const auto &componentId:componentsId)
        this->_components.erase(componentId);
}

const IComponent Entity::getComponent(ComponentType componentId) const
{
    return (this->_components.at(componentId));
}

const std::map<ComponentType, IComponent> Entity::getComponents(std::vector<ComponentType> componentsId) const
{
    std::map<ComponentType, IComponent> toReturn = {};

    for (const auto &component:this->_components)
        for (const auto &componentId:componentsId)
            if (componentId == component.first)
                toReturn.insert(component);
    return (toReturn);
}

const std::map<ComponentType, IComponent> Entity::getComponents() const
{
    return (this->_components);
}

const ECSVector3 Entity::getSize() const
{
    return (this->_size);
}

const ECSVector3 Entity::getPosition() const
{
    return (this->_position);
}

void Entity::setSize(ECSVector3 newSize)
{
    this->_size = newSize;
}

void Entity::setPosition(ECSVector3 newPosition)
{
    this->_position = newPosition;
}