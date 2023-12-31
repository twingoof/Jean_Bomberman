/*
** EPITECH PROJECT, 2021
** B-YEP-400-NAN-4-1-indiestudio-gildas.gonzalez [WSL: kali-linux]
** File description:
** Transform
*/

#include "Transform.hpp"

ECS::Transform::Transform(ECS::Vector3<float> position, ECS::Vector3<int> size): _position(position), _lastPosition(position), _size(size), _speed(0), _range(0), _reload(0), _scale(1.)
{}

void ECS::Transform::setPosition(ECS::Vector3<float> newPosition)
{
    this->_position.X = newPosition.X;
    this->_position.Y = newPosition.Y;
    this->_position.Z = newPosition.Z;
}

void ECS::Transform::setLastPosition(ECS::Vector3<float> newPosition)
{
    this->_lastPosition.X = newPosition.X;
    this->_lastPosition.Y = newPosition.Y;
    this->_lastPosition.Z = newPosition.Z;
}

void ECS::Transform::setSize(ECS::Vector3<int> newSize)
{
    this->_size = newSize;
}

ECS::Vector3<float> &ECS::Transform::getPosition()
{
    return (this->_position);
}

ECS::Vector3<float> &ECS::Transform::getLastPosition()
{
    return (this->_lastPosition);
}

ECS::Vector3<int> &ECS::Transform::getSize()
{
    return (this->_size);
}

int &ECS::Transform::getSpeed()
{
    return(this->_speed);
}

int &ECS::Transform::getRange()
{
    return (this->_range);
}
int &ECS::Transform::getReload()
{
    return (this->_reload);
}

void ECS::Transform::addSpeed(int speed)
{
    this->_speed += speed;
}

void ECS::Transform::addRange(int range)
{
    this->_range += range;
}

void ECS::Transform::addReload(int reload)
{
    this->_reload += reload;
}

float &ECS::Transform::getScale()
{
    return (this->_scale);
}

void ECS::Transform::setScale(float scale)
{
    this->_scale = scale;
}
