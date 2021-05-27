/*
** EPITECH PROJECT, 2021
** B-YEP-400-NAN-4-1-indiestudio-gildas.gonzalez [WSL: kali-linux]
** File description:
** Text
*/

#include "Text.hpp"

Text::Text(std::string text)
{
    this->_text = text;
}

Text::~Text()
{
}

void Text::setText(std::string newText)
{
    this->_text = newText;
}

const std::string Text::getText() const
{
    return (this->_text);
}