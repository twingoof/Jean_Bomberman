/*
** EPITECH PROJECT, 2021
** indie
** File description:
** TODO: add description
*/

#include "Drawable.hpp"

unsigned int ECS::Drawable::currentTId;

ECS::Drawable::Drawable() : loaded(false), _tId(currentTId++) {}

unsigned int ECS::Drawable::getTId() const {
    return (this->_tId);
}
