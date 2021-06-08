/*
** EPITECH PROJECT, 2021
** B-YEP-400-NAN-4-1-indiestudio-gildas.gonzalez
** File description:
** Collider
*/

#ifndef COLLIDER_HPP_
#define COLLIDER_HPP_

#include "Entity.hpp"
#include "EntityManager.hpp"

class Collider {
    public:
        Collider() = default;
        ~Collider() = default;

        void checkCollision(EntityManager &scene);

    private:
        void isWindowColliding(Entity &entity);
        void isEntitesColliding(Entity &fEntity, Entity &sEntity);
};

#endif /* !COLLIDER_HPP_ */
