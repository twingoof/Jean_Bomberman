/*
** EPITECH PROJECT, 2021
** B-YEP-400-NAN-4-1-indiestudio-gildas.gonzalez
** File description:
** Physics
*/

#ifndef PHYSICS_HPP_
#define PHYSICS_HPP_

#include "raylib.h"
#include <string>

#define PHYSAC_IMPLEMENTATION
#include "physac.h"

namespace raylib {
    class Physics : public ::PhysicsBodyData {
        public:
            Physics(const std::string &name);
            Physics(const Physics &rHand);
            Physics &operator=(const Physics &rHand);
            ~Physics();

            void createPhysicBodyCircle(::Vector2 position, float radius, float density);
            void createPhysicBodyRect(::Vector2 position, float width, float height, float density);
            void createPhysicBodyPolygon(::Vector2 position, float radius, int sides, float density);

            void addTorque(float amount);
            void addForce(::Vector2 force);
            void shatter(::Vector2 pos, float force);

            void disableDynamicPhysic();
            void enableDynamicPhysic();

            const std::string &getName() const;

            void destroyPhysicBody();

        protected:

        private:
            std::string _name;
            void setPhysicBody(const ::PhysicsBodyData physicBody);

    };
};

#endif /* !PHYSICS_HPP_ */
