/*
** EPITECH PROJECT, 2021
** B-YEP-400-NAN-4-1-indiestudio-gildas.gonzalez
** File description:
** ECSVector3
*/

#include "ECSVector3.hpp"

ECSVector3::ECSVector3(int x, int y, int z)
{
    this->_x = x;
    this->_y = y;
    this->_z = z;
}

ECSVector3::ECSVector3(const ECSVector3 &cpy) {
    this->_x = cpy.getX();
    this->_y = cpy.getY();
    this->_z = cpy.getZ();
}

ECSVector3 &ECSVector3::operator+=(const ECSVector3 &offset)
{
    this->_x += offset._x;
    this->_y += offset._y;
    this->_z += offset._z;
    return (*this);
}

ECSVector3 &ECSVector3::operator*(const int i)
{
    this->_x *= i;
    this->_y *= i;
    this->_z *= i;
    return (*this);
}

ECSVector3::~ECSVector3() = default;

void ECSVector3::setX(int x)
{
    this->_x = x;
}

void ECSVector3::setY(int y)
{
    this->_y = y;
}

void ECSVector3::setZ(int z)
{
    this->_z = z;
}

int ECSVector3::getX() const
{
    return (this->_x);
}

int ECSVector3::getY() const
{
    return (this->_y);
}

int ECSVector3::getZ() const
{
    return (this->_z);
}
