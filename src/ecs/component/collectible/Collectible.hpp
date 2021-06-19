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
    /**
     * @class Collectible Collectible.hpp "src/ecs/component/collectible/Collectible.hpp"
     */
    class Collectible: public ECS::IComponent {
        public:
            /**
             * @fn Collectible()
             * @brief Construct a new Collectible object
             * 
             */
            Collectible() = default;
            /**
             * @fn Collectible()
             * @brief Construct a new Collectible object
             * 
             * @param type 
             */
            Collectible(ECS::BonusType type);
            /**
             * @fn operator=()
             * @brief surcharge operator=
             * 
             * @param collectible 
             * @return Collectible& 
             */
            Collectible &operator=(const Collectible &collectible) = default;
            /**
             * @fn ~Collectible()
             * @brief Destroy the Collectible object
             * 
             */
            ~Collectible();

            /**
             * @fn setBonus()
             * @brief Set the Bonus object
             * 
             * @param entity 
             */
            void setBonus(ECS::Entity &entity);

            /**
             * @fn getType()
             * @brief Get the Type object
             * 
             * @return ECS::BonusType 
             */
            ECS::BonusType getType() const;

            /**
             * @fn collect()
             * @brief set _collect at true
             * 
             */
            void collect();
            /**
             * @fn isCollect()
             * @brief return if collectible is collected
             * 
             * @return true 
             * @return false 
             */
            bool isCollect() const;

        private:
            bool _collect;
            ECS::BonusType _type;

    };
};

#endif /* !COLLECTIBLE_HPP_ */
