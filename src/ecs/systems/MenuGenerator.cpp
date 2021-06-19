/*
** EPITECH PROJECT, 2021
** B-YEP-400-NAN-4-1-indiestudio-gildas.gonzalez [WSL: Ubuntu-20.04]
** File description:
** MenuGenerator
*/

#include "MenuGenerator.hpp"

void callbackMenu()
{
    menu::MenuGenerator &menu = menu::MenuGenerator::getMenuGenerator();
    menu.generateMenu();
}

void callbackTuto()
{
    menu::MenuGenerator &menu = menu::MenuGenerator::getMenuGenerator();
    menu.generateTuto();
}

void callbackOptions()
{
    menu::MenuGenerator &menu = menu::MenuGenerator::getMenuGenerator();
    menu.generateOptions();
}

void callbackCredits()
{
    menu::MenuGenerator &menu = menu::MenuGenerator::getMenuGenerator();
    menu.generateCredits();
}

void callbackTuto1()
{
    menu::MenuGenerator &menu = menu::MenuGenerator::getMenuGenerator();
    menu.generateTuto1();
}

void callbackTuto2()
{
    menu::MenuGenerator &menu = menu::MenuGenerator::getMenuGenerator();
    menu.generateTuto2();
}

void callbackQuit()
{
    menu::MenuGenerator &menu = menu::MenuGenerator::getMenuGenerator();
    menu.setExit();
}

void callbackTwoPlayers()
{
    menu::MenuGenerator &menu = menu::MenuGenerator::getMenuGenerator();
    ;
}

void callbackThreePlayers()
{
    menu::MenuGenerator &menu = menu::MenuGenerator::getMenuGenerator();
    ;
}

void callbackFourPlayers()
{
    menu::MenuGenerator &menu = menu::MenuGenerator::getMenuGenerator();
    ;
}

void callbackSetVolume()
{
    menu::MenuGenerator &menu = menu::MenuGenerator::getMenuGenerator();
    menu.setVolume();
}

void callbackSetKeyInput()
{
    menu::MenuGenerator &menu = menu::MenuGenerator::getMenuGenerator();
    ;
}

void menu::MenuGenerator::initMenuGenerator(void(*callbackPlay)(), float volume, int nbPlayers)
{
    raylib::Window &window = raylib::Window::getWindow();
    std::map<std::string, raylib::Keys> fstControls{{"up", raylib::Keys::KEY_UP}, {"down", raylib::Keys::KEY_DOWN}, {"left", raylib::Keys::KEY_LEFT}, {"right", raylib::Keys::KEY_RIGHT}, {"bomb", raylib::Keys::KEY_RIGHT_CONTROL},};
    this->_playerKeys[0] = {{"up", raylib::Keys::KEY_UP}, {"down", raylib::Keys::KEY_DOWN}, {"left", raylib::Keys::KEY_LEFT}, {"right", raylib::Keys::KEY_RIGHT}, {"bomb", raylib::Keys::KEY_L},};
    this->_playerKeys[1] = {{"up", raylib::Keys::KEY_W}, {"down", raylib::Keys::KEY_S}, {"left", raylib::Keys::KEY_A}, {"right", raylib::Keys::KEY_D}, {"bomb", raylib::Keys::KEY_SPACE},};
    this->_playerKeys[2] = {{"up", raylib::Keys::KEY_O}, {"down", raylib::Keys::KEY_L}, {"left", raylib::Keys::KEY_K}, {"right", raylib::Keys::KEY_M}, {"bomb", raylib::Keys::KEY_P},};
    this->_playerKeys[3] = {{"up", raylib::Keys::KEY_F1}, {"down", raylib::Keys::KEY_F2}, {"left", raylib::Keys::KEY_F3}, {"right", raylib::Keys::KEY_F4}, {"bomb", raylib::Keys::KEY_F5},};
    this->_width = window.getWindowWidth();
    this->_height = window.getWindowHeight();
    this->_callbackPlay = callbackPlay;
    this->_volume = volume;
    this->_nbPlayers = nbPlayers;
    this->generateMenu();
}

