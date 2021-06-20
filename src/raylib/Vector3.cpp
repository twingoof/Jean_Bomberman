/*
** EPITECH PROJECT, 2021
** Visual Studio Live Share (Workspace)
** File description:
** Vector3
*/

#include "Vector3.hpp"

raylib::Vector3::Vector3()
{
    this->setVector3({0.0, 0.0, 0.0});
}

raylib::Vector3::Vector3(float X, float Y, float Z)
{
    this->x = X;
    this->y = Y;
    this->z = Z;
}

raylib::Vector3::Vector3(const ::Vector3 &oldVector)
{
    this->setVector3(oldVector);
}

raylib::Vector3 &raylib::Vector3::operator=(const ::Vector3 &oldVector)
{
    this->setVector3(oldVector);
    return (*this);
}

void raylib::Vector3::setVector3(const ::Vector3 &oldVector)
{
    this->x = oldVector.x;
    this->y = oldVector.y;
    this->z = oldVector.z;
}