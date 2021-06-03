/*
** EPITECH PROJECT, 2021
** B-YEP-400-NAN-4-1-indiestudio-gildas.gonzalez [WSL: Ubuntu-20.04]
** File description:
** Physics
*/

#include "Physics.hpp"

Physics::Physics(ECSVector3 position, float width, float height)
{
    this->_position = position;
    this->_width = width;
    this->_height = height;
}

Physics::~Physics() = default;

bool Physics::hasCollision(ECSVector3 position, float width, float height)
{
    return  (((position.getX() < _position.getX() && (position.getX() + width) > _position.getX()) \
    && (position.getY() < _position.getY() && (position.getY() + height) > _position.getY())) \
    || ((position.getX() < (_position.getX() + width) && (position.getX() + width) > (_position.getX() + width)) \
    && (position.getY() < (_position.getY() + height) && (position.getY() + height) > (_position.getY() + height))));
}

void Physics::setPosition(ECSVector3 position)
{
    this->_position = position;
}