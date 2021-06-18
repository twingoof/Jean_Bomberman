/*
** EPITECH PROJECT, 2021
** indie
** File description:
** TODO: add description
*/

#include "Drawable.hpp"

ECS::Drawable::Drawable() : _id(currentId++) {}

unsigned int ECS::Drawable::getId() const {
    return (this->_id);
}
