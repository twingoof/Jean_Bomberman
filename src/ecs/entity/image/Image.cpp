/*
** EPITECH PROJECT, 2021
** B-YEP-400-NAN-4-1-indiestudio-gildas.gonzalez [WSL: kali-linux]
** File description:
** Image
*/

#include "Image.hpp"

Image::Image(std::map<std::string, std::string> texture, std::vector<int, int> position, std::vector<int, int> size)
{
    this->_texture.addTextures(texture);
    this->_position = position;
    this->_size = size;
}

Image::~Image() = default;