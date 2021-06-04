/*
** EPITECH PROJECT, 2021
** B-YEP-400-NAN-4-1-indiestudio-gildas.gonzalez
** File description:
** Circle
*/

#include "Circle.hpp"

void raylib::drawCircle(int centerX, int centerY, int radius, ::Color tint)
{
    ::DrawCircle(centerX, centerY, radius, tint);
}

void raylib::drawCircle(::Vector2 position, int radius, ::Color tint)
{
    ::DrawCircleV(position, radius, tint);
}