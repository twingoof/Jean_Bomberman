/*
** EPITECH PROJECT, 2021
** B-YEP-400-NAN-4-1-indiestudio-gildas.gonzalez
** File description:
** Circle
*/

#include "Circle.hpp"

void raylib::drawCircle(int ctrX, int ctrY, float rad, ::Color tint)
{
    ::DrawCircle(ctrX, ctrY, rad, tint);
}

void raylib::drawCircleV(::Vector2 position, float rad, ::Color tint)
{
    ::DrawCircleV(position, rad, tint);
}