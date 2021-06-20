/*
** EPITECH PROJECT, 2021
** B-YEP-400-NAN-4-1-indiestudio-gildas.gonzalez
** File description:
** Materials
*/

#include "Materials.hpp"

raylib::Material::Material()
{
    this->loadDefault();
}

raylib::Material::Material(const ::Material &oldMat)
{
    this->setMaterial(oldMat);
}

raylib::Material &raylib::Material::operator=(const ::Material &oldMat)
{
    this->setMaterial(oldMat);
    return (*this);
}

raylib::Material::~Material()
{
    this->unloadMat();
}

void raylib::Material::unloadMat(void)
{
    ::UnloadMaterial(*this);
}

void raylib::Material::setTexture(int mapType, const ::Texture &texture)
{
    ::SetMaterialTexture(this, mapType, texture);
}

void raylib::Material::loadDefault(void)
{
    this->setMaterial(::LoadMaterialDefault());
}

void raylib::Material::setMaterial(const ::Material &oldMat)
{
    this->maps = oldMat.maps;
    this->params[0] = oldMat.params[0];
    this->params[1] = oldMat.params[1];
    this->params[2] = oldMat.params[2];
    this->params[3] = oldMat.params[3];
    this->params[4] = oldMat.params[4];
    this->shader = oldMat.shader;
}

std::vector<raylib::Material> raylib::loadMaterials(const std::string &filePath, int materialCount)
{
    std::vector<raylib::Material> newMaterials;
    auto newMaterialC = ::LoadMaterials(filePath.c_str(), &materialCount);

    if (newMaterialC == nullptr)
        return (newMaterials);
    for (int i = 0; i < materialCount; i++)
        newMaterials.push_back(raylib::Material(newMaterialC[i]));
    return (newMaterials);
}