
/*
** EPITECH PROJECT, 2021
** B-YEP-400-NAN-4-1-indiestudio-gildas.gonzalez [WSL: Ubuntu-20.04]
** File description:
** GetEntityInVector
*/

#include "GetEntityInVector.hpp"

int ECS::getNbEntitiesByName(std::string name, std::vector<ECS::Entity> &entities)
{
    int nbEnt = 0;

    for (auto it = entities.begin(); it != entities.end(); it++) {
        if ((*it).getName().find(name) != std::string::npos) {
            nbEnt++;
        }
    }
    return (nbEnt);
}

std::tuple<bool, ECS::Entity &>ECS::getEntityByName(std::string name, std::vector<ECS::Entity> &entities)
{
    for (auto it = entities.begin(); it != entities.end(); it++) {
        if ((*it).getName() == name) {
            return (std::forward_as_tuple(true, *it));
        }
    }
    return (std::forward_as_tuple(false, *entities.begin()));
}

std::vector<std::tuple<bool, ECS::Entity &>>ECS::getEntitiesByName(std::string name, std::vector<ECS::Entity> &entities)
{
    std::vector<std::tuple<bool, ECS::Entity &>> tmp;

    for (auto it = entities.begin(); it != entities.end(); it++) {
        if ((*it).getName().find(name) != std::string::npos) {
            tmp.push_back(std::forward_as_tuple(true, *it));
        }
    }
    if (tmp.size() == 0)
        tmp.push_back(std::forward_as_tuple(false, *entities.begin()));
    return (tmp);
}