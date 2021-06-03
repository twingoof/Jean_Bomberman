/*
** EPITECH PROJECT, 2021
** B-YEP-400-NAN-4-1-indiestudio-gildas.gonzalez
** File description:
** Entity
*/

#include <iostream>
#include <map>
#include <vector>

#ifndef ENTITY_HPP_
#define ENTITY_HPP_

#include "ECSVector3.hpp"
#include "enum.hpp"
#include "IComponent.hpp"

class Entity {
    public:
        Entity(std::string id, ECSVector3 position, ECSVector3 size);
        ~Entity();

        void addComponent(std::pair<ComponentType, IComponent> newComponent);
        void addComponents(std::map<ComponentType, IComponent> newComponents);
        void deleteComponent(ComponentType componentId);
        void deleteComponents(std::vector<ComponentType> componentsId);

        const IComponent getComponent(ComponentType componentId) const;
        const std::map<ComponentType, IComponent> getComponents(std::vector<ComponentType> componentsId) const;
        const std::map<ComponentType, IComponent> getComponents() const;
        ECSVector3 getSize() const;
    private:
        std::string _id;
        ECSVector3 _position;
        ECSVector3 _size;
        std::map<ComponentType, IComponent> _components;

        //Drawable2D _drawable2D;
        //Drawable3D _drawable3D;
        //Clickable _clickable;
        //Moveable _moveable;
        //Alive _alive;
        //Physics _physics;
        //Collectible _collectible;
};

#endif /* !ENTITY_HPP_ */