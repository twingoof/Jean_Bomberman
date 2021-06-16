/*
** EPITECH PROJECT, 2021
** B-YEP-400-NAN-4-1-indiestudio-gildas.gonzalez
** File description:
** Collider
*/

#ifndef COLLIDER_HPP_
#define COLLIDER_HPP_

#include "Collectible.hpp"
#include "Transform.hpp"
#include "Collision.hpp"
#include "Moveable.hpp"
#include "Entity.hpp"
#include "Window.hpp"
#include "Entity.hpp"
#include <algorithm>
#include <vector>

namespace ECS {
    class Collider {
        public:
            Collider() = default;
            ~Collider() = default;

            void checkCollision(std::vector<ECS::Entity> &scene);

        private:
            void isWindowColliding(ECS::Entity &entity);
            int isEntitesColliding(ECS::Entity &fEntity, ECS::Entity &sEntity);

    };
};

#endif /* !COLLIDER_HPP_ */
