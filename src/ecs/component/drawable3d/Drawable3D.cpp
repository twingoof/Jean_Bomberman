/*
** EPITECH PROJECT, 2024
** indie
** File description:
** Created by prost,
*/
#include "Drawable3D.hpp"

#include <utility>

ECS::Drawable3D::Drawable3D(std::string meshPath, const ECS::Vector3<int>& size) {
    this->_meshPath = std::move(meshPath);
    this->_size = size;
    this->_type = ECS::DrawableType::CUSTOM;
}

ECS::Drawable3D::Drawable3D(const Drawable3D &drawable3D) = default;

ECS::Drawable3D::Drawable3D(ECS::DrawableType type, const ECS::Vector3<int>& size)
{
    this->_meshPath = "";
    this->_size = size;
    this->_type = type;
}

ECS::Drawable3D::~Drawable3D() = default;

void ECS::Drawable3D::setMeshPath(std::string meshPath) {
    this->_meshPath = std::move(meshPath);
}

void ECS::Drawable3D::setSize(const ECS::Vector3<int>& size) {
    this->_size = size;
}

const std::string ECS::Drawable3D::getMeshPath() const {
    return this->_meshPath;
}

const ECS::Vector3<int> ECS::Drawable3D::getSize() const {
    return this->_size;
}

ECS::DrawableType ECS::Drawable3D::getType() const
{
    return this->_type;
}