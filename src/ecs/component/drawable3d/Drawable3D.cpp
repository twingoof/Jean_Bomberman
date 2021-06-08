/*
** EPITECH PROJECT, 2024
** indie
** File description:
** Created by prost,
*/
#include "Drawable3D.hpp"

#include <utility>

ECS::Drawable3D::Drawable3D(std::string meshPath, const ECS::Vector3& size) {
    this->_meshPath = std::move(meshPath);
    this->_size.setX(size._x);
    this->_size.setY(size._y);
    this->_size.setZ(size._z);
    this->_type = CUSTOM;
}

ECS::Drawable3D::Drawable3D(const Drawable3D &drawable3D) = default;

<<<<<<< HEAD
Drawable3D::Drawable3D(DrawableType type, const ECSVector3& size)
{
//    this->_meshPath = nullptr;
    this->_size = size;
    this->_type = type;
}

Drawable3D::~Drawable3D() = default;
=======
ECS::Drawable3D::~Drawable3D() = default;
>>>>>>> 05938a43ba7df350ffc50db201868b91ce697826

void ECS::Drawable3D::setMeshPath(std::string meshPath) {
    this->_meshPath = std::move(meshPath);
}

void ECS::Drawable3D::setSize(const ECS::Vector3& size) {
    this->_size = size;
}

const std::string ECS::Drawable3D::getMeshPath() const {
    return this->_meshPath;
}

const ECS::Vector3 ECS::Drawable3D::getSize() const {
    return this->_size;
}

DrawableType Drawable3D::getType() const
{
    return this->_type;
}