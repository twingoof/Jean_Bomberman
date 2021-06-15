/*
** EPITECH PROJECT, 2021
** B-YEP-400-NAN-4-1-indiestudio-gildas.gonzalez [WSL: Ubuntu-20.04]
** File description:
** GetEntityInVector
*/

#ifndef GETENTITYINVECTOR_HPP_
#define GETENTITYINVECTOR_HPP_

#include "Entity.hpp"
#include <vector>
#include <string>
#include <tuple>

namespace ECS {
    class GetEntityInVector {
        public:
            GetEntityInVector() = default;
            GetEntityInVector(std::vector<ECS::Entity> &entities);
            GetEntityInVector(const GetEntityInVector &vectorEntity) = default;
            ~GetEntityInVector() = default;

            std::tuple<bool, ECS::Entity &>getEntityByName(std::string name);
            std::vector<ECS::Entity> &getEntityInVector();

        protected:
        private:
            std::vector<ECS::Entity> &_entities;
    };
};

#endif /* !GETENTITYINVECTOR_HPP_ */
