/*
** EPITECH PROJECT, 2021
** B-YEP-400-NAN-4-1-indiestudio-gildas.gonzalez [WSL: Ubuntu-20.04]
** File description:
** Image
*/

#include "Image.hpp"

raylib::Image::Image(const ::Image &oldImage)
{
    this->setImage(oldImage);
}

raylib::Image &raylib::Image::operator=(const ::Image &oldImage)
{
    this->setImage(oldImage);
    return (*this);
}

::Image raylib::Image::imageCopy(::Image image)
{
    this->setImage(image);
    return (*this);
}

::Image raylib::Image::loadImage(const std::string &fileName)
{
    return (::LoadImage(fileName.c_str()));
}

void raylib::Image::unloadImage()
{
    ::UnloadImage(*this);
}

bool raylib::Image::exportImage(const std::string &fileName)
{
    return (::ExportImage((*this), fileName.c_str()));
}

void raylib::Image::imageResize(int newWidth, int newHeight)
{
    ::ImageResize(this, newWidth, newHeight);
}

::Image raylib::Image::genImageColor(int imgWidth, int imgHeight, ::Color color)
{
    return (::GenImageColor(imgWidth, imgHeight, color));
}

void raylib::Image::setImage(const ::Image &oldImage)
{
    this->data = oldImage.data;
    this->width = oldImage.width;
    this->height = oldImage.height;
    this->mipmaps = oldImage.mipmaps;
    this->format = oldImage.format;
}

