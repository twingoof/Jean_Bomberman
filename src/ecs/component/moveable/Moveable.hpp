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
            Moveable(int x, int y, int z, ECS::Vector3<float> velocity = {0.0f, 0.0f, 0.0f});
            Moveable(ECS::Vector3<float> &position, ECS::Vector3<float> velocity = {0.0f, 0.0f, 0.0f});
            Moveable(const Moveable &cpy) = default;
            Moveable &operator=(const Moveable &Moveable) = default;
            ~Moveable();

            void moveX(int offsetX);
            void moveY(int offsetY);
            void moveZ(int offsetZ);

            void move(int offsetX, int offsetY, int offsetZ);
            void move(ECS::Vector3<float> offsetPosition);

            void place(int offsetX, int offsetY, int offsetZ);
            void place(ECS::Vector3<float> offsetPosition);

            const ECS::Vector3<float> getPosition() const;

            void setVelocity(const ECS::Vector3<float> &newValue);
            void setVelocity(int x, int y, int z);
            ECS::Vector3<float> &getVelocity() const;

        private:
            ECS::Vector3<float> _position;
            ECS::Vector3<float> &_velocityVector;
    };
};

#endif /* !MOVEABLE_HPP_ */