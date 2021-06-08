/*
** EPITECH PROJECT, 2021
** B-YEP-400-NAN-4-1-indiestudio-gildas.gonzalez
** File description:
** ECSVector3
*/

#include "ECSVector3.hpp"

ECS::ECSVector3::ECSVector3(int x, int y, int z)
{
    this->_x = x;
    this->_y = y;
    this->_z = z;
}

ECS::ECSVector3::ECSVector3(const ECS::ECSVector3 &cpy) {
    this->_x = cpy.getX();
    this->_y = cpy.getY();
    this->_z = cpy.getZ();
}

ECS::ECSVector3 &ECS::ECSVector3::operator+=(const ECS::ECSVector3 &offset)
{
    this->_x += offset._x;
    this->_y += offset._y;
    this->_z += offset._z;
    return (*this);
}

ECS::ECSVector3 &ECS::ECSVector3::operator*(const int i)
{
    this->_x *= i;
    this->_y *= i;
    this->_z *= i;
    return (*this);
}

ECS::ECSVector3::~ECSVector3() = default;

void ECS::ECSVector3::setX(int x)
{
    this->_x = x;
}

void ECS::ECSVector3::setY(int y)
{
    this->_y = y;
}

void ECS::ECSVector3::setZ(int z)
{
    this->_z = z;
}

int ECS::ECSVector3::getX() const
{
    return (this->_x);
}

int ECS::ECSVector3::getY() const
{
    return (this->_y);
}

int ECS::ECSVector3::getZ() const
{
    return (this->_z);
}
