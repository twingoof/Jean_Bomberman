/*
** EPITECH PROJECT, 2021
** B-YEP-400-NAN-4-1-indiestudio-gildas.gonzalez
** File description:
** Killable
*/

#ifndef KILLABLE_HPP_
#define KILLABLE_HPP_

class Killable {
    public:
        Killable() = default;
        Killable(unsigned short life);
        Killable(const Killable &killable) = default;
        Killable &operator=(const Killable &killable) = default;
        ~Killable();

        unsigned short getLife(void) const;
        void takeDamage(unsigned short damage);
        bool isAlive(void);

    private:
        unsigned short _life;
};

#endif /* !KILLABLE_HPP_ */