std::vector<ECS::Entity> &menu::MenuGenerator::getMenuEntities()
{
    return (this->_menuEntities);
}

std::map<int, std::map<std::string, raylib::Keys>> menu::MenuGenerator::getPlayerKeys() const
{
    return (this->_playerKeys);
}

float menu::MenuGenerator::getVolume() const
{
    return (this->_volume);
}

int menu::MenuGenerator::getNbPlayers() const
{
    return (this->_nbPlayers);
}

bool menu::MenuGenerator::needToExit() const
{
    return (this->_quit);
}

void menu::MenuGenerator::updateEntities()
{
    raylib::Window &window = raylib::Window::getWindow();

    if (this->_width == window.getWindowWidth() && this->_height == window.getWindowHeight())
        return;
    switch (this->_menuPage)
    {
        case (0):
            generateMenu();
            break;
        case (1):
            generateTuto();
            break;
        case (2):
            generateTuto1();
            break;
        case (3):
            generateTuto2();
            break;
        case (4):
            generateOptions();
            break;
        case (5):
            generateCredits();
            break;
        case (6):
            generateKeysInputSelection();
            break;
        default:
            break;
    }
    this->_width = window.getWindowWidth();
    this->_height = window.getWindowHeight();
}

void menu::MenuGenerator::generateMenu()
{
    raylib::Window &window = raylib::Window::getWindow();
    int width = window.getWindowWidth();
    int height = window.getWindowHeight();

    this->_menuPage = 0;
    this->_menuEntities.clear();
    this->_menuEntities.push_back(Presets::createImage("backgroundMenu", {0.0f, 0.0f, 0.0f}, {width, height, 0}, "../assets/backgroundGame.png"));
    this->_menuEntities.push_back(Presets::createImage("Logo", {static_cast<float>(width) / 4.0f, 75.0f, 0.0f}, {width / 2, height / 5, 0}, "../assets/GameName.png"));
    this->_menuEntities.push_back(Presets::createButton("Play", {static_cast<float>(width) / 3.0f, static_cast<float>(height) / 3.0f, 0.0f}, {width / 3, height / 12, 0}, this->_callbackPlay, "../assets/Play.png"));
    this->_menuEntities.push_back(Presets::createButton("Tuto", {static_cast<float>(width) / 3.0f, static_cast<float>(height) / 3.0f + static_cast<float>(height) / 9.0f, 0.0f}, {width / 3, height / 10, 0}, &callbackTuto, "../assets/Tutorial.png"));
    this->_menuEntities.push_back(Presets::createButton("Options", {static_cast<float>(width) / 3.0f, static_cast<float>(height) / 3.0f + static_cast<float>(height) / 9.0f * 2.0f, 0.0f}, {width / 3, height / 10, 0}, &callbackOptions, "../assets/Settings.png"));
    this->_menuEntities.push_back(Presets::createButton("Credits", {static_cast<float>(width) / 3.0f, static_cast<float>(height) / 3.0f + static_cast<float>(height) / 9.0f * 3.0f, 0.0f}, {width / 3, height / 10, 0}, &callbackCredits, "../assets/Credits.png"));
    this->_menuEntities.push_back(Presets::createButton("Quit", {static_cast<float>(width) / 3.0f, static_cast<float>(height) / 3.0f + static_cast<float>(height) / 9.0f * 4.0f, 0.0f}, {width / 3, height / 10, 0}, &callbackQuit, "../assets/Quit.png"));
}

