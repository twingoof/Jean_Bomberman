/*
** EPITECH PROJECT, 2024
** indie
** File description:
** Created by prost,
*/
#include "Drawable3D.hpp"

#include <utility>

ECS::Drawable3D::Drawable3D(std::string meshPath, const ECS::Vector3<int>& size) : ECS::Drawable()
{
    this->_meshPath = std::move(meshPath);
    this->_texturePath = "";
    this->_size = size;
    this->_type = ECS::DrawableType::CUSTOM;
    this->_color = {255, 255, 255, 255};
    this->_wColor = {0, 0, 0, 0};
}

ECS::Drawable3D::Drawable3D(const Drawable3D &drawable3D) :
ECS::Drawable(), _meshPath(drawable3D._meshPath), _texturePath(drawable3D._texturePath),
_size(drawable3D._size), _type(drawable3D._type), _color(drawable3D._color), _wColor(drawable3D._wColor)
{
}

ECS::Drawable3D::Drawable3D(ECS::DrawableType type, const ECS::Vector3<int>& size) : ECS::Drawable()
{
    this->_meshPath = "";
    this->_texturePath = "";
    this->_size = size;
    this->_type = type;
    this->_color = {0, 255, 0, 255};
    this->_wColor = {0, 0, 0, 0};

}

ECS::Drawable3D::~Drawable3D() = default;

void ECS::Drawable3D::setMeshPath(std::string meshPath) {
    this->_meshPath = std::move(meshPath);
}

void ECS::Drawable3D::setSize(const ECS::Vector3<int>& size) {
    this->_size = size;
}

void ECS::Drawable3D::setColor(const ECS::Vector4<unsigned char> color)
{
    this->_color = color;
}

void ECS::Drawable3D::setWColor(const ECS::Vector4<unsigned char> wColor)
{
    this->_wColor = wColor;
}

std::string ECS::Drawable3D::getMeshPath() const {
    return this->_meshPath;
}

ECS::Vector3<int> ECS::Drawable3D::getSize() const {
    return this->_size;
}

ECS::DrawableType ECS::Drawable3D::getType() const
{
    return this->_type;
}

ECS::Vector4<unsigned char> ECS::Drawable3D::getColor() const
{
    return (this->_color);
}

ECS::Vector4<unsigned char> ECS::Drawable3D::getWColor() const
{
    return (this->_wColor);
}

void ECS::Drawable3D::setTexturePath(std::string texturePath)
{
    this->_texturePath = std::move(texturePath);
}

unsigned int ECS::Drawable3D::getId() const
{
    return (this->_id);
}

std::string ECS::Drawable3D::getTexturePath() const
{
    return (this->_texturePath);
}

