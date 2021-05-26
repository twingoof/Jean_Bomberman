/*
** EPITECH PROJECT, 2021
** B-YEP-400-NAN-4-1-indiestudio-gildas.gonzalez
** File description:
** Clickable
*/

#include "Clickable.hpp"

Clickable::Clickable(void(*callback)())
{
    this->_callback = callback;
}

Clickable::Clickable()
{
    this->_callback = nullptr;
}

Clickable::~Clickable()
{
}

void Clickable::callback()
{
    this->_callback();
}

void Clickable::setCallback(void(*callback)())
{
    this->_callback = callback;
}

void (*Clickable::getCallback())()
{
    return (this->_callback);
}