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

Texture::~Texture()
{
}

void Texture::addTexture(std::pair<std::string, std::string> newTexture)
{
    this->_textures.emplace(newTexture);
}

void Texture::addTextures(std::map<std::string, std::string> newTextures)
{
    this->_textures.emplace(newTextures);
}

void Texture::deleteTexture(std::string textureName)
{
    for (const auto &texture:this->_textures) {
        if (texture.first == textureName)
            this->_textures.erase(textureName);
    }
}

void Texture::deleteTextures(std::vector<std::string> texturesName)
{
    for (const auto &texture:this->_textures) {
        for (const auto &textureName:texturesName) {
            if (texture.first == textureName)
                this->_textures.erase(textureName);
        }
    }
}

const std::map<std::string, std::string> Texture::getTexture(std::string textureName) const
{
    std::map<std::string, std::string> toReturn = {};

    for (const auto &texture:this->_textures) {
        if (texture.first == textureName)
            toReturn.emplace(this->_textures.find(textureName));
    }
    return (toReturn);
}

const std::map<std::string, std::string> Texture::getTextures(std::vector<std::string> texturesName) const
{
    std::map<std::string, std::string> toReturn = {};

    for (const auto &texture:this->_textures) {
        for (const auto &textureName:texturesName)
            if (texture.first == textureName)
                toReturn.emplace(this->_textures.find(textureName));
    }
    return (toReturn);
}

const std::map<std::string, std::string> Texture::getTextures() const
{
    return (this->_textures);
}