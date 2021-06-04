/*
** EPITECH PROJECT, 2021
** B-YEP-400-NAN-4-1-indiestudio-gildas.gonzalez [WSL: Ubuntu-20.04]
** File description:
** Collectible
*/

#ifndef COLLECTIBLE_HPP_
#define COLLECTIBLE_HPP_

class Collectible {
    public:
        Collectible();
        Collectible &operator=(const Collectible &collectible) = default;
        ~Collectible();

        void collect();
        const bool isCollect() const;

    private:
        bool _collect;
};

#endif /* !COLLECTIBLE_HPP_ */
