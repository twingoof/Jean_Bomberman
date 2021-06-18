/*
** EPITECH PROJECT, 2021
** B-YEP-400-NAN-4-1-indiestudio-gildas.gonzalez
** File description:
** attacker
*/

#ifndef ATTACKER_HPP_
#define ATTACKER_HPP_

#include "Clock.hpp"
#include "Killable.hpp"
#include "IComponent.hpp"

namespace ECS {
    /**
     * @class Attacker Attacker.hpp "src/ecs/component/attacker/Attacker.hpp"
     */
    class Attacker: public ECS::IComponent {
        public:
            /**
             * @fn Attacker()
             * @brief Construct a new Attacker object
             * 
             */
            Attacker() = default;
            /**
             * @fn Attacker()
             * @brief Construct a new Attacker object
             * 
             * @param reloadTime Bomb reload time
             * @param damage Bomb damage
             */
            Attacker(double reloadTime, unsigned short damage);
            /**
             * @fn Attacker()
             * @brief Construct a new Attacker object
             * 
             * @param cpy 
             */
            Attacker(const Attacker &cpy) = default;
            /**
             * @fn operator=()
             * @brief surcharge operator=
             * 
             * @param rHand 
             * @return Attacker& 
             */
            Attacker &operator=(const Attacker &rHand) = default;
            /**
             * @fn ~Attacker()
             * @brief Destroy the Attacker object
             * 
             */
            ~Attacker();

            /**
             * @fn getReloadTime()
             * @brief Get the Reload Time object
             * 
             * @return double 
             */
            double getReloadTime() const;
            /**
             * @fn getDamage()
             * @brief Get the Damage object
             * 
             * @return unsigned short 
             */
            unsigned short getDamage() const;
            /**
             * @fn getBaseDamage()
             * @brief Get the Base Damage object
             * 
             * @return unsigned short 
             */
            unsigned short getBaseDamage() const;
            /**
             * @fn setReloadTime()
             * @brief Set the Reload Time object
             * 
             * @param reloadTime 
             */
            void setReloadTime(double reloadTime);
            /**
             * @fn setDamage()
             * @brief Set the Damage object
             * 
             * @param damage 
             */
            void setDamage(unsigned short damage);

            /**
             * @fn getRange()
             * @brief Get the Range object
             * 
             * @return int 
             */
            int getRange() const;
            /**
             * @fn setRange()
             * @brief Set the Range object
             * 
             * @param newVal 
             */
            void setRange(int newVal);

            /**
             * @fn resetDamage()
             * @brief 
             * 
             */
            void resetDamage();
            /**
             * @fn isReload()
             * @brief 
             * 
             * @return true 
             * @return false 
             */
            bool isReload();
            /**
             * @fn reload()
             * @brief restart clock
             * 
             */
            void reload();

        protected:

        private:
            int _range;
            ECS::Clock _clock;
            double _reloadTime;
            unsigned short _damage;
            const unsigned short _baseDamage;
    };
};

#endif /* !ATTACKER_HPP_ */