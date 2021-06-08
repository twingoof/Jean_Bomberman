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
#include "Attacker.hpp"
#include "Clickable.hpp"
#include "Drawable2D.hpp"
#include "Collectible.hpp"
#include "Drawable3D.hpp"
#include "Moveable.hpp"
#include "Killable.hpp"
#include "enum.hpp"

namespace ECS {
    class EntityManager {
        public:
            EntityManager() = default;
            ~EntityManager() = default;

<<<<<<< HEAD
        void addEntity(std::string name, Entity &newEntity);
        void createEntity(std::string name, ECSVector3 position, ECSVector3 size);
        Entity &getEntity(std::string entityName) const;
        std::map<std::string, std::shared_ptr<Entity>> getEntities() const;
        void addAttacker(std::string name, unsigned int ammo, unsigned short int damage);
        void addClickable(std::string name, void(callback()));
        void addCollectible(std::string name);
        void addDrawable2D(std::string name, std::string spritePath, DrawableType type);
        void addDrawable3D(std::string name, std::string meshPath);
        void addDrawable3D(std::string name, DrawableType type);
        void addMoveable(std::string name);
        void addKillable(std::string name, unsigned short life);
=======
            void addEntity(std::string name, ECS::Entity &newEntity);
            void createEntity(std::string name, std::vector<int> position, std::vector<int> size);
            ECS::Entity &getEntity(std::string entityName) const;
            std::map<std::string, std::shared_ptr<ECS::Entity>> getEntities() const;
            void addAttacker(std::string name, unsigned int ammo, unsigned short int damage);
            void addClickable(std::string name, void(callback()));
            void addCollectible(std::string name);
            void addDrawable2D(std::string name, std::string spritePath, ECS::DrawableType type);
            void addDrawable3D(std::string name, std::string meshPath);
            void addMoveable(std::string name);
            void addKillable(std::string name, unsigned short life);
>>>>>>> 05938a43ba7df350ffc50db201868b91ce697826

        private:
            std::map<std::string, std::shared_ptr<ECS::Entity>> _entities;
    };
};

#endif /* !ENTITYMANAGER_HPP_ */