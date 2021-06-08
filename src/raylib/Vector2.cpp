/*
** EPITECH PROJECT, 2021
** Visual Studio Live Share (Workspace)
** File description:
** Vector2
*/

#include "Vector2.hpp"

raylib::Vector2::Vector2()
{
    this->setVector({0.0, 0.0});
}

raylib::Vector2::Vector2(const ::Vector2 &oldVector)
{
    this->setVector(oldVector);
}

raylib::Vector2 &raylib::Vector2::operator=(const ::Vector2 &oldVector)
{
    this->setVector(oldVector);
    return (*this);
}

void raylib::Vector2::setVector(const ::Vector2 &oldVector)
{
    this->x = oldVector.x;
    this->y = oldVector.y;
}