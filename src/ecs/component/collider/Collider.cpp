/*
** EPITECH PROJECT, 2021
** B-YEP-400-NAN-4-1-indiestudio-gildas.gonzalez
** File description:
** Collider
*/

#include "Collider.hpp"
#include <array>

Collider::Collider(std::array<int, 3> size)
{
    this->_size = size;
}

Collider::~Collider() = default;

bool Collider::isTouching(std::pair<int, int> actualPostion, std::pair<std::pair<int, int>, std::array<int, 3>> toCompare)
{
    int xa1 = actualPostion.first;
    int xa2 = xa1 + _size.at(0);
    int xb1 = toCompare.first.first;
    int xb2 = xb1 + toCompare.second.at(0);

    return (((xa2 - xb1) > 0) || ((xa2 - xb2) > 0) || ((xa1 - xb1) > 0) || ((xa1 - xb2) > 0));    
}

const std::array<int, 3> Collider::getSize() const
{
    return (this->_size);
}

void Collider::setSize(std::array<int, 3> newSize)
{
    this->_size.swap(newSize);
}