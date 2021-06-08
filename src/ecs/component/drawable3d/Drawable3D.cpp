/*
** EPITECH PROJECT, 2024
** indie
** File description:
** Created by prost,
*/
#include "Drawable3D.hpp"

#include <utility>

Drawable3D::Drawable3D(std::string meshPath, const ECSVector3& size) {
    this->_meshPath = std::move(meshPath);
    this->_size.setX(size._x);
    this->_size.setY(size._y);
    this->_size.setZ(size._z);
    this->_type = CUSTOM;
}

Drawable3D::Drawable3D(const Drawable3D &drawable3D) = default;

Drawable3D::Drawable3D(DrawableType type, const ECSVector3& size)
{
//    this->_meshPath = nullptr;
    this->_size = size;
    this->_type = type;
}

Drawable3D::~Drawable3D() = default;

void Drawable3D::setMeshPath(std::string meshPath) {
    this->_meshPath = std::move(meshPath);
}

void Drawable3D::setSize(const ECSVector3& size) {
    this->_size = size;
}

const std::string Drawable3D::getMeshPath() const {
    return this->_meshPath;
}

const ECSVector3 Drawable3D::getSize() const {
    return this->_size;
}

DrawableType Drawable3D::getType() const
{
    return this->_type;
}