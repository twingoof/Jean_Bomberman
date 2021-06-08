/*
** EPITECH PROJECT, 2021
** B-YEP-400-NAN-4-1-indiestudio-gildas.gonzalez [WSL: Ubuntu-20.04]
** File description:
** Clickable
*/

#include "Clickable.hpp"

ECS::Clickable::Clickable(void(*cllbck)())
{
    this->_callback = cllbck;
}

ECS::Clickable::~Clickable() = default;

void ECS::Clickable::callback()
{
    this->_callback();
}

void ECS::Clickable::setCallback(void(*cllbck)())
{
    this->_callback = cllbck;
}

void (*ECS::Clickable::getCallback())()
{
    return (this->_callback);
}