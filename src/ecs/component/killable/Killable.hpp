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
    class Killable : public ECS::IComponent {
        public:
            Killable() = default;
            Killable(short life);
            Killable(const Killable &killable) = default;
            Killable &operator=(const Killable &killable) = default;
            ~Killable();

            short getLife(void) const;
            void takeDamage(short damage);
            bool isAlive(void);

        private:
            short _life;
    };
};

#endif /* !KILLABLE_HPP_ */