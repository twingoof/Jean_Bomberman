/*
** EPITECH PROJECT, 2021
** B-YEP-400-NAN-4-1-indiestudio-gildas.gonzalez
** File description:
** Drawable2D
*/

#include "Drawable2D.hpp"
#include <iostream>

ECS::Drawable2D::Drawable2D(std::string spritePath, ECS::Vector3 size, ECS::DrawableType type) : ECS::IComponent()
{
    this->_spritePath = spritePath;
    this->_size = size;
    this->_type = type;
}

ECS::Drawable2D::~Drawable2D() = default;

void ECS::Drawable2D::setSpritePath(std::string spritePath)
{
    this->_spritePath = spritePath;
}

void ECS::Drawable2D::setSize(ECS::Vector3 size)
{
    this->_size = size;
}

const std::string ECS::Drawable2D::getSpritePath() const
{
    return (this->_spritePath);
}

const ECS::Vector3 ECS::Drawable2D::getSize() const
{
    return (this->_size);
}

ECS::DrawableType ECS::Drawable2D::getType() const
{
    return (this->_type);
}