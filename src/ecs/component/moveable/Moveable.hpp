/*
** EPITECH PROJECT, 2021
** B-YEP-400-NAN-4-1-indiestudio-gildas.gonzalez
** File description:
** Moveable
*/

#ifndef MOVEABLE_HPP_
#define MOVEABLE_HPP_

#include "ECSVector3.hpp"

class Moveable {
    public:
        Moveable() = default;
        Moveable(int posX, int posY, int posZ, float _velocity = 1.0f);
        Moveable(ECSVector3 position, float _velocity = 1.0f);
        Moveable(const Moveable &Moveable) = default;
        Moveable &operator=(const Moveable &Moveable) = default;
        ~Moveable();

        void moveX(int offsetX);
        void moveY(int offsetY);
        void moveZ(int offsetZ);

        void move(int offsetX, int offsetY, int offsetZ);
        void move(ECSVector3 offsetPosition);

        void place(int offsetX, int offsetY, int offsetZ);
        void place(ECSVector3 offsetPosition);

        const ECSVector3 getPosition() const;

        void setVelocity(float newValue);
        const float getVelocity() const;

    private:
        ECSVector3 _position;
        float _velocity;
};

#endif /* !MOVEABLE_HPP_ */