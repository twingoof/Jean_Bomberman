/*
** EPITECH PROJECT, 2021
** B-YEP-400-NAN-4-1-indiestudio-gildas.gonzalez
** File description:
** Texture
*/

#include "Texture.hpp"

raylib::Texture::Texture(const ::Texture &old)
{
    setTexture(old);
}

raylib::Texture::Texture(const ::Image &image)
{
    LoadFromImage(image);
}

raylib::Texture::Texture(const ::Image &image, int layout)
{
    LoadCubemap(image, layout);
}

raylib::Texture::Texture(const std::string &filePath)
{
    LoadFromFile(filePath);
}

raylib::Texture::~Texture(void)
{
    Unload();
}

void raylib::Texture::Unload(void)
{
    ::UnloadTexture(*this);
}

void raylib::Texture::LoadFromImage(const ::Image &image)
{
    ::Texture2D newTexture = ::LoadTextureFromImage(image);

    setTexture(newTexture);
}

void raylib::Texture::LoadCubemap(const ::Image &image, int layout)
{
    ::Texture2D newTexture = ::LoadTextureCubemap(image, layout);

    setTexture(newTexture);
}

void raylib::Texture::LoadFromFile(const std::string &filePath)
{
    ::Texture2D newTexture;

    if (filePath != "") {
        newTexture = ::LoadTexture(filePath.c_str());
        setTexture(newTexture);
    }
}

raylib::Texture &raylib::Texture::Update(const void *pixels)
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

void raylib::Texture::Draw(void)
{
    Draw(0, 0);
}

void raylib::Texture::Draw(int posX, int posY, ::Color tint)
{
    ::DrawTexture(*this, posX, posY, tint);
}

void raylib::Texture::Draw(::Vector2 position, ::Color tint)
{
    ::DrawTextureV(*this, position, tint);
}

void raylib::Texture::Draw(::Vector2 position, float rotation, float scale, ::Color tint)
{
    ::DrawTextureEx(*this, position, rotation, scale, tint);
}

void raylib::Texture::Draw(::Rectangle sourceRec, ::Vector2 position, ::Color tint)
{
    ::DrawTextureRec(*this, sourceRec, position, tint);
}

void raylib::Texture::Draw(::Vector2 position, ::Vector2 offset, ::Rectangle quad, ::Color tint)
{
    ::DrawTextureQuad(*this, position, offset, quad, tint);
}

void raylib::Texture::Draw(::Vector3 position, float width, float height, float length, ::Color tint)
{
    ::DrawCubeTexture(*this, position, width, height, length, tint);
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