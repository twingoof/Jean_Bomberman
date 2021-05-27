/*
** EPITECH PROJECT, 2021
** B-YEP-400-NAN-4-1-indiestudio-gildas.gonzalez
** File description:
** Button
*/

#include "Button.hpp"

Button::Button(std::map<std::string, std::string> textures, void(*callback)())
{
    this->buttonCallback.setCallback(callback);
    this->buttonTextures.addTextures(textures);
}

Button::~Button()
{
}

void Button::display()
{
}