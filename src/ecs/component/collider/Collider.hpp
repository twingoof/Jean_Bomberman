/*
** EPITECH PROJECT, 2021
** B-YEP-400-NAN-4-1-indiestudio-gildas.gonzalez
** File description:
** Collider
*/

#ifndef COLLIDER_HPP_
#define COLLIDER_HPP_

#include "IComponent.hpp"

class Collider:public IComponent {
    public:
        Collider(std::array<int, 3> size = {});
        ~Collider();
        bool isTouching(std::pair<int, int> actualPostion, std::pair<std::pair<int, int>, std::array<int, 3>> toCompare);
        const std::array<int, 3> getSize() const;
        void setSize(std::array<int, 3> newSize);

    private:
        std::array<int, 3> _size;
};

#endif /* !COLLIDER_HPP_ */