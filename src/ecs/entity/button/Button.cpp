/*
** EPITECH PROJECT, 2021
** B-YEP-400-NAN-4-1-indiestudio-gildas.gonzalez
** File description:
** Button
*/

#include "Button.hpp"

Button::Button(std::map<std::string, std::string> textures, void(*callback)(), std::vector<int, int> position, std::vector<int, int> size)
{
    this->_callback.setCallback(callback);
    this->_textures.addTextures(textures);
}

Button::~Button() = default;