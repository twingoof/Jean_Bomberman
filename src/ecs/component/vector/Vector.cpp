/*
** EPITECH PROJECT, 2021
** B-YEP-400-NAN-4-1-indiestudio-gildas.gonzalez [WSL: kali-linux]
** File description:
** Vector
*/

#include "Vector.hpp"

Vector::Vector(std::vector<int, int> value)
{
    this->_value = value;
}

Vector::~Vector()
{
}

void Vector::setValue(std::vector<int, int> newValue)
{
    this->_value = newValue;
}

const std::vector<int, int> Vector::getValue() const
{
    return (this->_value);
}