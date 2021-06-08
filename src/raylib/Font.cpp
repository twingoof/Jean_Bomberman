/*
** EPITECH PROJECT, 2021
** B-YEP-400-NAN-4-1-indiestudio-gildas.gonzalez
** File description:
** Font
*/

#include "Font.hpp"

raylib::Font::Font()
{
    this->setFont(::GetFontDefault());
}

raylib::Font::Font(const std::string &filePath)
{
    this->setFont(::LoadFont(filePath.c_str()));
}

raylib::Font::Font(const ::Font &font)
{
    this->setFont(font);
}

raylib::Font &raylib::Font::operator=(const ::Font &font)
{
    this->setFont(font);
    return (*this);
}

raylib::Font::~Font()
{
    this->unload();
}

void raylib::Font::unload(void)
{
    ::UnloadFont(*this);
}

::Vector2 raylib::Font::measureText(const std::string &text, float fontSize, float spacing)
{
    return (::MeasureTextEx(*this, text.c_str(), fontSize, spacing));
}

::Image raylib::Font::imageText(const std::string &text, float fontSize, float spacing, ::Color tint)
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