/*
** EPITECH PROJECT, 2021
** B-YEP-400-NAN-4-1-indiestudio-gildas.gonzalez
** File description:
** SceneManager
*/

#include "SceneManager.hpp"

ECS::SceneManager &ECS::SceneManager::getSceneManager()
{
    static SceneManager sceneManager;

    return (sceneManager);
}

void ECS::SceneManager::initSceneManager(void(*callback)())
{
    raylib::Window &window = raylib::Window::getWindow();
    ECS::MenuGenerator &menu = ECS::MenuGenerator::getMenuGenerator();

    this->_width = window.getWindowWidth();
    this->_height = window.getWindowHeight();
    window.setWindowFPS(60);
    menu.initMenuGenerator(callback);
    this->_clock.startClock();
    this->_scene = 0;
    this->_playerWin = -1;
    this->_exit = false;
}

void ECS::SceneManager::displayScene()
{
    if (this->_scene == 0)
        displayMenuScene();
    else if (this->_scene == 1) {
        displayGameScene();
    } else {
        displayEndScene();
    }
}

void ECS::SceneManager::displayMenuScene()
{
    ECS::MenuGenerator &menu = ECS::MenuGenerator::getMenuGenerator();
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

void ECS::SceneManager::displayGameScene()
{
    raylib::Window &window = raylib::Window::getWindow();

    if (this->_clock.getTimeElapsed() > 0.01) {
        if (ECS::getNbEntitiesByName("player", this->_gameEntities) <= 1) {
            this->setScene(2);
            return;
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

void ECS::SceneManager::displayEndScene()
{
    raylib::Window &window = raylib::Window::getWindow();
    std::vector<std::tuple<bool, ECS::Entity &>> winPlayer;

    if (this->_playerWin == -1) {
        if (ECS::getNbEntitiesByName("player", this->_gameEntities) == 0)
            this->_playerWin = 0;
        else
            this->_playerWin = std::stoi(std::get<ECS::Entity &>(*(ECS::getEntitiesByName("player", this->_gameEntities).begin())).getName().substr(6));
    }
    if (this->_clock.getTimeElapsed() > 0.5) {
        this->_gameEntities.clear();
        this->_gameEntities.push_back(Presets::createImage("BackgroundMenu", {0.0f, 0.0f, 0.0f}, {this->_width, this->_height, 0}, "../assets/BackgroundGame.png"));
        switch (this->_playerWin)
        {
            case 0:
                this->_gameEntities.push_back(Presets::createImage("Equality", {static_cast<float>(this->_width / 4), static_cast<float>(this->_height / 4), 0.0f}, {this->_width / 2, this->_height / 2, 0}, "../assets/DrawGame.png"));
                break;
            case 1:
                this->_gameEntities.push_back(Presets::createImage("VictoryPlayer1", {static_cast<float>(this->_width / 4), static_cast<float>(this->_height / 4), 0.0f}, {this->_width / 2, this->_height / 2, 0}, "../assets/VictoryPlayer1.png"));
                break;
            case 2:
                this->_gameEntities.push_back(Presets::createImage("VictoryPlayer2", {static_cast<float>(this->_width / 4), static_cast<float>(this->_height / 4), 0.0f}, {this->_width / 2, this->_height / 2, 0}, "../assets/VictoryPlayer2.png"));
                break;
            case 3:
                this->_gameEntities.push_back(Presets::createImage("VictoryPlayer3", {static_cast<float>(this->_width / 4), static_cast<float>(this->_height / 4), 0.0f}, {this->_width / 2, this->_height / 2, 0}, "../assets/VictoryPlayer3.png"));
                break;
            case 4:
                this->_gameEntities.push_back(Presets::createImage("VictoryPlayer4", {static_cast<float>(this->_width / 4), static_cast<float>(this->_height / 4), 0.0f}, {this->_width / 2, this->_height / 2, 0}, "../assets/VictoryPlayer4.png"));
                break;
            default:
                break;
        }
        this->_clock.restartClock();
    }
    this->_renderer.draw(this->_gameEntities);
}

void ECS::SceneManager::setScene(int scene)
{
    ECS::MenuGenerator &menu = ECS::MenuGenerator::getMenuGenerator();

    if (scene == 1) {
        raylib::Window &window = raylib::Window::getWindow();
        raylib::Camera3D camera({0, 80, 25}, {0, -10, 0}, {0, 1, 0}, 45, CAMERA_PERSPECTIVE);
        window.setMainCamera(camera);
        ECS::MapGenerator map(MAP_SIZE_X, MAP_SIZE_Z, menu.getNbPlayers());
        this->_gameEntities = map.generateMapEntities();
        this->_hud.createHudEntities(this->_gameEntities);
    }
    this->_scene = scene;
}

bool ECS::SceneManager::getExitStatus() const
{
    return (this->_exit);
}

int ECS::SceneManager::getScene() const
{
    return (this->_scene);
}