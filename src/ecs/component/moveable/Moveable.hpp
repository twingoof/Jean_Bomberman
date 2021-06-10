/*
** EPITECH PROJECT, 2021
** B-YEP-400-NAN-4-1-indiestudio-gildas.gonzalez
** File description:
** Moveable
*/

#ifndef MOVEABLE_HPP_
#define MOVEABLE_HPP_

#include "vectors/ECSVector.hpp"
#include "IComponent.hpp"

namespace ECS {
    class Moveable : public ECS::IComponent{
        public:
            Moveable(ECS::Vector3<float> position = {0.0f, 0.0f, 0.0f}, ECS::Vector3<float> velocity = {0.0f, 0.0f, 0.0f});
            
            Moveable(const Moveable &cpy) = default;
            Moveable &operator=(const Moveable &Moveable);
            ~Moveable();

            ECS::Vector3<float> &getVelocity() const;

            void setVelocity(const ECS::Vector3<float> &newValue);
            void setVelocity(float x, float y, float z);

        private:
            ECS::Vector3<float> &_position;
            ECS::Vector3<float> &_velocity;
    };
};

#endif /* !MOVEABLE_HPP_ */