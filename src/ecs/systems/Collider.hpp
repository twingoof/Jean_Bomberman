/*
** EPITECH PROJECT, 2021
** B-YEP-400-NAN-4-1-indiestudio-gildas.gonzalez
** File description:
** Collider
*/

#include <vector>

#ifndef COLLIDER_HPP_
#define COLLIDER_HPP_

#include "Physics.hpp"
#include "Entity.hpp"
#include <algorithm>

namespace ECS {
    class Collider {
        public:
            Collider() = default;
            ~Collider() = default;

        void checkCollision(std::vector<ECS::Entity> &scene);

    private:
        void isWindowColliding(ECS::Entity &entity);
        void isEntitesColliding(ECS::Entity &fEntity, ECS::Entity &sEntity);

        std::vector<raylib::Physics> _physicBodies;

    };
}

#endif /* !COLLIDER_HPP_ */
