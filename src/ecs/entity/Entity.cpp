/*
** EPITECH PROJECT, 2021
** indie
** File description:
** TODO: add description
*/

#include "Entity.hpp"

ECS::Entity::Entity(std::string name): _name(name) {};

std::string ECS::Entity::getName() const
{
    return (this->_name);
}

void ECS::Entity::setName(std::string newName)
{
    this->_name = newName;
}