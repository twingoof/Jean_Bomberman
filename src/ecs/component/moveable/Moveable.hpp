/*
** EPITECH PROJECT, 2021
** B-YEP-400-NAN-4-1-indiestudio-gildas.gonzalez
** File description:
** Moveable
*/

#ifndef MOVEABLE_HPP_
#define MOVEABLE_HPP_

#include "ECSVector3.hpp"
#include "IComponent.hpp"

namespace ECS {
    class Moveable : public ECS::IComponent{
        public:
            Moveable() = default;
            Moveable(int x, int y, int z, ECS::ECSVector3 velocity = {0, 0, 0});
            Moveable(ECS::ECSVector3 &position, ECS::ECSVector3 velocity = {0, 0, 0});
            Moveable(const Moveable &cpy) = default;
            Moveable &operator=(const Moveable &Moveable) = default;
            ~Moveable();

            void moveX(int offsetX);
            void moveY(int offsetY);
            void moveZ(int offsetZ);

            void move(int offsetX, int offsetY, int offsetZ);
            void move(ECS::ECSVector3 offsetPosition);

            void place(int offsetX, int offsetY, int offsetZ);
            void place(ECS::ECSVector3 offsetPosition);

            const ECS::ECSVector3 getPosition() const;

            void setVelocity(const ECS::ECSVector3 &newValue);
            ECS::ECSVector3 &getVelocity() const;

        private:
            ECS::ECSVector3 _position;
            ECS::ECSVector3 &_velocityVector;
    };
};

#endif /* !MOVEABLE_HPP_ */