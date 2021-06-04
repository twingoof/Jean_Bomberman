/*
** EPITECH PROJECT, 2021
** B-YEP-400-NAN-4-1-indiestudio-gildas.gonzalez [WSL: Ubuntu-20.04]
** File description:
** Physics
*/

#ifndef PHYSICS_HPP_
#define PHYSICS_HPP_

#include "ECSVector3.hpp"

class Physics {
    public:
        Physics(ECSVector3 position, float width, float height);
        Physics &operator=(const Physics &physics) = default;
        ~Physics();

        bool hasCollision(ECSVector3 position, float width, float height);
        void setPosition(ECSVector3 position);

    private:
        ECSVector3 _position;
        float _width;
        float _height;

};

#endif /* !PHYSICS_HPP_ */
