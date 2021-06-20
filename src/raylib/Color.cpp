/*
** EPITECH PROJECT, 2021
** B-YEP-400-NAN-4-1-indiestudio-gildas.gonzalez [WSL: Ubuntu-20.04]
** File description:
** Color
*/

#include "Color.hpp"

raylib::Color::Color()
{
    this->setColor({255, 255, 255, 255});
}

raylib::Color::Color(const ::Color &oldColor)
{
    this->setColor(oldColor);
}

raylib::Color &raylib::Color::operator=(const ::Color &oldColor)
{
    this->setColor(oldColor);
    return (*this);
}

raylib::Color &raylib::Color::fromHSV(float hueValue, float satValue, float value)
{
    this->setColor(::ColorFromHSV(hueValue, satValue, value));
    return (*this);
}

raylib::Color &raylib::Color::changeAlpha(float alphaValue)
{
    this->setColor(::ColorAlpha(*this, alphaValue));
    return (*this);
}

raylib::Color &raylib::Color::fadeColor(float alphaValue)
{
    this->setColor(::Fade(*this, alphaValue));
    return (*this);
}

raylib::Vector4 raylib::Color::normalize(void)
{
    return (::ColorNormalize(*this));
}

raylib::Vector3 raylib::Color::toHSV(void)
{
    return (::ColorToHSV(*this));
}

int raylib::Color::toInt(void)
{
    return (::ColorToInt(*this));
}

void raylib::Color::setColor(const ::Color &oldColor)
{
    this->r = oldColor.r;
    this->g = oldColor.g;
    this->b = oldColor.b;
    this->a = oldColor.a;
}