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
    this->_size = size;
}

Drawable3D::Drawable3D(const Drawable3D &drawable3D) = default;

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