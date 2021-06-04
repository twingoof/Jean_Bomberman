/*
** EPITECH PROJECT, 2021
** B-YEP-400-NAN-4-1-indiestudio-gildas.gonzalez
** File description:
** Displacer
*/

#ifndef DISPLACER_HPP_
#define DISPLACER_HPP_

#include "enum.hpp"
#include "Entity.hpp"
#include "Moveable.hpp"
#include "Texture.hpp"

#include <vector>
#include <string>

class Displacer {
    public:
        Displacer() = default;
        Displacer(const Displacer &oldDisplacer) = default;
        Displacer &operator=(const Displacer &oldDisplacer) = default;
        ~Displacer() = default;

        void moveEntity(Moveable &entity, const ECSVector3 &moveVector);
        void teleportEntity(Moveable &entity, const ECSVector3 &positionVector);

    protected:

    private:

};

#endif /* !DISPLACER_HPP_ */
