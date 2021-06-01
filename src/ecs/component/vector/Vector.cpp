/*
** EPITECH PROJECT, 2021
** B-YEP-400-NAN-4-1-indiestudio-gildas.gonzalez [WSL: kali-linux]
** File description:
** Vector
*/

#include "Vector.hpp"


Vector::Vector(std::pair<int, int> value)
{
    this->_value = value;
}

Vector::~Vector() = default;

void Vector::setValue(std::pair<int, int> newValue)
{
    this->_value.first = newValue.first;
    this->_value.second = newValue.second;
}

const std::pair<int, int> Vector::getValue() const
{
    return (this->_value);
}