/*
** EPITECH PROJECT, 2021
** B-YEP-400-NAN-4-1-indiestudio-gildas.gonzalez
** File description:
** Scene
*/

/**
 * @file Scene.hpp
 * @author gildas.gonzalez@epitech.eu; pierrick.prost@epitech.eu; pierrick.prost@epitech.eu; valentin.bouchet@epitech.eu; mathis.ragot@epitech.eu
 * @brief File that contain the scene class
 * @version 0.1
 * @date 2021-05-26
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include <vector>
#include <iostream>

#ifndef SCENE_HPP_
#define SCENE_HPP_

#include "IEntity.hpp"
#include "IComponent.hpp"

/**
 * @class Scene Scene.hpp "src/ecs/scene/Scene.hpp"
 */
class Scene {
    public:
        /**
         * @fn Scene(std::string title)
         * @brief Construct a new Scene object
         * 
         * @param title Title of the scene
         */
        Scene(std::string title);

        /**
         * @fn ~Scene()
         * @brief Destroy the Scene object
         */
        ~Scene();


        /**
         * @fn void addEntity(IEntity &newEntity)
         * @brief Add a new entity to the scene
         * 
         * @param newEntity New entity to add
         */
        void addEntity(IEntity &newEntity);

        /**
         * @fn void display()
         * @brief Display all entities
         */
        void display();

        /**
         * @fn const std::string getTitle() const
         * @brief Get the title. For test purpose only.
         * 
         * @return const std::string 
         */
        const std::string getTitle() const;

        /**
         * @fn const std::vector<IEntity> getEntities() const
         * @brief Get the entities. For test purpose only.
         * 
         * @return const std::vector<IEntity> 
         */
        const std::vector<IEntity> getEntities() const;

    private:
        std::string _title; /**< Title of the scene*/
        std::vector<IEntity> _entities; /**< Array of all the entities of the scene*/
};

#endif /* !SCENE_HPP_ */
