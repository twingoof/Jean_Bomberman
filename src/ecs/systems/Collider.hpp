/*
** EPITECH PROJECT, 2021
** B-YEP-400-NAN-4-1-indiestudio-gildas.gonzalez
** File description:
** Collider
*/

#ifndef COLLIDER_HPP_
#define COLLIDER_HPP_

#include "Entity.hpp"

class Collider {
    public:
        Collider() = default;
        ~Collider();

        void checkCollision(Entity &first, Entity &second);
        void checkWindowCollisiton(Entity &first);

    private:
};

#endif /* !COLLIDER_HPP_ */
