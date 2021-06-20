/*
** EPITECH PROJECT, 2021
** B-YEP-400-NAN-4-1-indiestudio-gildas.gonzalez
** File description:
** SceneManager
*/

/**
 * @file SceneManager.hpp
 * @author gildas.gonzalez@epitech.eu; pierrick.prost@epitech.eu; pierrick.prost@epitech.eu; valentin.bouchet@epitech.eu; mathis.ragot@epitech.eu
 * @brief File that contain the SceneManager system
 * @version 0.1
 * @date 2021-06-20
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#ifndef SCENEMANAGER_HPP_
#define SCENEMANAGER_HPP_

#include "Collider.hpp"
#include "Moveable.hpp"
#include "Window.hpp"
#include "Camera.hpp"
#include "Displacer.hpp"
#include "Renderer.hpp"
#include "Presets.hpp"
#include "Attack.hpp"
#include "Controller.hpp"
#include "Text.hpp"
#include "Displacer.hpp"
#include "Transform.hpp"
#include "MapGenerator.hpp"
#include "vectors/ECSVector.hpp"
#include "Clock.hpp"
#include "Kill.hpp"
#include "GetEntityInVector.hpp"
#include "Sound.hpp"
#include "Hud.hpp"
#include "MenuGenerator.hpp"
#include "ButtonClickManager.hpp"

/**
 * @namespace ECS
 */
namespace ECS {
    /**
     * @class SceneManager SceneManager.hpp "src/ecs/systems/SceneManager.hpp"
    */
    class SceneManager {
        public:
            /**
             * @fn static SceneManager &getSceneManager()
             * @brief Get the Scene Manager
             * 
             * @return SceneManager& 
             */
            static SceneManager &getSceneManager();

            /**
             * @fn ~SceneManager() = default
             * @brief Destroy the Scene Manager
             */
            ~SceneManager() = default;


            /**
             * @fn void initSceneManager(void(*callback)())
             * @brief Init the scene manager
             * 
             * @param callback Callback
             */
            void initSceneManager(void(*callback)());

            /**
             * @fn void displayScene()
             * @brief Display scene
             */
            void displayScene();

            /**
             * @fn void displayMenuScene()
             * @brief Display menu scene
             */
            void displayMenuScene();
            
            /**
             * @fn void displayGameScene()
             * @brief Display game
             */
            void displayGameScene();


            /**
             * @fn void setScene(int scene)
             * @brief Set the Scene
             * 
             * @param scene Scene
             */
            void setScene(int scene);

            /**
             * @fn bool getExitStatus() const
             * @brief Get the Exit Status
             * 
             * @return true 
             * @return false 
             */
            bool getExitStatus() const;

            /**
             * @fn int getScene() const
             * @brief Get the Scene
             * 
             * @return int 
             */
            int getScene() const;

        protected:
        private:
            /**
             * @fn SceneManager() = default
             * @brief Construct a new Scene Manager
             */
            SceneManager() = default;
            
            /**
             * @fn SceneManager(const SceneManager &newSceneManager) = delete
             * @brief Construct a new Scene Manager
             * 
             * @param newSceneManager New scene manager
             */
            SceneManager(const SceneManager &newSceneManager) = delete;
            
            /**
             * @fn SceneManager &operator=(const SceneManager &newSceneManager) = delete
             * @brief Copy constructor
             * 
             * @param newSceneManager New scene manager
             * @return SceneManager& 
             */
            SceneManager &operator=(const SceneManager &newSceneManager) = delete;

            int _scene;
            int _width;
            int _height;
            bool _exit;
            ECS::Attack _atk;
            ECS::ButtonClickManager _btnManager;
            ECS::Clock _clock;
            ECS::Controller _ctrl;
            ECS::Displacer _disp;
            ECS::Hud _hud;
            ECS::Kill _kill;
            ECS::Renderer _renderer;
            std::vector<ECS::Entity> _mapEntities;
            std::vector<ECS::Entity> _gameEntities;
    };
}

#endif /* !SCENEMANAGER_HPP_ */
