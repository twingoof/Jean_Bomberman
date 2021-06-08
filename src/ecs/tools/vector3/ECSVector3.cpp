/*
** EPITECH PROJECT, 2021
** B-YEP-400-NAN-4-1-indiestudio-gildas.gonzalez
** File description:
** ECSVector3
*/

#include "ECSVector3.hpp"

<<<<<<< HEAD
ECSVector3::ECSVector3(int x, int y, int z) : _x(x), _y(y), _z(z)
=======
ECS::Vector3::Vector3(int x, int y, int z)
>>>>>>> 05938a43ba7df350ffc50db201868b91ce697826
{
    this->_x = x;
    this->_y = y;
    this->_z = z;
}

<<<<<<< HEAD
ECSVector3::ECSVector3(const ECSVector3 &cpy) : _x(cpy._x), _y(cpy._y), _z(cpy._z)
{
    // this->_x = cpy.getX();
    // this->_y = cpy.getY();
    // this->_z = cpy.getZ();
=======
ECS::Vector3::Vector3(const ECS::Vector3 &cpy) {
    this->_x = cpy.getX();
    this->_y = cpy.getY();
    this->_z = cpy.getZ();
>>>>>>> 05938a43ba7df350ffc50db201868b91ce697826
}

ECS::Vector3 &ECS::Vector3::operator+=(const ECS::Vector3 &offset)
{
    this->_x += offset._x;
    this->_y += offset._y;
    this->_z += offset._z;
    return (*this);
}

ECS::Vector3 &ECS::Vector3::operator*(const int i)
{
    this->_x *= i;
    this->_y *= i;
    this->_z *= i;
    return (*this);
}

ECS::Vector3::~Vector3() = default;

void ECS::Vector3::setX(int x)
{
    this->_x = x;
}

void ECS::Vector3::setY(int y)
{
    this->_y = y;
}

void ECS::Vector3::setZ(int z)
{
    this->_z = z;
}

int ECS::Vector3::getX() const
{
    return (this->_x);
}

int ECS::Vector3::getY() const
{
    return (this->_y);
}

int ECS::Vector3::getZ() const
{
    return (this->_z);
}