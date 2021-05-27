/*
** EPITECH PROJECT, 2021
** B-YEP-400-NAN-4-1-indiestudio-gildas.gonzalez [WSL: kali-linux]
** File description:
** Image
*/

#include "Image.hpp"

Image::Image(std::map<std::string, std::string> texture, std::vector<int, int> position, std::vector<int, int> size)
{
    this->_imageTexture.addTextures(texture);
    this->_position = position;
    this->_size = size;
}

Image::~Image()
{
}

const std::vector<int, int> Image::getPosition() const
{
    return (this->_position);
}

const std::vector<int, int> Image::getSize() const
{
    return (this->_size);
}

void Image::setPosition(std::vector<int, int> newPosition)
{
    this->_position = newPosition;
}

void Image::setSize(std::vector<int, int> newSize)
{
    this->_size = newSize;
}