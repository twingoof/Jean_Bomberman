/*
** EPITECH PROJECT, 2021
** B-YEP-400-NAN-4-1-indiestudio-gildas.gonzalez
** File description:
** SceneManager
*/

#include "SceneManager.hpp"

SceneManager &SceneManager::getSceneManager()
{
    static SceneManager sceneManager;

    return (sceneManager);
}

void SceneManager::initSceneManager(void(*callback)())
{
    raylib::Window &window = raylib::Window::getWindow();
    menu::MenuGenerator &menu = menu::MenuGenerator::getMenuGenerator();

    this->_width = window.getWindowWidth();
    this->_height = window.getWindowHeight();
    window.setWindowFPS(60);
    menu.initMenuGenerator(callback);
    this->_clock.startClock();
    this->_scene = 0;
    this->_exit = false;
}

void SceneManager::displayScene()
{
    if (this->_scene == 0)
        displayMenuScene();
    else if (this->_scene == 1) {
        displayGameScene();
    }
}

void SceneManager::displayMenuScene()
{
    menu::MenuGenerator &menu = menu::MenuGenerator::getMenuGenerator();
    std::vector<ECS::Entity> &menuEntities = menu.getMenuEntities();

    if (menu.needToExit()) {
        this->_exit = true;
        return;
    }
    if (this->_clock.getTimeElapsed() > 0.01) {
        this->_btnManager.checkButtonArea(menuEntities);
        menu.updateEntities();
        this->_clock.restartClock();
    }
    this->_renderer.draw(menuEntities);
    DrawFPS(10, 10);
}

void SceneManager::displayGameScene()
{
    raylib::Window &window = raylib::Window::getWindow();

    if (this->_clock.getTimeElapsed() > 0.01) {
        if (ECS::getNbEntitiesByName("player", this->_gameEntities) == 0) {
            std::cout << "Equality" << std::endl;
            this->_exit = true; //! Display la scène de fin
        } else if (ECS::getNbEntitiesByName("player", this->_gameEntities) == 1) {
            std::cout << "And the winner is: " << std::get<ECS::Entity &>(*(ECS::getEntitiesByName("player", this->_gameEntities).begin())).getName() << std::endl;
            this->_exit = true; //! Display la scène de fin
        }
        this->_ctrl.moveEntity(this->_gameEntities);
        this->_atk.manageBombs(this->_gameEntities);
        this->_disp.moveEntity(this->_gameEntities);
        this->_kill.deleteWall(this->_gameEntities);
        if (window.getWindowWidth() != this->_width || window.getWindowHeight() != this->_height) {
            this->_width = window.getWindowWidth();
            this->_height = window.getWindowHeight();
            this->_hud.updateHudEntities(this->_gameEntities, this->_width, this->_height);
        }
        this->_clock.restartClock();
    }
    this->_renderer.draw(this->_gameEntities);
    DrawFPS(10, 10);
}

void SceneManager::setScene(int scene)
{
    menu::MenuGenerator &menu = menu::MenuGenerator::getMenuGenerator();

    if (scene == 1) {
        raylib::Window &window = raylib::Window::getWindow();
        raylib::Camera3D camera({0, 80, 25}, {0, -10, 0}, {0, 1, 0}, 45, CAMERA_PERSPECTIVE);
        window.setMainCamera(camera);
        MapGenerator map(MAP_SIZE_X, MAP_SIZE_Z, menu.getNbPlayers());
        this->_gameEntities = map.generateMapEntities();
        this->_hud.createHudEntities(this->_gameEntities);
    }
    this->_scene = scene;
}

bool SceneManager::getExitStatus() const
{
    return (this->_exit);
}

int SceneManager::getScene() const
{
    return (this->_scene);
}