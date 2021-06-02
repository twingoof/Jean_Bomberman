/*
** EPITECH PROJECT, 2021
** B-YEP-400-NAN-4-1-indiestudio-gildas.gonzalez
** File description:
** Callback
*/

#include "Callback.hpp"

Callback::Callback(void(*callback)())
{
    this->_callback = callback;
}

Callback::~Callback() = default;

void Callback::callback()
{
    this->_callback();
}

void Callback::setCallback(void(*callback)())
{
    this->_callback = callback;
}

void (*Callback::getCallback())()
{
    return (this->_callback);
}