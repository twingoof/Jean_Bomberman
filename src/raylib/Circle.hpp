/*
** EPITECH PROJECT, 2021
** B-YEP-400-NAN-4-1-indiestudio-gildas.gonzalez
** File description:
** Circle
*/

#ifndef CIRCLE_HPP_
#define CIRCLE_HPP_

#include "raylib.h"

namespace raylib {

    void drawCircle(int centerX, int centerY, int radius, ::Color tint = {255, 255, 255, 255});

    void drawCircleV(::Vector2 position, float rad, ::Color tint = {255, 255, 255, 255});

};

#endif /* !CIRCLE_HPP_ */
