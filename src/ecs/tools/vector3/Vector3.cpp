/*
** EPITECH PROJECT, 2021
** B-YEP-400-NAN-4-1-indiestudio-gildas.gonzalez
** File description:
** Vector3
*/

#include "Vector3.hpp"

Vector3::Vector3(int x, int y, int z)
{
    this->_x = x;
    this->_y = y;
    this->_z = z;
}

Vector3::~Vector3() = default;

void Vector3::setX(int x)
{
    this->_x = x;
}

void Vector3::setY(int y)
{
    this->_y = y;
}

void Vector3::setZ(int z)
{
    this->_z = z;
}

const int Vector3::getX() const
{
    return (this->_x);
}

const int Vector3::getY() const
{
    return (this->_y);
}

const int Vector3::getZ() const
{
    return (this->_z);
}