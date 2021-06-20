/*
** EPITECH PROJECT, 2021
** B-YEP-400-NAN-4-1-indiestudio-gildas.gonzalez
** File description:
** Text
*/

#include "Text.hpp"

void raylib::drawText(const std::string &text, int posX, int posY, int fontSize, ::Color tint)
{
    ::DrawText(text.c_str(), posX, posY, fontSize, tint);
}

void raylib::drawText(::Font &font, const std::string &text, ::Vector2 position, float fontSize, ::Color tint)
{
    ::DrawTextEx(font, text.c_str(), position, fontSize, 2, tint);
}

int raylib::measureText(const std::string &text, int fontSize)
{
    return (::MeasureText(text.c_str(), fontSize));
}