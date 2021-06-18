/*
** EPITECH PROJECT, 2021
** B-YEP-400-NAN-4-1-indiestudio-gildas.gonzalez
** File description:
** Texture
*/

#include "Texture.hpp"

raylib::Texture::Texture(const ::Texture &old)
{
    this->setTexture(old);
}

raylib::Texture::Texture(const ::Image &image)
{
    this->loadFromImage(image);
}

raylib::Texture::Texture(const ::Image &image, int layout)
{
    this->loadCubemap(image, layout);
}

raylib::Texture::Texture(const std::string &filePath)
{
    this->loadFromFile(filePath);
}

raylib::Texture::~Texture(void)
{}

void raylib::Texture::unload(void)
{
    ::UnloadTexture(*this);
}

void raylib::Texture::loadFromImage(const ::Image &image)
{
    ::Texture2D newTexture = ::LoadTextureFromImage(image);

    this->setTexture(newTexture);
}

void raylib::Texture::loadCubemap(const ::Image &image, int layout)
{
    ::Texture2D newTexture = ::LoadTextureCubemap(image, layout);

    this->setTexture(newTexture);
}

void raylib::Texture::loadFromFile(const std::string &filePath)
{
    ::Texture2D newTexture;

    if (filePath != "") {
        newTexture = ::LoadTexture(filePath.c_str());
        this->setTexture(newTexture);
    }
}

raylib::Texture &raylib::Texture::update(const void *pixels)
{
    ::UpdateTexture(*this, pixels);
    return (*this);
}

::Vector2 raylib::Texture::getSize(void) const
{
    ::Vector2 size = {static_cast<float>(width), static_cast<float>(height)};

    return (size);
}

::Image raylib::Texture::getData(void) const
{
    return (::GetTextureData(*this));
}

void raylib::Texture::draw(void)
{
    this->draw(0, 0);
}

void raylib::Texture::draw(int posX, int posY, ::Color tint)
{
    ::DrawTexture(*this, posX, posY, tint);
}

void raylib::Texture::draw(::Vector2 position, ::Color tint)
{
    ::DrawTextureV(*this, position, tint);
}

void raylib::Texture::draw(::Vector2 position, float rotation, float scale, ::Color tint)
{
    ::DrawTextureEx(*this, position, rotation, scale, tint);
}

void raylib::Texture::draw(::Rectangle sourceRec, ::Vector2 position, ::Color tint)
{
    ::DrawTextureRec(*this, sourceRec, position, tint);
}

void raylib::Texture::draw(::Vector2 position, ::Vector2 offset, ::Rectangle quad, ::Color tint)
{
    ::DrawTextureQuad(*this, position, offset, quad, tint);
}

void raylib::Texture::draw(::Vector3 position, float wdth, float hght, float length, ::Color tint)
{
    ::DrawCubeTexture(*this, position, wdth, hght, length, tint);
}

void raylib::Texture::drawScaled(::Texture texture, ::Vector2 position, float rotation, float scaleW, float scaleH, ::Color tint)
{
    ::Rectangle source = {0.0f, 0.0f, (float)texture.width, (float)texture.height};
    ::Rectangle dest = {position.x, position.y, (float)texture.width * scaleW, (float)texture.height * scaleH};
    ::Vector2 origin = {0.0f, 0.0f};

    ::DrawTexturePro(texture, source, dest, origin, rotation, tint);
}

void raylib::Texture::setMaterial(::Material &material, int type)
{
    ::SetMaterialTexture((::Material *)(&material), type, *this);
}

void raylib::Texture::setTexture(const ::Texture &old)
{
    this->id = old.id;
    this->height = old.height;
    this->width = old.width;
    this->mipmaps = old.mipmaps;
    this->format = old.format;
}

raylib::Texture &raylib::Texture::operator=(const raylib::Texture &rHand) {
    this->height = rHand.height;
    this->width = rHand.width;
    this->id = rHand.id;
    this->format = rHand.format;
    this->mipmaps = rHand.mipmaps;

    return (*this);
}

namespace raylib {
    void drawTexture(raylib::Texture texture, int posX, int posY, ::Color color)
    {
        ::Texture t;
        t.format = texture.format;
        t.height = texture.height;
        t.id = texture.id;
        t.mipmaps = texture.mipmaps;
        t.width = texture.width;

        ::DrawTexture(t, posX, posY, color);
    }
}