void menu::MenuGenerator::generateTuto()
{
    raylib::Window &window = raylib::Window::getWindow();
    int width = window.getWindowWidth();
    int height = window.getWindowHeight();

    this->_menuPage = 1;
    this->_menuEntities.clear();
    this->_menuEntities.push_back(Presets::createImage("backgroundTuto0", {0.0f, 0.0f, 0.0f}, {width, height, 0}, "../assets/backgroundGame.png"));
    this->_menuEntities.push_back(Presets::createButton("Right", {static_cast<float>(width) - 75.0f - static_cast<float>(width / 12), static_cast<float>(height) - static_cast<float>(height) / 9.0f * 4.0f, static_cast<float>(height) / 22.0f}, {width / 12, height / 22, 0}, &callbackTuto1, "../assets/ArrowRight.png"));
    this->_menuEntities.push_back(Presets::createButton("Back To menu", {static_cast<float>(width) / 3.0f, static_cast<float>(height) / 3.0f + static_cast<float>(height) / 9.0f * 4.0f, 0.0f}, {width / 3, height / 10, 0}, &callbackMenu, "../assets/Back.png"));
}

void menu::MenuGenerator::generateTuto1()
{
    raylib::Window &window = raylib::Window::getWindow();
    int width = window.getWindowWidth();
    int height = window.getWindowHeight();

    this->_menuPage = 2;
    this->_menuEntities.clear();
    this->_menuEntities.push_back(Presets::createImage("backgroundTuto1", {0.0f, 0.0f, 0.0f}, {width, height, 0}, "../assets/backgroundGame.png"));
    this->_menuEntities.push_back(Presets::createButton("Left", {75.0f, static_cast<float>(height) - static_cast<float>(height) / 9.0f * 4.0f, static_cast<float>(height) / 22.0f}, {width / 12, height / 22, 0}, &callbackTuto, "../assets/ArrowLeft.png"));
    this->_menuEntities.push_back(Presets::createButton("Right", {static_cast<float>(width) - 75.0f - static_cast<float>(width / 12), static_cast<float>(height) - static_cast<float>(height) / 9.0f * 4.0f, static_cast<float>(height) / 22.0f}, {width / 12, height / 22, 0}, &callbackTuto2, "../assets/ArrowRight.png"));
    this->_menuEntities.push_back(Presets::createButton("Back To menu", {static_cast<float>(width) / 3.0f, static_cast<float>(height) / 3.0f + static_cast<float>(height) / 9.0f * 4.0f, 0.0f}, {width / 3, height / 10, 0}, &callbackMenu, "../assets/Back.png"));
}

void menu::MenuGenerator::generateTuto2()
{
    raylib::Window &window = raylib::Window::getWindow();
    int width = window.getWindowWidth();
    int height = window.getWindowHeight();

    this->_menuPage = 3;
    this->_menuEntities.clear();
    this->_menuEntities.push_back(Presets::createImage("BackgroundTuto2", {0.0f, 0.0f, 0.0f}, {width, height, 0}, "../assets/backgroundGame.png"));
    this->_menuEntities.push_back(Presets::createButton("Left", {75.0f, static_cast<float>(height) - static_cast<float>(height) / 9.0f * 4.0f, static_cast<float>(height) / 22.0f}, {width / 12, height / 22, 0}, &callbackTuto1, "../assets/ArrowLeft.png"));
    this->_menuEntities.push_back(Presets::createButton("Back To menu", {static_cast<float>(width) / 3.0f, static_cast<float>(height) / 3.0f + static_cast<float>(height) / 9.0f * 4.0f, 0.0f}, {width / 3, height / 10, 0}, &callbackMenu, "../assets/Back.png"));
}

