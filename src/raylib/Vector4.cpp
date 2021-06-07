/*
** EPITECH PROJECT, 2021
** Visual Studio Live Share (Workspace)
** File description:
** Vector4
*/

#include "Vector4.hpp"

raylib::Vector4::Vector4()
{
    this->setVector4({0.0, 0.0, 0.0});
}

raylib::Vector4::Vector4(const ::Vector4 &oldVector)
{
    this->setVector4(oldVector);
}

raylib::Vector4 &raylib::Vector4::operator=(const ::Vector4 &oldVector)
{
    this->setVector4(oldVector);
}

void raylib::Vector4::setVector4(const ::Vector4 &oldVector)
{
    this->x = oldVector.x;
    this->y = oldVector.y;
    this->z = oldVector.z;
    this->w = oldVector.w;
}