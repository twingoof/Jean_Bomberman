/*
** EPITECH PROJECT, 2021
** B-YEP-400-NAN-4-1-indiestudio-gildas.gonzalez [WSL: Ubuntu-20.04]
** File description:
** Collectible
*/

#ifndef COLLECTIBLE_HPP_
#define COLLECTIBLE_HPP_

#include "IComponent.hpp"

class Collectible: public IComponent {
    public:
        Collectible();
        Collectible &operator=(const Collectible &collectible) = default;
        ~Collectible();

        void collect();
        bool isCollect() const;

    private:
        bool _collect;
};

#endif /* !COLLECTIBLE_HPP_ */