void menu::MenuGenerator::generateOptions()
{
    raylib::Window &window = raylib::Window::getWindow();
    int width = window.getWindowWidth();
    int height = window.getWindowHeight();

    this->_menuPage = 4;
    this->_menuEntities.clear();
    this->_menuEntities.push_back(Presets::createImage("BackgroundOptions", {0.0f, 0.0f, 0.0f}, {width, height, 0}, "../assets/backgroundGame.png"));
    this->_menuEntities.push_back(Presets::createImage("VolumeImage", {static_cast<float>(width) / 4.0f, static_cast<float>(height) / 9.0f * 3.0f}, {width / 2, height / 12}, ""));
    this->_menuEntities.push_back(Presets::createButton("VolumeButton", {(static_cast<float>(width) / 4.0f) - (static_cast<float>(width) / 160.0f) + ((static_cast<float>(width) / 2.0f) * this->_volume), static_cast<float>(height) / 9 * 3}, {width / 80, height / 12}, &callbackSetVolume, ""));
    this->_menuEntities.push_back(Presets::createButton("2Players", {static_cast<float>(width) / 8.0f, static_cast<float>(height) / 9.0f * 5.0f}, {width / 5, height / 12}, &callbackTwoPlayers, ""));
    this->_menuEntities.push_back(Presets::createButton("3Players", {static_cast<float>(width) / 2.0f - static_cast<float>(width) / 10.0f, static_cast<float>(height) / 9.0f * 5.0f}, {width / 5, height / 12}, &callbackThreePlayers, ""));
    this->_menuEntities.push_back(Presets::createButton("4Players", {static_cast<float>(width) - (static_cast<float>(width) / 8.0f + static_cast<float>(width) / 5.0f), static_cast<float>(height) / 9.0f * 5.0f}, {width / 5, height / 12}, &callbackFourPlayers, ""));
    this->_menuEntities.push_back(Presets::createButton("Back To menu", {static_cast<float>(width) / 3.0f, static_cast<float>(height) / 3.0f + static_cast<float>(height) / 9.0f * 4.0f, 0.0f}, {width / 3, height / 10, 0}, &callbackMenu, "../assets/Back.png"));
}

void menu::MenuGenerator::generateCredits()
{
    raylib::Window &window = raylib::Window::getWindow();
    int width = window.getWindowWidth();
    int height = window.getWindowHeight();

    this->_menuPage = 5;
    this->_menuEntities.push_back(Presets::createImage("BackgroundCredits", {0.0f, 0.0f, 0.0f}, {width, height, 0}, "../assets/backgroundGame.png"));
    // Faire le défilement des pngs
}

