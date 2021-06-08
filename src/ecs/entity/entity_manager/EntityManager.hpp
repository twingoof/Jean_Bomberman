/*
** EPITECH PROJECT, 2021
** B-YEP-400-NAN-4-1-indiestudio-gildas.gonzalez [WSL: kali-linux]
** File description:
** EntityManager
*/

#include <map>
#include <vector>
#ifndef ENTITYMANAGER_HPP_
#define ENTITYMANAGER_HPP_

#include "Entity.hpp"
#include "enum.hpp"

class EntityManager {
    public:
        EntityManager() = default;
        ~EntityManager() = default;

        void addEntity(std::string name, Entity &newEntity);
        void createEntity(std::string name, std::vector<int> position, std::vector<int> size);
        Entity &getEntity(std::string entityName) const;
        void addAttacker(std::string name, unsigned int ammo, unsigned short int damage);
        void addClickable(std::string name, void(callback()));
        void addCollectible(std::string name);
        void addDrawable2D(std::string name, std::string spritePath, DrawableType type);
        void addDrawable3D(std::string name, std::string meshPath);
        void addMoveable(std::string name);
        void addKillable(std::string name, unsigned short life);

    private:
        std::map<std::string, std::shared_ptr<Entity>> _entities;
};

#endif /* !ENTITYMANAGER_HPP_ */