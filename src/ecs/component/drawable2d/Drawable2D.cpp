/*
** EPITECH PROJECT, 2021
** B-YEP-400-NAN-4-1-indiestudio-gildas.gonzalez
** File description:
** Drawable2D
*/

#include "Drawable2D.hpp"
#include "Vector3.hpp"
#include <iostream>

Drawable2D::Drawable2D(std::string spritePath, Vector3 size)
{
    this->_spritePath = spritePath;
    this->_size = size;
}

Drawable2D::~Drawable2D() = default;

void Drawable2D::setSpritePath(std::string spritePath)
{
    this->_spritePath = spritePath;
}

void Drawable2D::setSize(Vector3 size)
{
    this->_size = size;
}

const std::string Drawable2D::getSpritePath() const
{
    return (this->_spritePath);
}

const Vector3 Drawable2D::getSize() const
{
    return (this->_size);
}