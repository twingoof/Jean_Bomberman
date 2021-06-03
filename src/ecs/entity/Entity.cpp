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

void Entity::addComponent(ComponentType componentType, IComponent component)
{
    this->_toInsert = std::make_pair(componentType, std::make_unique<IComponent>(component));
    this->_components.insert(std::move(this->_toInsert));
}

void Entity::addComponents(std::map<ComponentType, IComponent> newComponents)
{
    for (const auto &newComponent:newComponents) {
        this->_toInsert = std::make_pair(newComponent.first, std::make_unique<IComponent>(newComponent.second));
        this->_components.insert(std::move(this->_toInsert));
    }
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

std::unique_ptr<IComponent> &Entity::getComponent(ComponentType componentId)
{
    return (this->_components.at(componentId));
}

std::map<ComponentType, std::unique_ptr<IComponent>> Entity::getComponents(std::vector<ComponentType> componentsId) const
{
    std::map<ComponentType, std::unique_ptr<IComponent>> toReturn;

    for (const auto &component:this->_components)
        for (const auto &componentId:componentsId)
            if (componentId == component.first)
                toReturn.insert(component);
    return (std::move(toReturn));
}

std::map<ComponentType, std::unique_ptr<IComponent>> Entity::getComponents() const
{
    return (this->_components);
}

ECSVector3 Entity::getSize() const
{
    return (this->_size);
}

ECSVector3 Entity::getPosition() const
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