/*
** EPITECH PROJECT, 2021
** B-YEP-400-NAN-4-1-indiestudio-gildas.gonzalez [WSL: kali-linux]
** File description:
** Transform
*/

#ifndef TRANSFORM_HPP_
#define TRANSFORM_HPP_

#include "ECSVector3.hpp"

class Transform {
    public:
        Transform(ECS::Vector3<float> position, ECS::Vector3<float> size);
        ~Transform() = default;

        void setPosition(ECS::Vector3<float> newPosition);
        void setSize(ECS::Vector3<float> newSize);

        ECS::Vector3<float> &getPosition();
        ECS::Vector3<float> &getSize();

    private:
        ECS::Vector3<float> _position;
        ECS::Vector3<float> _size;
};

#endif /* !TRANSFORM_HPP_ */