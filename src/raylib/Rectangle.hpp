/*
** EPITECH PROJECT, 2021
** B-YEP-400-NAN-4-1-indiestudio-gildas.gonzalez [WSL: Ubuntu-20.04]
** File description:
** Rectangle
*/

#ifndef RECTANGLE_HPP_
#define RECTANGLE_HPP_

#include "Vector2.hpp"
#include "raylib.h"

namespace raylib {

    void drawRectangle(int posX, int posY, int width, int height, ::Color color = {255, 255, 255});

    void drawRectangleV(Vector2 position, Vector2 size, ::Color color = {255, 255, 255});

};

#endif /* !RECTANGLE_HPP_ */
