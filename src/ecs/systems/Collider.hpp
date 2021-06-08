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

namespace ECS {
    class Collider {
        public:
            Collider() = default;
            ~Collider() = default;

<<<<<<< HEAD
        void checkCollision(EntityManager &scene);

    private:
        void isWindowColliding(Entity &entity);
        void isEntitesColliding(Entity &fEntity, Entity &sEntity);
=======
            void checkCollision(ECS::Entity &first, ECS::Entity &second);
            void checkWindowCollisiton(ECS::Entity &first);

        private:
    };
>>>>>>> 05938a43ba7df350ffc50db201868b91ce697826
};

#endif /* !COLLIDER_HPP_ */
