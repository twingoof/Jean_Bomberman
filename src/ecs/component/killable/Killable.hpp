/*
** EPITECH PROJECT, 2021
** B-YEP-400-NAN-4-1-indiestudio-gildas.gonzalez
** File description:
** Killable
*/

#ifndef KILLABLE_HPP_
#define KILLABLE_HPP_

#include "IComponent.hpp"

<<<<<<< HEAD
class Killable : public IComponent {
    public:
        Killable() = default;
        Killable(unsigned short life);
        Killable(const Killable &killable) = default;
        Killable &operator=(const Killable &killable) = default;
        ~Killable();
=======
namespace ECS {
    class Killable : public ECS::IComponent {
        public:
            Killable() = default;
            Killable(unsigned short life);
            Killable(const Killable &killable) = default;
            Killable &operator=(const Killable &killable) = default;
            ~Killable();
>>>>>>> 05938a43ba7df350ffc50db201868b91ce697826

            unsigned short getLife(void) const;
            void takeDamage(unsigned short damage);
            bool isAlive(void);

        private:
            unsigned short _life;
    };
};

#endif /* !KILLABLE_HPP_ */