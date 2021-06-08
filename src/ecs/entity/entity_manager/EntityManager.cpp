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

<<<<<<< HEAD
void EntityManager::createEntity(std::string name, ECSVector3 position, ECSVector3 size)
{
    Entity newEntity(position, size);
    this->_entities.insert({name, std::make_shared<Entity>(newEntity)});
=======
void ECS::EntityManager::createEntity(std::string name, std::vector<int> position, std::vector<int> size)
{
    ECS::Vector3 Vposition(position.at(0), position.at(1), position.at(2));
    ECS::Vector3 Vsize(size.at(0), size.at(1), size.at(2));

    ECS::Entity newEntity(Vposition, Vsize);
    this->_entities.insert({name, std::make_shared<ECS::Entity>(newEntity)});
>>>>>>> 05938a43ba7df350ffc50db201868b91ce697826
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

<<<<<<< HEAD
void EntityManager::addDrawable3D(std::string name, DrawableType type)
{
    Entity *entity = (this->_entities.at(name).get());
    Drawable3D d(type, entity->getSize());

    entity->addComponent<Drawable3D>(d, DRAWABLE3D);
}

void EntityManager::addMoveable(std::string name)
=======
void ECS::EntityManager::addMoveable(std::string name)
>>>>>>> 05938a43ba7df350ffc50db201868b91ce697826
{
    ECS::Entity *entity = (this->_entities.at(name).get());
    ECS::Moveable m(entity->getPosition());

    entity->addComponent<ECS::Moveable>(m, MOVEABLE);
}

void ECS::EntityManager::addKillable(std::string name, unsigned short life)
{
<<<<<<< HEAD
    Entity e = *this->_entities.at(name).get();
    Killable k(life);
    e.addComponent<Killable>(k, KILLABLE);
=======
    ECS::Killable k(life);
    this->_entities.at(name).get()->addComponent<ECS::Killable>(k, KILLABLE);
>>>>>>> 05938a43ba7df350ffc50db201868b91ce697826
}