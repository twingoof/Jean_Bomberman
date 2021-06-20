/*
** EPITECH PROJECT, 2021
** B-YEP-400-NAN-4-1-indiestudio-gildas.gonzalez
** File description:
** Killable
*/

#ifndef KILLABLE_HPP_
#define KILLABLE_HPP_

#include "IComponent.hpp"

namespace ECS {
    /**
     * @class Killable Killable.hpp "src/ecs/component/killable/Killable.hpp"
     */
    class Killable : public ECS::IComponent {
        public:
            /**
             * @fn Killable()
             * @brief Construct a new Killable object
             * 
             */
            Killable() = default;
            /**
             * @fn Killable()
             * @brief Construct a new Killable object
             * 
             * @param life 
             */
            Killable(short life);
            /**
             * @fn Killable()
             * @brief Construct a new Killable object
             * 
             * @param killable 
             */
            Killable(const Killable &killable) = default;
            /**
             * @fn operator=()
             * @brief surcharge operator=
             * 
             * @param killable 
             * @return Killable& 
             */
            Killable &operator=(const Killable &killable) = default;
            /**
             * @fn ~Killable()
             * @brief Destroy the Killable object
             * 
             */
            ~Killable();

            /**
             * @fn getLife()
             * @brief Get the Life object
             * 
             * @return short 
             */
            short getLife(void) const;
            /**
             * @fn takeDamage()
             * @brief deal damage to Entity
             * 
             * @param damage 
             */
            void takeDamage(short damage);

        private:
            short _life;
    };
};

#endif /* !KILLABLE_HPP_ */