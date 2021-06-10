/*
** EPITECH PROJECT, 2021
** B-YEP-400-NAN-4-1-indiestudio-gildas.gonzalez
** File description:
** Physics
*/

#ifndef PHYSICS_HPP_
#define PHYSICS_HPP_

#include "raylib.h"
#include "physac.h"
#include <memory>

namespace raylib {
    class Physics : public ::PhysicsBodyData {
        public:
            Physics() = default;
            Physics(const Physics &rHand);
            Physics &operator=(const Physics &rHand);
            ~Physics() = default;

            void createPhysicBodyCircle(::Vector2 position, float radius, float density);
            void createPhysicBodyRect(::Vector2 position, float width, float height, float density);
            void createPhysicBodyPolygon(::Vector2 position, float radius, int sides, float density);

            void addTorque(float amount);
            void addForce(::Vector2 force);
            void shatter(::Vector2 pos, float force);

            void destroyPhysicBody();

        protected:

        private:
            void setPhysicBody(const ::PhysicsBodyData physicBody);

    };
};

#endif /* !PHYSICS_HPP_ */
