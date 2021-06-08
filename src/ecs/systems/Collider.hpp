/*
** EPITECH PROJECT, 2021
** B-YEP-400-NAN-4-1-indiestudio-gildas.gonzalez
** File description:
** Collider
*/

#ifndef COLLIDER_HPP_
#define COLLIDER_HPP_

#include "Entity.hpp"

namespace ECS {
    class Collider {
        public:
            Collider() = default;
            ~Collider() = default;

            void checkCollision(ECS::Entity &first, ECS::Entity &second);
            void checkWindowCollisiton(ECS::Entity &first);

        private:
    };
};

#endif /* !COLLIDER_HPP_ */
