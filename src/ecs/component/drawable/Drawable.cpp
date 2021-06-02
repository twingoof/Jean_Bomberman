/*
** EPITECH PROJECT, 2021
** B-YEP-400-NAN-4-1-indiestudio-gildas.gonzalez
** File description:
** Drawable
*/

#include "Drawable.hpp"
#include "Vector3.hpp"

Drawable::Drawable(Vector3 position, Vector3 size, bool activated)
{
    this->_position = position;
    this->_size = size;
    this->_activated = activated;
}

Drawable::~Drawable()
{
}

void Drawable::setSprite(std::string spritePath)
{
    this->_sprite = spritePath;
}

void Drawable::setMesh(std::string meshPath)
{
    this->_mesh = meshPath;
}

void Drawable::setActivation(bool activated)
{
    this->_activated = activated;
}

void Drawable::setPosition(Vector3 position)
{
    this->_position = position;
}

void Drawable::setSize(Vector3 size)
{
    this->_size = size;
}

const std::string Drawable::getSprite() const
{
    return (this->_sprite);
}

const std::string Drawable::getMesh() const
{
    return (this->_mesh);
}

const bool Drawable::getActivation() const
{
    return (this->_activated);
}