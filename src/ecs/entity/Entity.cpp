/*
** EPITECH PROJECT, 2021
** B-YEP-400-NAN-4-1-indiestudio-gildas.gonzalez [WSL: kali-linux]
** File description:
** Entity
*/

#include "Entity.hpp"
#include "IComponent.hpp"

Entity::Entity(std::string name, std::map<std::string, IComponent> components)
{
    this->_name = name;
    this->_components = components;
}

Entity::~Entity()
{
}

void Entity::addComponent(std::map<std::string, IComponent> newComponents)
{
    for (const auto &newComponent:newComponents)
        this->_components.insert(newComponent);
}

void Entity::deleteComponent(std::string componentID)
{
    this->_components.erase(componentID);
}

void Entity::deleteComponents(std::vector<std::string> componentsID)
{
    for (const auto &componentID:componentsID)
        this->_components.erase(componentID);
}

const std::map<std::string, IComponent> Entity::getComponent(std::string componentID) const
{
    std::map<std::string, IComponent> tmp;

    for (const auto &components:this->_components)
        if (components.first == componentID)
            tmp.insert(components);
    return (tmp);
}

const std::map<std::string, IComponent> Entity::getComponents(std::vector<std::string> componentsID) const
{
    std::map<std::string, IComponent> tmp;

    for (const auto &componentID:componentsID)
        for (const auto &components:this->_components)
            if (components.first == componentID)
                tmp.insert(components);
    return (tmp);
}

const std::map<std::string, IComponent> Entity::getComponents() const
{
    return (this->_components);
}

const std::string Entity::getName() const
{
    return (this->_name);
}