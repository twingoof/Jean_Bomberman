/*
** EPITECH PROJECT, 2021
** B-YEP-400-NAN-4-1-indiestudio-gildas.gonzalez
** File description:
** Font
*/

#include "Font.hpp"

raylib::Font::Font()
{
    setFont(GetFontDefault());
}

raylib::Font::Font(const std::string &filePath)
{
    setFont(::LoadFont(filePath.c_str()));
}

raylib::Font::Font(const ::Font &font)
{
    setFont(font);
}

raylib::Font &raylib::Font::operator=(const ::Font &font)
{
    setFont(font);
    return (*this);
}

raylib::Font::~Font()
{
    Unload();
}

void raylib::Font::Unload(void)
{
    ::UnloadFont(*this);
}

::Vector2 raylib::Font::MeasureText(const std::string &text, float fontSize, float spacing)
{
    return (::MeasureTextEx(*this, text.c_str(), fontSize, spacing));
}

::Image raylib::Font::ImageText(const std::string &text, float fontSize, float spacing, ::Color tint)
{
    return (::ImageTextEx(*this, text.c_str(), fontSize, spacing, tint));
}

void raylib::Font::setFont(const ::Font &old)
{
    this->baseSize = old.baseSize;
    this->charsCount = old.charsCount;
    this->charsPadding = old.charsPadding;
    this->texture = old.texture;
    this->recs = old.recs;
    this->chars = old.chars;
}