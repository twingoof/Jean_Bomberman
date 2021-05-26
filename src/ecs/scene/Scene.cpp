/*
** EPITECH PROJECT, 2021
** B-YEP-400-NAN-4-1-indiestudio-gildas.gonzalez
** File description:
** Scene
*/

#include "Scene.hpp"

Scene::Scene(std::string title)
{
    this->_title = title;
    this->_entities = {};
}

Scene::~Scene()
{
}

void Scene::addEntity(IEntity &newEntity)
{
    this->_entities.emplace_back(newEntity);
}

void Scene::display()
{
    for (const auto &entity:this->_entities) {
    }
}

const std::string Scene::getTitle() const
{
    return (this->_title);
}

const std::vector<IEntity> Scene::getEntities() const
{
    return (this->_entities);
}