/*
** EPITECH PROJECT, 2021
** B-YEP-400-NAN-4-1-indiestudio-gildas.gonzalez
** File description:
** Text
*/

/**
 * @file Text.hpp
 * @author gildas.gonzalez@epitech.eu; pierrick.prost@epitech.eu; pierrick.prost@epitech.eu; valentin.bouchet@epitech.eu; mathis.ragot@epitech.eu
 * @brief File that contain the Text drawing functions
 * @version 0.1
 * @date 2021-06-18
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#ifndef TEXT_HPP_
#define TEXT_HPP_

#include "Vector2.hpp"
#include "raylib.h"
#include <string>

/**
 * @namespace raylib
 */
namespace raylib {

    /**
     * @fn void drawText(const std::string &text, int posX, int posY, float fontSize, ::Color tint = {255, 255, 255, 255})
     * @brief Draws a Text with parameters
     * 
     * @param text Text to draw
     * @param posX X Position
     * @param posY Y Position
     * @param fontSize Font size
     * @param tint Text color
     */
    void drawText(const std::string &text, int posX, int posY, int fontSize, ::Color tint = {255, 255, 255, 255});

    /**
     * @fn void drawText(::Font &font, const std::string &text, ::Vector2 position, int fontSize, ::Color tint = {255, 255, 255, 255})
     * @brief Draws a Text with parameters
     * 
     * @param font Font to draw
     * @param text Text to draw
     * @param position Position to draw
     * @param fontSize Font size
     * @param tint Text color
     */
    void drawText(::Font &font, const std::string &text, ::Vector2 position, float fontSize, ::Color tint = {255, 255, 255, 255});

    /**
     * @fn int measureText(const std::string &text, float fontSize)
     * @brief Measure text
     * 
     * @param text Text to measure
     * @param fontSize Font size
     * @return int Text size
     */
    int measureText(const std::string &text, int fontSize);

};

#endif /* !TEXT_HPP_ */