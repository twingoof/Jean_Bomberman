/*
** EPITECH PROJECT, 2021
** B-YEP-400-NAN-4-1-indiestudio-gildas.gonzalez [WSL: Ubuntu-20.04]
** File description:
** Collectible
*/

#ifndef COLLECTIBLE_HPP_
#define COLLECTIBLE_HPP_

#include "IComponent.hpp"
#include "Attacker.hpp"
#include "Moveable.hpp"
#include "Entity.hpp"
#include "enum.hpp"

namespace ECS {
    class Collectible: public ECS::IComponent {
        public:
            Collectible() = default;
            Collectible(ECS::BonusType type);
            Collectible &operator=(const Collectible &collectible) = default;
            ~Collectible();

            void setBonus(ECS::Entity &entity);

            ECS::BonusType getType() const;

            void collect();
            bool isCollect() const;

        private:
            bool _collect;
            ECS::BonusType _type;

    };
};

#endif /* !COLLECTIBLE_HPP_ */
