/*
** EPITECH PROJECT, 2021
** B-YEP-400-NAN-4-1-indiestudio-gildas.gonzalez [WSL: Ubuntu-20.04]
** File description:
** GetEntityInVector
*/

#include "GetEntityInVector.hpp"

ECS::GetEntityInVector::GetEntityInVector(std::vector<ECS::Entity> &entities)
    : _entities(entities) {}

std::tuple<bool, ECS::Entity &>ECS::GetEntityInVector::getEntityByName(std::string name)
{
    try {
        for (auto it = this->_entities.begin(); it != this->_entities.end(); it++) {
            if ((*it.base()).getName() == name) {
                return (std::forward_as_tuple(true, *it));
            }
        }
    } catch (std::out_of_range error) {
        throw(error);
    }
    return (std::forward_as_tuple(false, *this->_entities.begin()));
}

std::vector<ECS::Entity> &ECS::GetEntityInVector::getEntityInVector(void)
{
    return (this->_entities);
}