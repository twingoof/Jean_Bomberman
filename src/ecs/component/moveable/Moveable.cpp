/*
** EPITECH PROJECT, 2021
** B-YEP-400-NAN-4-1-indiestudio-gildas.gonzalez [WSL: Ubuntu-20.04]
** File description:
** Moveable
*/

#include "Moveable.hpp"

ECS::Moveable::Moveable(): _velocity() {}

ECS::Moveable::Moveable(ECS::Vector3<float> &velocity, std::map<std::string, raylib::Keys> keys) : _velocity(velocity)
{
    _keyUp = keys["up"];
    _keyDown = keys["down"];
    _keyLeft = keys["left"];
    _keyRight = keys["right"];
}


ECS::Moveable::~Moveable() = default;

void ECS::Moveable::setVelocity(const ECS::Vector3<float> &newVector)
{
    this->_velocity = newVector;
}

void ECS::Moveable::setVelocity(float x, float y, float z)
{
    this->_velocity.X = x;
    this->_velocity.Y = y;
    this->_velocity.Z = z;
}

void ECS::Moveable::setKeys(std::map<std::string, raylib::Keys> keys)
{
    _keyUp = keys["up"];
    _keyDown = keys["down"];
    _keyLeft = keys["left"];
    _keyRight = keys["right"];
}

ECS::Vector3<float> ECS::Moveable::getVelocity(void) const
{
    return (this->_velocity);
}

std::map<std::string, raylib::Keys> ECS::Moveable::getKeys() const
{
    std::map<std::string, raylib::Keys> keys;

    keys["up"] = this->_keyUp;
    keys["down"] = this->_keyDown;
    keys["left"] = this->_keyLeft;
    keys["right"] = this->_keyRight;
    return (keys);
}

ECS::Moveable &ECS::Moveable::operator=(const ECS::Moveable& rHand)
{
    this->_velocity = rHand._velocity;
    return (*this);
}