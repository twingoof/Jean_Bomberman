/*
** EPITECH PROJECT, 2021
** B-YEP-400-NAN-4-1-indiestudio-gildas.gonzalez
** File description:
** Text
*/

#include "Text.hpp"

void raylib::DrawText(const std::string &text, int posX, int posY, float fontSize, ::Color tint)
{
    ::DrawText(text.c_str(), posX, posY, fontSize, tint);
}

void raylib::DrawText(::Font &font, const std::string &text, ::Vector2 position, int fontSize, ::Color tint)
{
    ::DrawTextEx(font, text.c_str(), position, fontSize, 1, tint);
}

int raylib::MeasureText(const std::string &text, float fontSize)
{
    return (::MeasureText(text.c_str(), fontSize));
}