/*
** EPITECH PROJECT, 2021
** B-YEP-400-NAN-4-1-indiestudio-gildas.gonzalez
** File description:
** Cube
*/

#include "Cube.hpp"

void raylib::drawCube(::Vector3 position, float width, float height, float length, ::Color tint)
{
    ::DrawCube(position, width, height, length, tint);
}

void raylib::drawCubeV(::Vector3 position, ::Vector3 size, ::Color tint)
{
    ::DrawCubeV(position, size, tint);
}

void raylib::drawCubeWires(::Vector3 position, float width, float height, float length, ::Color tint)
{
    ::DrawCubeWires(position, width, height, length, tint);
}

void raylib::drawCubeWiresV(::Vector3 position, ::Vector3 size, ::Color tint)
{
    ::DrawCubeWiresV(position, size, tint);
}

void raylib::drawTexturedCube(raylib::Texture texture, ::Vector3 position, float width, float height, float length, ::Color tint)
{
    ::Texture2D tex;
    tex.format = texture.format;
    tex.height = texture.height;
    tex.id = texture.id;
    tex.mipmaps = texture.mipmaps;
    tex.width = texture.width;

    ::DrawCubeTexture(tex, position, width, height, length, tint);
}