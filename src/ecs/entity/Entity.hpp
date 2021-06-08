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
         * @fn Entity(ECSVector3 &position, ECSVector3 &size)
         * @brief Construct a new Entity object
         * 
         * @param position Original position
         * @param size Original size
         */
        Entity(ECSVector3 &position, ECSVector3 &size);

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
        void addComponent(T& component, ComponentType type);


        /**
         * @fn T &getComponent(ComponentType type) const
         * @brief Get a component
         * 
         * @tparam T 
         * @param type Type of the component
         * @return T& 
         */
        template<class T>
        T &getComponent(ComponentType type) const;

        /**
         * @fn ECSVector3 &getPosition() const
         * @brief Get the position
         * 
         * @return ECSVector3& 
         */
        ECSVector3 &getPosition() const;

        /**
         * @fn ECSVector3 &getSize() const
         * @brief Get the size
         * 
         * @return ECSVector3& 
         */
        ECSVector3 &getSize() const;


        /**
         * @fn void setPosition(const ECSVector3 &newPos)
         * @brief Set the position of the entity
         * 
         * @param newPos New position of the entity
         */
        void setPosition(const ECSVector3 &newPos);

        /**
         * @fn void setSize(const ECSVector3 &newSize)
         * @brief Set the size of the entity
         * 
         * @param newSize New size of the entity
         */
        void setSize(const ECSVector3 &newSize);

    private:
        ECSVector3 &_position;
        ECSVector3 &_size;
        std::map<ComponentType, std::shared_ptr<IComponent>> _components;
};

#endif //INDIE_Entity_HPP
