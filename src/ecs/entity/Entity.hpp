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
 * @date 2021-05-31
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include <map>
#include <vector>
#include <iostream>

#ifndef ENTITY_HPP_
#define ENTITY_HPP_

#include "IComponent.hpp"
#include "IEntity.hpp"

/**
 * @class Entity Entity.hpp "src/ecs/entity/Entity.hpp"
 */
class Entity: public IEntity {
    public:
        /**
         * @fn Entity(std::string name, std::map<std::string, IComponent> defaultComponent = {})
         * @brief Construct a new Entity object
         * 
         * @param name Name of the Entity
         * @param defaultComponent Not required, some basical components for the Entity
         */
        Entity(std::string name, std::map<std::string, IComponent> defaultComponent = {});

        /**
         * @fn ~Entity()
         * @brief Destroy the Entity object
         */
        ~Entity();

        /**
         * @fn void addComponent(std::map<std::string, IComponent> newComponent) override
         * @brief Add a new component to the Entity 
         * 
         * @param newComponent IComponent to add
         */
        void addComponent(std::map<std::string, IComponent> newComponent) override;

        /**
         * @fn void deleteComponent(std::string componentID) override
         * @brief Delete a component from the Entity
         * 
         * @param componentID The ID of the component
         */
        void deleteComponent(std::string componentID) override;

        /**
         * @fn void deleteComponents(std::vector<std::string> componentsID) override
         * @brief Delete multiple components from the Entity
         * 
         * @param componentsID Vector of component's ID
         */
        void deleteComponents(std::vector<std::string> componentsID) override;

        /**
         * @fn const std::map<std::string, IComponent> getComponent(std::string componentID) const override
         * @brief Get a component from the Entity
         * 
         * @param componentID Component ID
         * @return const std::map<std::string, IComponent> 
         */
        const std::map<std::string, IComponent> getComponent(std::string componentID) const override;

        /**
         * @fn const std::map<std::string, IComponent> getComponents(std::vector<std::string> componentsID) const override
         * @brief Get multiple components from the Entity
         * 
         * @param componentsID Vector of component's ID
         * @return const std::map<std::string, IComponent> 
         */
        const std::map<std::string, IComponent> getComponents(std::vector<std::string> componentsID) const override;

        /**
         * @fn const std::map<std::string, IComponent> getComponents() const override
         * @brief Get all the component of the entity
         * 
         * @return const std::map<std::string, IComponent> 
         */
        const std::map<std::string, IComponent> getComponents() const override;

        /**
         * @fn const std::string getName() const
         * @brief Get the name of the entity
         * 
         * @return const std::string 
         */
        const std::string getName() const;
    private:
        std::string _name; /**< Name of the components*/
        std::map<std::string, IComponent> _components; /**< Map that contains all of the components*/
};

#endif /* !ENTITY_HPP_ */
