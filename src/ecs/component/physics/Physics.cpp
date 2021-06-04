/*
** EPITECH PROJECT, 2021
** B-YEP-400-NAN-4-1-indiestudio-gildas.gonzalez [WSL: Ubuntu-20.04]
** File description:
** Physics
*/

#include "Physics.hpp"

Physics::Physics(ECSVector3 &position, ECSVector3 &size, int layer)
{
    this->_position = position;
    this->_size = size;
    this->_layer = layer;
}

Physics::~Physics() = default;

const ECSVector3 &Physics::getPosition(void) const
{
    return (this->_position);
}

const ECSVector3 &Physics::getSize(void) const
{
    return (this->_size);
}

const int Physics::getLayer() const
{
    return (this->_layer);
}

bool Physics::hasCollision(Physics toCompare)
{
    /*
    return  (((position.getX() < _position.getX() && (position.getX() + width) > _position.getX()) \
    && (position.getY() < _position.getY() && (position.getY() + height) > _position.getY())) \
    || ((position.getX() < (_position.getX() + width) && (position.getX() + width) > (_position.getX() + width)) \
    && (position.getY() < (_position.getY() + height) && (position.getY() + height) > (_position.getY() + height))));
    */
   ECSVector3 positionOne = this->_position;
   ECSVector3 positionTwo = toCompare.getPosition();
   ECSVector3 sizeOne = this->_size;
   ECSVector3 sizeTwo = toCompare.getSize();

    if (_layer == toCompare.getLayer())
        return (false);
    if (positionOne.getX() <= positionTwo.getX() && (positionOne.getX() + sizeOne.getX()) >= positionTwo.getX() \
    && positionOne.getY() <= positionTwo.getY() && (positionOne.getY() + sizeOne.getY()) >= positionTwo.getY())
}

void Physics::setPosition(ECSVector3 &newPosition)
{
   this->_position = newPosition;
}

void Physics::setSize(ECSVector3 &newSize)
{
    this->_size = newSize;
}

void Physics::setLayer(int newLayer)
{
    this->_layer = newLayer;
}