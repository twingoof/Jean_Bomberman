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
#include <memory>

#ifndef ENTITY_HPP_
#define ENTITY_HPP_

#include "ECSVector3.hpp"
#include "enum.hpp"
#include "IComponent.hpp"

#include <memory>

/**
 * @class Entity Entity.hpp "src/ecs/entity/Entity.hpp"
 */
class Entity {
    public:
        Entity(std::string id, ECSVector3 position, ECSVector3 size);
        ~Entity();

        void addComponent(ComponentType componentType, IComponent component);
        void addComponents(std::map<ComponentType, IComponent> newComponents);
        void deleteComponent(ComponentType componentId);
        void deleteComponents(std::vector<ComponentType> componentsId);

        std::unique_ptr<IComponent> &getComponent(ComponentType componentId);
        std::map<ComponentType, std::unique_ptr<IComponent>> getComponents(std::vector<ComponentType> componentsId) const;
        std::map<ComponentType, std::unique_ptr<IComponent>> getComponents() const;
        ECSVector3 getSize() const;
        ECSVector3 getPosition() const;

        void setSize(ECSVector3 newSize);
        void setPosition(ECSVector3 newPosition);

    private:
        std::string _id;
        ECSVector3 _position;
        ECSVector3 _size;
        std::map<ComponentType, std::unique_ptr<IComponent>> _components;
        std::pair<ComponentType, std::unique_ptr<IComponent>> _toInsert;
};

#endif /* !ENTITY_HPP_ */