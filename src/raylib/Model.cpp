/*
** EPITECH PROJECT, 2021
** B-YEP-400-NAN-4-1-indiestudio-gildas.gonzalez
** File description:
** Model
*/

#include "Model.hpp"

raylib::Model::Model(const std::string &filePath)
{
    this->setModel(LoadModel(filePath.c_str()));
}

raylib::Model::Model(const ::Model &old)
{
    this->setModel(old);
}

raylib::Model &raylib::Model::operator=(const ::Model &old)
{
    this->setModel(old);
    return (*this);
}

raylib::Model::~Model()
{
    this->unloadModel();
}

void raylib::Model::unloadModel(void)
{
    ::UnloadModel(*this);
}

void raylib::Model::drawModel(void)
{
    this->drawModel({0, 0, 0}, 0.0f);
}

void raylib::Model::drawModel(::Vector3 position, float scale, ::Color tint)
{
    ::DrawModel(*this, position, scale, tint);
}

void raylib::Model::drawModel(::Vector3 position, ::Vector3 rotationAxis, float rotationAngle, ::Vector3 scale, ::Color tint)
{
    ::DrawModelEx(*this, position, rotationAxis, rotationAngle, scale, tint);
}

void raylib::Model::updateAnimation(::ModelAnimation modelAnim, int frame)
{
    ::UpdateModelAnimation(*this, modelAnim, frame);
}

void raylib::Model::setModel(const ::Model &model)
{
    this->transform = model.transform;
    this->meshCount = model.meshCount;
    this->materialCount = model.materialCount;
    this->meshes = model.meshes;
    this->materials = model.materials;
    this->meshMaterial = model.meshMaterial;
    this->boneCount = model.boneCount;
    this->bones = model.bones;
    this->bindPose = model.bindPose;
}