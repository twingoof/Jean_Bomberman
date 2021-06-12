/*
** EPITECH PROJECT, 2021
** B-YEP-400-NAN-4-1-indiestudio-gildas.gonzalez
** File description:
** Collider
*/

#ifndef COLLIDER_HPP_
#define COLLIDER_HPP_

#include "Entity.hpp"
#include <algorithm>
#include <vector>

#include "raylib.h"
// #define PHYSAC_IMPLEMENTATION
// #include "physac.h"

namespace ECS {
    class Collider {
        public:
            Collider() = default;
            ~Collider() = default;

            void checkCollision(std::vector<ECS::Entity> &scene);

        private:
            void isWindowColliding(ECS::Entity &entity);
            void isEntitesColliding(ECS::Entity &fEntity, ECS::Entity &sEntity);

            // std::vector<PhysicsBody> _physicBodies;

    };
};

#endif /* !COLLIDER_HPP_ */
