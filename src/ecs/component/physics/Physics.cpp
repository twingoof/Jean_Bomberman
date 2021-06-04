/*
** EPITECH PROJECT, 2021
** B-YEP-400-NAN-4-1-indiestudio-gildas.gonzalez [WSL: Ubuntu-20.04]
** File description:
** Physics
*/

#include "Physics.hpp"

Physics::Physics(ECSVector3 &position, ECSVector3 &size, int layer)
    : _position(position), _size(size)
{
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
   ECSVector3 positionOne = this->_position;
   ECSVector3 positionTwo = toCompare.getPosition();
   ECSVector3 sizeOne = this->_size;
   ECSVector3 sizeTwo = toCompare.getSize();

    if (_layer == toCompare.getLayer())
        return (false);
    return ((positionOne.getX() >= positionTwo.getX() && positionOne.getX() <= (positionTwo.getX() + sizeTwo.getX()) \
    && positionOne.getY() >= positionTwo.getY() && positionOne.getY() <= (positionTwo.getY() + sizeTwo.getY())) || \
    ((positionOne.getX() + sizeOne.getX()) >= positionTwo.getX() && (positionOne.getX() + sizeOne.getX()) <= (positionTwo.getX() + sizeTwo.getX()) \
    && positionOne.getY() >= positionTwo.getY() && positionOne.getY() <= (positionTwo.getY() + sizeTwo.getY())) || \
    (positionOne.getX() >= positionTwo.getX() && positionOne.getX() <= (positionTwo.getX() + sizeTwo.getX()) \
    && (positionOne.getY() + sizeOne.getY()) >= positionTwo.getY() && (positionOne.getY() + sizeOne.getY()) <= (positionTwo.getY() + sizeTwo.getY())) || \
    ((positionOne.getX() + sizeOne.getX()) >= positionTwo.getX() && (positionOne.getX() + sizeOne.getX()) <= (positionTwo.getX() + sizeTwo.getX()) \
    && (positionOne.getY() + sizeOne.getY()) >= positionTwo.getY() && (positionOne.getY() + sizeOne.getY()) <= (positionTwo.getY() + sizeTwo.getY())));
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