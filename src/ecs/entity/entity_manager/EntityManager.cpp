/*
** EPITECH PROJECT, 2021
** B-YEP-400-NAN-4-1-indiestudio-gildas.gonzalez [WSL: kali-linux]
** File description:
** EntityManager
*/

#include "EntityManager.hpp"
#include "ECSVector3.hpp"
#include "Attacker.hpp"
#include "Clickable.hpp"
#include "Drawable2D.hpp"
#include "Collectible.hpp"
#include "Drawable3D.hpp"
#include "Moveable.hpp"
#include "Killable.hpp"
#include "enum.hpp"

void EntityManager::addEntity(std::string name, Entity &newEntity)
{
    this->_entities.insert({name, std::make_shared<Entity>(newEntity)});
}

void EntityManager::createEntity(std::string name, std::vector<int> position, std::vector<int> size)
{
    ECSVector3 Vposition(position.at(0), position.at(1), position.at(2));
    ECSVector3 Vsize(size.at(0), size.at(1), size.at(2));

    Entity newEntity(Vposition, Vsize);
    this->_entities.insert({name, std::make_shared<Entity>(newEntity)});
}

Entity &EntityManager::getEntity(std::string entityName) const
{
    return (dynamic_cast<Entity&>((*this->_entities.at(entityName))));
}

std::map<std::string, std::shared_ptr<Entity>> EntityManager::getEntities() const
{
    return (this->_entities);
}

void EntityManager::addAttacker(std::string name, unsigned int ammo, unsigned short int damage)
{
    Attacker a(ammo, damage);
    this->_entities.at(name).get()->addComponent(a, ATTACKER);
}

void EntityManager::addClickable(std::string name, void(callback()))
{
    Clickable c(callback);
    this->_entities.at(name).get()->addComponent(c, CLICKABLE);
}

void EntityManager::addCollectible(std::string name)
{
    Collectible c;
    this->_entities.at(name).get()->addComponent(c, COLLECTIBLE);

}

void EntityManager::addDrawable2D(std::string name, std::string spritePath, DrawableType type)
{
    Entity *entity = (this->_entities.at(name).get());
    Drawable2D d(spritePath, entity->getSize(), type);

    entity->addComponent(d, DRAWABLE2D);
}

void EntityManager::addDrawable3D(std::string name, std::string meshPath)
{
    Entity *entity = (this->_entities.at(name).get());
    Drawable3D d(meshPath, entity->getSize());

    entity->addComponent(d, DRAWABLE3D);
}

void EntityManager::addMoveable(std::string name)
{
    Entity *entity = (this->_entities.at(name).get());
    Moveable m(entity->getPosition());

    entity->addComponent(m, MOVEABLE);
}

void EntityManager::addKillable(std::string name, unsigned short life)
{
    Killable k(life);
    this->_entities.at(name).get()->addComponent(k, KILLABLE);
}