/*
** EPITECH PROJECT, 2021
** B-YEP-400-NAN-4-1-indiestudio-gildas.gonzalez [WSL: kali-linux]
** File description:
** Factory
*/


#ifndef FACTORY_HPP_
#define FACTORY_HPP_

#include "Entity.hpp"

namespace factory
{
    void createWall(Entity &entity);
    void createSoftWall(Entity &entity);
    void createPlayer(Entity &entity, unsigned int ammo, unsigned short damage, unsigned short life);
    void createButton(Entity &entitty, void(callback)(), std::string spritePath);
    void createImage(Entity &entity, std::string spritePath);
};

#endif /* !FACTORY_HPP_ */
