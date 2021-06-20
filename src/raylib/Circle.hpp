/*
** EPITECH PROJECT, 2021
** B-YEP-400-NAN-4-1-indiestudio-gildas.gonzalez
** File description:
** Circle
*/

/**
 * @file Circle.hpp
 * @author gildas.gonzalez@epitech.eu; pierrick.prost@epitech.eu; pierrick.prost@epitech.eu; valentin.bouchet@epitech.eu; mathis.ragot@epitech.eu
 * @brief File that contain the Circle draw functions
 * @version 0.1
 * @date 2021-06-18
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#ifndef CIRCLE_HPP_
#define CIRCLE_HPP_

#include "raylib.h"

/**
 * @namespace raylib
 */
namespace raylib {

    /**
     * @fn void drawCircle(int centerX, int centerY, float radius, ::Color tint = {255, 255, 255, 255})
     * @brief Draw circle on position with a color
     * 
     * @param centerX X Center position
     * @param centerY Y Center posiiton
     * @param radius Circle radius
     * @param tint Circle Tint
     */
    void drawCircle(int centerX, int centerY, float radius, ::Color tint = {255, 255, 255, 255});

    /**
     * @fn void drawCircleV(::Vector2 position float radius, ::Color tint = {255, 255, 255, 255})
     * @brief Draw circle on position with a color
     * 
     * @param position Vector containing x and y center position
     * @param radius Circle radius
     * @param tint Circle Tint
     */
    void drawCircleV(::Vector2 position, float rad, ::Color tint = {255, 255, 255, 255});

};

#endif /* !CIRCLE_HPP_ */
