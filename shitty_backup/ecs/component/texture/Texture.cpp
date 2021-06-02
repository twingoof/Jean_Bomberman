/*
** EPITECH PROJECT, 2021
** B-YEP-400-NAN-4-1-indiestudio-gildas.gonzalez [WSL: kali-linux]
** File description:
** Texture
*/

#include "Texture.hpp"

Texture::Texture(std::map<std::string, std::string> textures)
{
    this->_textures = textures;
}

Texture::~Texture() = default;

void Texture::addTexture(std::pair<std::string, std::string> newTexture)
{
    this->_textures.insert(newTexture);
}

void Texture::addTextures(std::map<std::string, std::string> newTextures)
{
    for (const auto &newTexture:newTextures)
        this->_textures.insert(newTexture);
}

void Texture::deleteTexture(std::string textureName)
{
    for (const auto &texture:this->_textures) {
        if (texture.first == textureName) {
            this->_textures.erase(textureName);
            return;
        }
    }
}

void Texture::deleteTextures(std::vector<std::string> texturesName)
{
    for (const auto &texture:this->_textures)
        for (const auto &textureName:texturesName)
            if (texture.first == textureName)
                this->_textures.erase(textureName);
            else if (this->_textures.size() == 0)
                return;
}

const std::map<std::string, std::string> Texture::getTexture(std::string textureName) const
{
    std::map<std::string, std::string> toReturn;

    for (const auto &texture:this->_textures)
        if (texture.first == textureName)
            toReturn.insert(texture);
    return (toReturn);
}

const std::map<std::string, std::string> Texture::getTextures(std::vector<std::string> texturesName) const
{
    std::map<std::string, std::string> toReturn;

    for (const auto &texture:this->_textures)
        for (const auto &textureName:texturesName)
            if (texture.first == textureName)
                toReturn.insert(texture);
    return (toReturn);
}

const std::map<std::string, std::string> Texture::getTextures() const
{
    return (this->_textures);
}