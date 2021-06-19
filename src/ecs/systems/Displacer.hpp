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

namespace ECS {
    class Displacer {
        public:
            Displacer() = default;
            Displacer(const Displacer &oldDisplacer) = default;
            Displacer &operator=(const Displacer &oldDisplacer) = default;
            ~Displacer() = default;

            void moveEntity(std::vector<ECS::Entity> &entities);

            void teleportEntity(ECS::Entity &entity, const ECS::Vector3<float> &positionVector);

        protected:

        private:

    };
};

#endif /* !DISPLACER_HPP_ */
