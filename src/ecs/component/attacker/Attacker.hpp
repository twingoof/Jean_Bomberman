/*
** EPITECH PROJECT, 2021
** B-YEP-400-NAN-4-1-indiestudio-gildas.gonzalez
** File description:
** attacker
*/

#ifndef ATTACKER_HPP_
#define ATTACKER_HPP_

#include "Killable.hpp"

class Attacker {
    public:
        Attacker() = default;
        Attacker(unsigned int ammo, unsigned short damage);
        Attacker(const Attacker &Attacker) = default;
        Attacker &operator=(const Attacker &Attacker) = default;
        ~Attacker();

        void setAmmo(unsigned int ammo);
        void setDamage(unsigned short damage);
        void dealDamage(Killable &target) const;
        void resetDamage();

    protected:
    private:
        unsigned int _ammo;
        unsigned short _damage;
        const unsigned short _baseDamage;
};

#endif /* !ATTACKER_HPP_ */