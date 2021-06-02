/*
** EPITECH PROJECT, 2021
** B-YEP-400-NAN-4-1-indiestudio-gildas.gonzalez
** File description:
** Moveable
*/

#ifndef MOVEABLE_HPP_
#define MOVEABLE_HPP_

#include "../../../../shitty_backup/ecs/component/vector3/Vector3.hpp"

class Moveable {
    public:
        Moveable() = default;
        Moveable(int posX, int posY, int posZ);
        Moveable(Vector3 position);
        Moveable(const Moveable &Moveable) = default;
        Moveable &operator=(const Moveable &Moveable) = default;
        ~Moveable();

        void moveX(int offsetX);
        void moveY(int offsetY);
        void moveZ(int offsetZ);
        void move(int offsetX, int offsetY, int offsetZ);
        void move(Vector3 offsetPosition);
        const Vector3 getPosition() const;

    protected:
    private:
        Vector3 _position;
};

#endif /* !MOVEABLE_HPP_ */