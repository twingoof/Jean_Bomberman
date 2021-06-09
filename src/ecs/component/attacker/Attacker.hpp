/*
** EPITECH PROJECT, 2021
** B-YEP-400-NAN-4-1-indiestudio-gildas.gonzalez
** File description:
** attacker
*/

#ifndef ATTACKER_HPP_
#define ATTACKER_HPP_

#include "Killable.hpp"
#include "IComponent.hpp"

namespace ECS {
    class Attacker: public ECS::IComponent {
        public:
            Attacker() = default;
            Attacker(unsigned int ammo, unsigned short damage);
            Attacker(const Attacker &Attacker) = default;
            Attacker &operator=(const Attacker &Attacker) = default;
            ~Attacker();

            unsigned int getAmmo() const;
            unsigned short getDamage() const;
            unsigned short getBaseDamage() const;
            void setAmmo(unsigned int ammo);
            void setDamage(unsigned short damage);
            void dealDamage(ECS::Killable &target);
            void resetDamage();

        protected:
        private:
            unsigned int _ammo;
            unsigned short _damage;
            const unsigned short _baseDamage;
    };
};

#endif /* !ATTACKER_HPP_ */