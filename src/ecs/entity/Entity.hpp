/*
** EPITECH PROJECT, 2021
** indie
** File description:
** TODO: add description
*/

/**
 * @file Entity.hpp
 * @author gildas.gonzalez@epitech.eu; pierrick.prost@epitech.eu; pierrick.prost@epitech.eu; valentin.bouchet@epitech.eu; mathis.ragot@epitech.eu
 * @brief File that contain the Entity class
 * @version 0.1
 * @date 2021-06-08
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include <map>
#include <memory>

#ifndef INDIE_Entity_HPP
#define INDIE_Entity_HPP

#include "enum.hpp"
#include "ECSVector.hpp"
#include "IComponent.hpp"

namespace ECS {
    /**
     * @class Entity Entity.hpp "src/ecs/entity/Entity.hpp"
     */
    class Entity {
        public:
            /**
             * @fn Entity() = default
             * @brief Construct a new Entity object
             */
            Entity() = default;

            /**
             * @fn Entity(std::string name)
             * @brief Construct a new Entity object
             * 
             * @param name Name of the entity
             */
            Entity(const std::string &name);

            /**
             * @fn ~Entity() = default
             * @brief Destroy the Entity object
             * 
             */
            ~Entity() = default;

            /**
             * @fn void addComponent(T& component, ComponentType type)
             * @brief Add a component
             * 
             * @tparam T 
             * @param component New component
             * @param type Component's type
             */
            template<class T>
            void addComponent(T& component, ECS::ComponentType type) {
                this->_components.insert(std::make_pair(type, std::make_shared<T>(component)));
            };

            /**
             * @fn void setName(std::string newName)
             * @brief Set the name of the entity
             * 
             * @param newName New name to set
             */
            void setName(std::string newName);

            /**
             * @fn std::string getName() const
             * @brief Get the name of the entity
             * 
             * @return std::string 
             */
            std::string getName() const;

            /**
             * @fn T &getComponent(ComponentType type) const
             * @brief Get a component
             * 
             * @tparam T 
             * @param type Type of the component
             * @return T& 
             */
            template<class T>
            T &getComponent(ECS::ComponentType type) const {
                return dynamic_cast<T&>((*this->_components.at(type)));
            };

        private:
            std::string _name;
            std::map<ECS::ComponentType, std::shared_ptr<ECS::IComponent>> _components;
    };
};

#endif //INDIE_Entity_HPP
