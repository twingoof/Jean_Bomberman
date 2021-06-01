/*
** EPITECH PROJECT, 2021
** B-YEP-400-NAN-4-1-indiestudio-gildas.gonzalez
** File description:
** IEntity
*/

/**
 * @file IEntity.hpp
 * @author gildas.gonzalez@epitech.eu; pierrick.prost@epitech.eu; pierrick.prost@epitech.eu; valentin.bouchet@epitech.eu; mathis.ragot@epitech.eu
 * @brief File that contain the interface for all Entity
 * @version 0.1
 * @date 2021-05-26
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include <iostream>
#include <map>
#include <vector>
#ifndef IENTITY_HPP_
#define IENTITY_HPP_

#include "IComponent.hpp"
/**
 * @class IEntity IEntity.hpp "src/ecs/entity/IEntity.hpp"
 */
class IEntity {
    public:
        /**
         * @fn IEntity() = default
         * @brief Construct a new IEntity object
         */
        IEntity() = default;

        /**
         * @fn virtual ~IEntity() = default
         * @brief Destroy the IEntity object
         */
        virtual ~IEntity() = default;

        /**
         * @fn virtual void addComponent(std::pair<std::string, IComponent> newComponent) = 0
         * @brief Add a new component to the Entity 
         * 
         * @param newComponent IComponent to add
         */
        virtual void addComponent(std::pair<std::string, IComponent> newComponent) = 0;

        /**
         * @fn virtual void addComponents(std::map<std::string, IComponent> newComponents) = 0
         * @brief Add multiple component to the Entity
         * 
         * @param newComponents IComponents to add
         */
        virtual void addComponents(std::map<std::string, IComponent> newComponents) = 0;
        /**
         * @fn virtual void deleteComponent(std::string componentID) = 0
         * @brief Delete a component from the Entity
         * 
         * @param componentID The ID of the component
         */
        virtual void deleteComponent(std::string componentID) = 0;

        /**
         * @fn virtual void deleteComponents(std::vector<std::string> componentsID) = 0
         * @brief Delete multiple components from the Entity
         * 
         * @param componentsID Vector of component's ID
         */
        virtual void deleteComponents(std::vector<std::string> componentsID) = 0;

        /**
         * @fn virtual const std::map<std::string, IComponent> getComponent(std::string componentID) const = 0
         * @brief Get a component from the Entity
         * 
         * @param componentID Component ID
         * @return const std::map<std::string, IComponent> 
         */
        virtual const std::map<std::string, IComponent> getComponent(std::string componentID) const = 0;
        
        /**
         * @fn virtual const std::map<std::string, IComponent> getComponents(std::vector<std::string> componentsID) const = 0
         * @brief Get multiple components from the Entity
         * 
         * @param componentsID Vector of component's ID
         * @return const std::map<std::string, IComponent> 
         */
        virtual const std::map<std::string, IComponent> getComponents(std::vector<std::string> componentsID) const = 0;
        
        /**
         * @fn virtual const std::map<std::string, IComponent> getComponents() const = 0
         * @brief Get all the component of the entity
         * 
         * @return const std::map<std::string, IComponent> 
         */
        virtual const std::map<std::string, IComponent> getComponents() const = 0;
};

#endif /* !IENTITY_HPP_ */