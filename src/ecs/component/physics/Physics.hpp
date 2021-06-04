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
        Physics(ECSVector3 &position, ECSVector3 &size, int layer = 0);
        Physics &operator=(const Physics &physics) = default;
        ~Physics();

        const ECSVector3 &getPosition() const;
        const ECSVector3 &getSize() const;
        const int getLayer() const;

        bool hasCollision(Physics toCompare);

        void setPosition(ECSVector3 &newPosition);
        void setSize(ECSVector3 &newSize);
        void setLayer(int newLayer);

    private:
        ECSVector3 &_position;
        ECSVector3 &_size;
        int _layer;
};

#endif /* !PHYSICS_HPP_ */
