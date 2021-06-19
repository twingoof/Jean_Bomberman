/*
** EPITECH PROJECT, 2021
** indie
** File description:
** TODO: add description
*/

#include "Drawable.hpp"
unsigned int ECS::Drawable::currentId;

ECS::Drawable::Drawable() : _id(currentId++), loaded(false) {}

unsigned int ECS::Drawable::getId() const {
    return (this->_id);
}
