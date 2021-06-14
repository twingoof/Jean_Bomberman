/*
** EPITECH PROJECT, 2021
** B-YEP-400-NAN-4-1-indiestudio-gildas.gonzalez [WSL: Ubuntu-20.04]
** File description:
** GetEntityInVector
*/

#include "GetEntityInVector.hpp"

ECS::GetEntityInVector::GetEntityInVector(std::vector<ECS::Entity> &entities)
    : _entities(entities) {}

ECS::Entity &ECS::GetEntityInVector::getEntityByName(std::string name)
{
    try {
        for (auto it = this->_entities.begin(); it != this->_entities.end(); it++) {
            if ((*it.base()).getName() == name)
                return (*it);
        }
    } catch (std::out_of_range error) {
        throw(error);
    }
}

std::vector<ECS::Entity> &ECS::GetEntityInVector::getEntityInVector(void)
{
    return (this->_entities);
}