/*
** EPITECH PROJECT, 2021
** B-YEP-400-NAN-4-1-indiestudio-gildas.gonzalez
** File description:
** Cube
*/

#ifndef CUBE_HPP_
#define CUBE_HPP_

#include "raylib.h"

namespace raylib {

    void drawCube(::Vector3 position, float width, float height, float length, ::Color tint = {255, 255, 255, 255});

    void drawCubeV(::Vector3 position, ::Vector3 size, ::Color tint = {255, 255, 255, 255});

    void drawCubeWires(::Vector3 position, float width, float height, float length, ::Color tint = {255, 255, 255, 255});

    void drawCubeWiresV(::Vector3 position, ::Vector3 size, ::Color tint = {255, 255, 255, 255});

    void drawTexturedCube(::Texture2D texture, ::Vector3 position, float width, float height, float length, ::Color tint = {255, 255, 255, 255});

};

#endif /* !CUBE_HPP_ */
