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
#include "ECSVector3.hpp"
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
             * @fn Entity(Vector3 &position, Vector3 &size)
             * @brief Construct a new Entity object
             * 
             * @param position Original position
             * @param size Original size
             */
            Entity(ECS::Vector3 &position, ECS::Vector3 &size);

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

            /**
             * @fn Vector3 &getPosition() const
             * @brief Get the position
             * 
             * @return Vector3& 
             */
            ECS::Vector3 &getPosition() const;

            /**
             * @fn Vector3 &getSize() const
             * @brief Get the size
             * 
             * @return Vector3& 
             */
            ECS::Vector3 &getSize() const;


            /**
             * @fn void setPosition(const Vector3 &newPos)
             * @brief Set the position of the entity
             * 
             * @param newPos New position of the entity
             */
            void setPosition(const ECS::Vector3 &newPos);

            /**
             * @fn void setSize(const Vector3 &newSize)
             * @brief Set the size of the entity
             * 
             * @param newSize New size of the entity
             */
            void setSize(const ECS::Vector3 &newSize);

        private:
            ECS::Vector3 &_position;
            ECS::Vector3 &_size;
            std::map<ECS::ComponentType, std::shared_ptr<ECS::IComponent>> _components;
    };
};

#endif //INDIE_Entity_HPP
