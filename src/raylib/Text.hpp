/*
** EPITECH PROJECT, 2021
** B-YEP-400-NAN-4-1-indiestudio-gildas.gonzalez
** File description:
** Text
*/

#ifndef TEXT_HPP_
#define TEXT_HPP_

#include "raylib.h"
#include <string>

namespace raylib {

    void drawText(const std::string &text, int posX, int posY, float fontSize, ::Color tint = {255, 255, 255, 255});
    void drawText(::Font &font, const std::string &text, ::Vector2 position, int fontSize, ::Color tint = {255, 255, 255, 255});

    int measureText(const std::string &text, float fontSize);

};

#endif /* !TEXT_HPP_ */