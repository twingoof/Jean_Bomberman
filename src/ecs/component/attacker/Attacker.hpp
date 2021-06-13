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
    class Attacker: public ECS::IComponent {
        public:
            Attacker() = default;
            Attacker(double reloadTime, unsigned short damage);
            Attacker(const Attacker &cpy) = default;
            Attacker &operator=(const Attacker &rHand) = default;
            ~Attacker();

            double getReloadTime() const;
            unsigned short getDamage() const;
            unsigned short getBaseDamage() const;
            void setReloadTime(double reloadTime);
            void setDamage(unsigned short damage);
            void dealDamage(ECS::Killable &target);
            void resetDamage();
            bool isReload();
            void reload();

        protected:
        private:
            ECS::Clock _clock;
            double _reloadTime;
            unsigned short _damage;
            const unsigned short _baseDamage;
    };
};

#endif /* !ATTACKER_HPP_ */