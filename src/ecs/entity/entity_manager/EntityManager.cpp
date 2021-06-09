/*
** EPITECH PROJECT, 2021
** B-YEP-400-NAN-4-1-indiestudio-gildas.gonzalez [WSL: kali-linux]
** File description:
** EntityManager
*/

#include "EntityManager.hpp"

void ECS::EntityManager::addEntity(std::string name, ECS::Entity &newEntity)
{
    this->_entities.insert({name, std::make_shared<ECS::Entity>(newEntity)});
}

void ECS::EntityManager::createEntity(std::string name, ECS::Vector3 position, ECS::Vector3 size)
{
    Entity newEntity(position, size);
    this->_entities.insert({name, std::make_shared<Entity>(newEntity)});
}

ECS::Entity &ECS::EntityManager::getEntity(std::string entityName) const
{
    return (dynamic_cast<ECS::Entity&>((*this->_entities.at(entityName))));
}

std::map<std::string, std::shared_ptr<ECS::Entity>> ECS::EntityManager::getEntities() const
{
    return (this->_entities);
}

void ECS::EntityManager::addAttacker(std::string name, unsigned int ammo, unsigned short int damage)
{
    ECS::Attacker a(ammo, damage);
    this->_entities.at(name).get()->addComponent<ECS::Attacker>(a, ATTACKER);
}

void ECS::EntityManager::addClickable(std::string name, void(callback()))
{
    ECS::Clickable c(callback);
    this->_entities.at(name).get()->addComponent<ECS::Clickable>(c, CLICKABLE);
}

void ECS::EntityManager::addCollectible(std::string name)
{
    ECS::Collectible c;
    this->_entities.at(name).get()->addComponent<ECS::Collectible>(c, COLLECTIBLE);

}

void ECS::EntityManager::addDrawable2D(std::string name, std::string spritePath, ECS::DrawableType type)
{
    ECS::Entity *entity = (this->_entities.at(name).get());
    ECS::Drawable2D d(spritePath, entity->getSize(), type);

    entity->addComponent<ECS::Drawable2D>(d, DRAWABLE2D);
}

void ECS::EntityManager::addDrawable3D(std::string name, std::string meshPath)
{
    ECS::Entity *entity = (this->_entities.at(name).get());
    ECS::Drawable3D d(meshPath, entity->getSize());

    entity->addComponent<ECS::Drawable3D>(d, DRAWABLE3D);
}

void ECS::EntityManager::addDrawable3D(std::string name, DrawableType type)
{
    ECS::Entity *entity = (this->_entities.at(name).get());
    ECS::Drawable3D d(type, entity->getSize());

    entity->addComponent<Drawable3D>(d, DRAWABLE3D);
}

void ECS::EntityManager::addMoveable(std::string name)
{
    ECS::Entity *entity = (this->_entities.at(name).get());
    ECS::Moveable m(entity->getPosition());

    entity->addComponent<ECS::Moveable>(m, MOVEABLE);
}

void ECS::EntityManager::addKillable(std::string name, unsigned short life)
{
    ECS::Entity e = *this->_entities.at(name).get();
    ECS::Killable k(life);
    e.addComponent<Killable>(k, KILLABLE);
}