void menu::MenuGenerator::generateKeysInputSelection()
{
    raylib::Window &window = raylib::Window::getWindow();
    int width = window.getWindowWidth();
    int height = window.getWindowHeight();

    this->_menuPage = 6;
    this->_menuEntities.clear();
    this->_menuEntities.push_back(Presets::createImage("BackgroundKeyInputs", {0.0f, 0.0f, 0.0f}, {width, height, 0}, ""));
    // this->_menuEntities.push_back(Presets::createButton("Player1Up", {}, {}, &callbackSetKeyInput 1, "up"), ""));
    // this->_menuEntities.push_back(Presets::createButton("Player1Down", {}, {}, &callbackSetKeyInput 1, "down"), ""));
    // this->_menuEntities.push_back(Presets::createButton("Player1Left", {}, {}, &callbackSetKeyInput 1, "left"), ""));
    // this->_menuEntities.push_back(Presets::createButton("Player1Right", {}, {}, &callbackSetKeyInput 1, "right"), ""));
    // this->_menuEntities.push_back(Presets::createButton("Player1Bomb", {}, {}, &callbackSetKeyInput 1, "bomb"), ""));
    // this->_menuEntities.push_back(Presets::createButton("Player2Up", {}, {}, &callbackSetKeyInput 2, "up"), ""));
    // this->_menuEntities.push_back(Presets::createButton("Player2Down", {}, {}, &callbackSetKeyInput 2, "down"), ""));
    // this->_menuEntities.push_back(Presets::createButton("Player2Left", {}, {}, &callbackSetKeyInput 2, "left"), ""));
    // this->_menuEntities.push_back(Presets::createButton("Player2Right", {}, {}, &callbackSetKeyInput 2, "right"), ""));
    // this->_menuEntities.push_back(Presets::createButton("Player2Bomb", {}, {}, &callbackSetKeyInput 2, "bomb"), ""));
    // this->_menuEntities.push_back(Presets::createButton("Player3Up", {}, {}, &callbackSetKeyInput 3, "up"), ""));
    // this->_menuEntities.push_back(Presets::createButton("Player3Down", {}, {}, &callbackSetKeyInput 3, "down"), ""));
    // this->_menuEntities.push_back(Presets::createButton("Player3Left", {}, {}, &callbackSetKeyInput 3, "left"), ""));
    // this->_menuEntities.push_back(Presets::createButton("Player3Right", {}, {}, &callbackSetKeyInput 3, "right"), ""));
    // this->_menuEntities.push_back(Presets::createButton("Player3Bomb", {}, {}, &callbackSetKeyInput 3, "bomb"), ""));
    // this->_menuEntities.push_back(Presets::createButton("Player4Up", {}, {}, &callbackSetKeyInput 4, "up"), ""));
    // this->_menuEntities.push_back(Presets::createButton("Player4Down", {}, {}, &callbackSetKeyInput 4, "down"), ""));
    // this->_menuEntities.push_back(Presets::createButton("Player4Left", {}, {}, &callbackSetKeyInput 4, "left"), ""));
    // this->_menuEntities.push_back(Presets::createButton("Player4Right", {}, {}, &callbackSetKeyInput 4, "right"), ""));
    // this->_menuEntities.push_back(Presets::createButton("Player4Bomb", {}, {}, &callbackSetKeyInput 4, "bomb"), ""));
    this->_menuEntities.push_back(Presets::createButton("Back To menu", {static_cast<float>(width) / 3.0f, static_cast<float>(height) / 3.0f + static_cast<float>(height) / 9.0f * 4.0f, 0.0f}, {width / 3, height / 10, 0}, &callbackMenu, "../assets/Back.png"));
}

void menu::MenuGenerator::setMenuEntities(std::vector<ECS::Entity> &entities)
{
    this->_menuEntities = entities;
}

void menu::MenuGenerator::setPlayerKeys(std::map<int, std::map<std::string, raylib::Keys>> playerKeys)
{
    this->_playerKeys = playerKeys;
}

void menu::MenuGenerator::setVolume()
{
    raylib::Window &window = raylib::Window::getWindow();
    ECS::Entity volume;

    if (::IsMouseButtonDown(MOUSE_BUTTON_LEFT) == false)
        return;
    for (auto it = this->_menuEntities.begin(); it != this->_menuEntities.end(); it++)
        if ((*it).getName() == "VolumeButton")
            volume = (*it);
    this->_volume = ((GetMousePosition().x) - (this->_width / 4) - (this->_width / 160)) / (this->_width / 2 - this->_width / 80) * 100;
    if (this->_volume < 0.0f)
        this->_volume = 0.0f;
    else if (this->_volume > 100.0f)
        this->_volume = 100.0f;
    else {
        window.setMasterVolume(static_cast<int>(this->_volume * 100 + .5) / 100.0f);
        this->updateEntities();
    }
}

void menu::MenuGenerator::setNbPlayers(int nbPlayers)
{
    this->_nbPlayers = nbPlayers;
}

void menu::MenuGenerator::setExit()
{
    this->_quit = true;
}

void menu::MenuGenerator::setKey(int playerIndex, std::string keyBinding)
{
    int newKey = 0;

    while (newKey == 0)
        newKey = GetKeyPressed();
    this->_playerKeys[playerIndex][keyBinding] = static_cast<raylib::Keys>(newKey);
}

menu::MenuGenerator &menu::MenuGenerator::getMenuGenerator()
{
    static menu::MenuGenerator tmp;
    return (tmp);
};