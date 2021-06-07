/*
** EPITECH PROJECT, 2021
** B-YEP-400-NAN-4-1-indiestudio-gildas.gonzalez [WSL: Ubuntu-20.04]
** File description:
** Rectangle
*/

#include "Rectangle.hpp"

void raylib::drawRectangle(int posX, int posY, int width, int height, ::Color color)
{
    ::DrawRectangle(posX, posY, width, height, color);
}

void raylib::drawRectangleV(::Vector2 position, ::Vector2 size, ::Color color)
{
    ::DrawRectangleV(position, size, color);
}