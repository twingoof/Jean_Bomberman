/*
** EPITECH PROJECT, 2021
** B-YEP-400-NAN-4-1-indiestudio-gildas.gonzalez [WSL: kali-linux]
** File description:
** Transform
*/

#ifndef TRANSFORM_HPP_
#define TRANSFORM_HPP_

#include "ECSVector.hpp"
#include "IComponent.hpp"

namespace ECS {
    class Transform: public ECS::IComponent {
        public:
            Transform() = default;
            Transform(ECS::Vector3<float> position, ECS::Vector3<int> size);
            ~Transform() = default;

            void setPosition(ECS::Vector3<float> newPosition);
            void setLastPosition(ECS::Vector3<float> newLastPosition);
            void setSize(ECS::Vector3<int> newSize);

            ECS::Vector3<float> &getPosition();
            ECS::Vector3<float> &getLastPosition();
            ECS::Vector3<int> &getSize();

            int &getSpeed();
            int &getRange();
            int &getReload();

            void addSpeed(int speed);
            void addRange(int range);
            void addReload(int reload);

        private:
            ECS::Vector3<float> _position;
            ECS::Vector3<float> _lastPosition;
            ECS::Vector3<int> _size;
            int _speed;
            int _range;
            int _reload;
    };
};

#endif /* !TRANSFORM_HPP_ */