/*
** EPITECH PROJECT, 2021
** B-YEP-400-NAN-4-1-indiestudio-gildas.gonzalez [WSL: Ubuntu-20.04]
** File description:
** Clickable
*/

#include "Clickable.hpp"

Clickable::Clickable(void(*cllbck)())
{
    this->_callback = cllbck;
}

Clickable::~Clickable() = default;

void Clickable::callback()
{
    this->_callback();
}

void Clickable::setCallback(void(*cllbck)())
{
    this->_callback = cllbck;
}

void (*Clickable::getCallback())()
{
    return (this->_callback);
}