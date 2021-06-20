/*
** EPITECH PROJECT, 2021
** B-YEP-400-NAN-4-1-indiestudio-gildas.gonzalez [WSL: Ubuntu-20.04]
** File description:
** Rectangle
*/

/**
 * @file Rectangle.hpp
 * @author gildas.gonzalez@epitech.eu; pierrick.prost@epitech.eu; pierrick.prost@epitech.eu; valentin.bouchet@epitech.eu; mathis.ragot@epitech.eu
 * @brief File that contain the Rectangle draw functions
 * @version 0.1
 * @date 2021-06-18
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#ifndef RECTANGLE_HPP_
#define RECTANGLE_HPP_

#include "Vector2.hpp"
#include "raylib.h"

/**
 * @namespace raylib
 */
namespace raylib {

    /**
     * @fn void drawRectangle(int posX, int posY, int width, int height, ::Color color = {255, 255, 255, 255})
     * @brief Draws a rectangle with parameters
     * 
     * @param posX X Position of the rectangle left top corner
     * @param posY Y Position of the rectangle left top corner
     * @param width Rectangle width
     * @param height Rectangle height
     * @param color Rectangle's color
     */
    void drawRectangle(int posX, int posY, int width, int height, ::Color color = {255, 255, 255, 255});

    /**
     * @fn void drawRectangleV(::Vector2 position, ::Vector2 size, ::Color color = {255, 255, 255, 255})
     * @brief Draw a rectangle with parameters
     * 
     * @param position Position of the rectangle left top corner (X and Y)
     * @param size Rectangle size
     * @param color Rectangle color
     */
    void drawRectangleV(::Vector2 position, ::Vector2 size, ::Color color = {255, 255, 255, 255});

};

#endif /* !RECTANGLE_HPP_ */
