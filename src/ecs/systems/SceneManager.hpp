/*
** EPITECH PROJECT, 2021
** B-YEP-400-NAN-4-1-indiestudio-gildas.gonzalez
** File description:
** SceneManager
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

class SceneManager {
    public:
        static SceneManager &getSceneManager();
        ~SceneManager() = default;

        void initSceneManager(void(*callback)());

        void displayScene();
        void displayMenuScene();
        void displayGameScene();
        void displayEndScene();

        void setScene(int scene);
        bool getExitStatus() const;
        int getScene() const;

    protected:
    private:
        SceneManager() = default;
        SceneManager(const SceneManager &newSceneManager) = delete;
        SceneManager &operator=(const SceneManager &newSceneManager) = delete;

        int _scene;
        int _width;
        int _height;
        int _playerWin;
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

#endif /* !SCENEMANAGER_HPP_ */
