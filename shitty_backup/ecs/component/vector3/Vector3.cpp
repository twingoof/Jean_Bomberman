/*
** EPITECH PROJECT, 2021
** B-YEP-400-NAN-4-1-indiestudio-gildas.gonzalez
** File description:
** Vector3
*/

#include "Vector3.hpp"

Vector3::Vector3(std::array<int, 3> value)
{
    this->_value = value;
}

Vector3::~Vector3() = default;

void Vector3::setValue(std::array<int, 3> newValue)
{
    this->_value.swap(newValue);
}

const std::array<int, 3> Vector3::getValue() const
{
    return (this->_value);
}