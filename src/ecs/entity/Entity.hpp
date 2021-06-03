/*
** EPITECH PROJECT, 2021
** B-YEP-400-NAN-4-1-indiestudio-gildas.gonzalez
** File description:
** Entity
*/

/**
 * @file Entity.hpp
 * @author gildas.gonzalez@epitech.eu; pierrick.prost@epitech.eu; pierrick.prost@epitech.eu; valentin.bouchet@epitech.eu; mathis.ragot@epitech.eu
 * @brief File that contain the Entity class
 * @version 0.1
 * @date 2021-06-03
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include <iostream>
#include <map>
#include <vector>

#ifndef ENTITY_HPP_
#define ENTITY_HPP_

#include "Vector3.hpp"
#include "enum.hpp"
#include "IComponent.hpp"

/**
 * @class Entity Entity.hpp "src/ecs/entity/Entity.hpp"
 */
class Entity {
    public:
        Entity(std::string id, Vector3 position, Vector3 size);
        ~Entity();

        void addComponent(std::pair<ComponentType, IComponent> newComponent);
        void addComponents(std::map<ComponentType, IComponent> newComponents);
        void deleteComponent(ComponentType componentId);
        void deleteComponents(std::vector<ComponentType> componentsId);

        const IComponent getComponent(ComponentType componentId) const;
        const std::map<ComponentType, IComponent> getComponents(std::vector<ComponentType> componentsId) const;
        const std::map<ComponentType, IComponent> getComponents() const;
        const Vector3 getSize() const;
        const Vector3 getPosition() const;

        void setSize(Vector3 newSize);
        void setPosition(Vector3 newPosition);
    private:
        std::string _id;
        Vector3 _position;
        Vector3 _size;
        std::map<ComponentType, IComponent> _components;
};

#endif /* !ENTITY_HPP_ */