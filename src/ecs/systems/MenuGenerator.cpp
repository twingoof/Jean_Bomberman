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
    if (menu.getNbPlayers() != 2) {
        menu.setNbPlayers(2);
        menu.generateOptions();
    }
}

void callbackThreePlayers()
{
    menu::MenuGenerator &menu = menu::MenuGenerator::getMenuGenerator();
    if (menu.getNbPlayers() != 3) {
        menu.setNbPlayers(3);
        menu.generateOptions();
    }
}

void callbackFourPlayers()
{
    menu::MenuGenerator &menu = menu::MenuGenerator::getMenuGenerator();
    if (menu.getNbPlayers() != 4) {
        menu.setNbPlayers(4);
        menu.generateOptions();
    }
}

void callbackSetVolume()
{
    menu::MenuGenerator &menu = menu::MenuGenerator::getMenuGenerator();
    menu.setVolume();
}

void menu::MenuGenerator::initMenuGenerator(void(*callbackPlay)(), float volume, int nbPlayers)
{
    raylib::Window &window = raylib::Window::getWindow();

    this->_playerKeys[0] = {{"up", raylib::Keys::KEY_UP}, {"down", raylib::Keys::KEY_DOWN}, {"left", raylib::Keys::KEY_LEFT}, {"right", raylib::Keys::KEY_RIGHT}, {"bomb", raylib::Keys::KEY_RIGHT_CONTROL},};
    this->_playerKeys[1] = {{"up", raylib::Keys::KEY_W}, {"down", raylib::Keys::KEY_S}, {"left", raylib::Keys::KEY_A}, {"right", raylib::Keys::KEY_D}, {"bomb", raylib::Keys::KEY_SPACE},};
    this->_playerKeys[2] = {{"up", raylib::Keys::KEY_O}, {"down", raylib::Keys::KEY_L}, {"left", raylib::Keys::KEY_K}, {"right", raylib::Keys::KEY_M}, {"bomb", raylib::Keys::KEY_P},};
    this->_playerKeys[3] = {{"up", raylib::Keys::KEY_F1}, {"down", raylib::Keys::KEY_F2}, {"left", raylib::Keys::KEY_F3}, {"right", raylib::Keys::KEY_F4}, {"bomb", raylib::Keys::KEY_F5},};
    this->_width = window.getWindowWidth();
    this->_height = window.getWindowHeight();
    this->_callbackPlay = callbackPlay;
    this->_volume = volume;
    this->_nbPlayers = nbPlayers;
    ECS::Drawable2D sprite1("../assets/BackgroundGame.png", {window.getWindowHeight(), window.getWindowHeight()}, ECS::CUSTOM);
    this->_sprites.emplace("../assets/BackgroundGame.png", sprite1);

    ECS::Drawable2D sprite2("../assets/GameName.png", {window.getWindowHeight(), window.getWindowHeight()}, ECS::CUSTOM);
    this->_sprites.emplace("../assets/GameName.png", sprite2);

    ECS::Drawable2D sprite3("../assets/Play.png", {window.getWindowHeight(), window.getWindowHeight()}, ECS::CUSTOM);
    this->_sprites.emplace("../assets/Play.png", sprite3);
    ECS::Drawable2D sprite3c("../assets/PlayColored.png", {window.getWindowHeight(), window.getWindowHeight()}, ECS::CUSTOM);
    this->_sprites.emplace("../assets/PlayColored.png", sprite3c);
    // ECS::Drawable2D sprite3u("../assets/PlayColoredUnic.png", {window.getWindowHeight(), window.getWindowHeight()}, ECS::CUSTOM);
    // this->_sprites.emplace("../assets/PlayColoredUnic.png", sprite3u);

    ECS::Drawable2D sprite4("../assets/Settings.png", {window.getWindowHeight(), window.getWindowHeight()}, ECS::CUSTOM);
    this->_sprites.emplace("../assets/Settings.png", sprite4);
    ECS::Drawable2D sprite4c("../assets/SettingsColored.png", {window.getWindowHeight(), window.getWindowHeight()}, ECS::CUSTOM);
    this->_sprites.emplace("../assets/SettingsColored.png", sprite4c);
    // ECS::Drawable2D sprite4u("../assets/SettingsColoredUnic.png", {window.getWindowHeight(), window.getWindowHeight()}, ECS::CUSTOM);
    // this->_sprites.emplace("../assets/SettingsColoredUnic.png", sprite4u);

    ECS::Drawable2D sprite5("../assets/Credits.png", {window.getWindowHeight(), window.getWindowHeight()}, ECS::CUSTOM);
    this->_sprites.emplace("../assets/Credits.png", sprite5);
    ECS::Drawable2D sprite5c("../assets/CreditsColored.png", {window.getWindowHeight(), window.getWindowHeight()}, ECS::CUSTOM);
    this->_sprites.emplace("../assets/CreditsColored.png", sprite5c);
    // ECS::Drawable2D sprite5u("../assets/CreditsColoredUnic.png", {window.getWindowHeight(), window.getWindowHeight()}, ECS::CUSTOM);
    // this->_sprites.emplace("../assets/CreditsColoredUnic.png", sprite5u);

    ECS::Drawable2D sprite6("../assets/Quit.png", {window.getWindowHeight(), window.getWindowHeight()}, ECS::CUSTOM);
    this->_sprites.emplace("../assets/Quit.png", sprite6);
    ECS::Drawable2D sprite6c("../assets/QuitColored.png", {window.getWindowHeight(), window.getWindowHeight()}, ECS::CUSTOM);
    this->_sprites.emplace("../assets/QuitColored.png", sprite6c);
    // ECS::Drawable2D sprite6u("../assets/QuitColoredUnic.png", {window.getWindowHeight(), window.getWindowHeight()}, ECS::CUSTOM);
    // this->_sprites.emplace("../assets/QuitColoredUnic.png", sprite6u);

    ECS::Drawable2D sprite7("../assets/ArrowRight.png", {window.getWindowHeight(), window.getWindowHeight()}, ECS::CUSTOM);
    this->_sprites.emplace("../assets/ArrowRight.png", sprite7);
    ECS::Drawable2D sprite7c("../assets/ArrowRightColored.png", {window.getWindowHeight(), window.getWindowHeight()}, ECS::CUSTOM);
    this->_sprites.emplace("../assets/ArrowRightColored.png", sprite7c);
    // ECS::Drawable2D sprite7u("../assets/ArrowRightColoredUnic.png", {window.getWindowHeight(), window.getWindowHeight()}, ECS::CUSTOM);
    // this->_sprites.emplace("../assets/ArrowRightColoredUnic.png", sprite7u);

    ECS::Drawable2D sprite8("../assets/ArrowLeft.png", {window.getWindowHeight(), window.getWindowHeight()}, ECS::CUSTOM);
    this->_sprites.emplace("../assets/ArrowLeft.png", sprite8);
    ECS::Drawable2D sprite8c("../assets/ArrowLeftColored.png", {window.getWindowHeight(), window.getWindowHeight()}, ECS::CUSTOM);
    this->_sprites.emplace("../assets/ArrowLeftColored.png", sprite8c);
    // ECS::Drawable2D sprite8u("../assets/ArrowLeftColoredUnic.png", {window.getWindowHeight(), window.getWindowHeight()}, ECS::CUSTOM);
    // this->_sprites.emplace("../assets/ArrowLeftColoredUnic.png", sprite8u);

    ECS::Drawable2D sprite9("../assets/Back.png", {window.getWindowHeight(), window.getWindowHeight()}, ECS::CUSTOM);
    this->_sprites.emplace("../assets/Back.png", sprite9);
    ECS::Drawable2D sprite9c("../assets/BackColored.png", {window.getWindowHeight(), window.getWindowHeight()}, ECS::CUSTOM);
    this->_sprites.emplace("../assets/BackColored.png", sprite9c);
    // ECS::Drawable2D sprite9u("../assets/BackColoredUnic.png", {window.getWindowHeight(), window.getWindowHeight()}, ECS::CUSTOM);
    // this->_sprites.emplace("../assets/BackColoredUnic.png", sprite9u);

    ECS::Drawable2D sprite10("../assets/2Players.png", {window.getWindowHeight(), window.getWindowHeight()}, ECS::CUSTOM);
    this->_sprites.emplace("../assets/2Players.png", sprite10);
    ECS::Drawable2D sprite10c("../assets/2PlayersColored.png", {window.getWindowHeight(), window.getWindowHeight()}, ECS::CUSTOM);
    this->_sprites.emplace("../assets/2PlayersColored.png", sprite10c);
    ECS::Drawable2D sprite10u("../assets/2PlayersColoredUnic.png", {window.getWindowHeight(), window.getWindowHeight()}, ECS::CUSTOM);
    this->_sprites.emplace("../assets/2PlayersColoredUnic.png", sprite10u);

    ECS::Drawable2D sprite11("../assets/3Players.png", {window.getWindowHeight(), window.getWindowHeight()}, ECS::CUSTOM);
    this->_sprites.emplace("../assets/3Players.png", sprite11);
    ECS::Drawable2D sprite11c("../assets/3PlayersColored.png", {window.getWindowHeight(), window.getWindowHeight()}, ECS::CUSTOM);
    this->_sprites.emplace("../assets/3PlayersColored.png", sprite11c);
    ECS::Drawable2D sprite11u("../assets/3PlayersColoredUnic.png", {window.getWindowHeight(), window.getWindowHeight()}, ECS::CUSTOM);
    this->_sprites.emplace("../assets/3PlayersColoredUnic.png", sprite11u);

    ECS::Drawable2D sprite12("../assets/4Players.png", {window.getWindowHeight(), window.getWindowHeight()}, ECS::CUSTOM);
    this->_sprites.emplace("../assets/4Players.png", sprite12);
    ECS::Drawable2D sprite12c("../assets/4PlayersColored.png", {window.getWindowHeight(), window.getWindowHeight()}, ECS::CUSTOM);
    this->_sprites.emplace("../assets/4PlayersColored.png", sprite12c);
    ECS::Drawable2D sprite12u("../assets/4PlayersColoredUnic.png", {window.getWindowHeight(), window.getWindowHeight()}, ECS::CUSTOM);
    this->_sprites.emplace("../assets/4PlayersColoredUnic.png", sprite12u);

    ECS::Drawable2D sprite13("../assets/VolumeBarUnic.png", {window.getWindowHeight(), window.getWindowHeight()}, ECS::CUSTOM);
    this->_sprites.emplace("../assets/VolumeBarUnic.png", sprite13);
    // ECS::Drawable2D sprite13c("../assets/GameNameColored.png", {window.getWindowHeight(), window.getWindowHeight()}, ECS::CUSTOM);
    // this->_sprites.emplace("../assets/GameNameColored.png", sprite13c);
    // ECS::Drawable2D sprite13u("../assets/GameNameColoredUnic.png", {window.getWindowHeight(), window.getWindowHeight()}, ECS::CUSTOM);
    // this->_sprites.emplace("../assets/GameNameColoredUnic.png", sprite13u);

    ECS::Drawable2D sprite14("../assets/VolumeCursorUnic.png", {window.getWindowHeight(), window.getWindowHeight()}, ECS::CUSTOM);
    this->_sprites.emplace("../assets/VolumeCursorUnic.png", sprite14);
    // ECS::Drawable2D sprite14c("../assets/GameNameColored.png", {window.getWindowHeight(), window.getWindowHeight()}, ECS::CUSTOM);
    // this->_sprites.emplace("../assets/GameNameColored.png", sprite14c);
    // ECS::Drawable2D sprite14u("../assets/GameNameColoredUnic.png", {window.getWindowHeight(), window.getWindowHeight()}, ECS::CUSTOM);
    // this->_sprites.emplace("../assets/GameNameColoredUnic.png", sprite14u);

    ECS::Drawable2D sprite15("../assets/CreditPage.png", {window.getWindowHeight(), window.getWindowHeight()}, ECS::CUSTOM);
    this->_sprites.emplace("../assets/CreditPage.png", sprite15);
    // ECS::Drawable2D sprite15c("../assets/GameNameColored.png", {window.getWindowHeight(), window.getWindowHeight()}, ECS::CUSTOM);
    // this->_sprites.emplace("../assets/GameNameColored.png", sprite15c);
    // ECS::Drawable2D sprite15u("../assets/GameNameColoredUnic.png", {window.getWindowHeight(), window.getWindowHeight()}, ECS::CUSTOM);
    // this->_sprites.emplace("../assets/GameNameColoredUnic.png", sprite15u);

    // ECS::Drawable2D sprite16("../assets/GameName.png", {window.getWindowHeight(), window.getWindowHeight()}, ECS::CUSTOM);
    // this->_sprites.emplace("../assets/GameName.png", sprite16);
    // ECS::Drawable2D sprite16c("../assets/GameNameColored.png", {window.getWindowHeight(), window.getWindowHeight()}, ECS::CUSTOM);
    // this->_sprites.emplace("../assets/GameNameColored.png", sprite16c);
    // ECS::Drawable2D sprite16u("../assets/GameNameColoredUnic.png", {window.getWindowHeight(), window.getWindowHeight()}, ECS::CUSTOM);
    // this->_sprites.emplace("../assets/GameNameColoredUnic.png", sprite16u);

    // ECS::Drawable2D sprite17("../assets/GameName.png", {window.getWindowHeight(), window.getWindowHeight()}, ECS::CUSTOM);
    // this->_sprites.emplace("../assets/GameName.png", sprite17);
    // ECS::Drawable2D sprite17c("../assets/GameNameColored.png", {window.getWindowHeight(), window.getWindowHeight()}, ECS::CUSTOM);
    // this->_sprites.emplace("../assets/GameNameColored.png", sprite17c);
    // ECS::Drawable2D sprite17u("../assets/GameNameColoredUnic.png", {window.getWindowHeight(), window.getWindowHeight()}, ECS::CUSTOM);
    // this->_sprites.emplace("../assets/GameNameColoredUnic.png", sprite17u);

    // ECS::Drawable2D sprite18("../assets/GameName.png", {window.getWindowHeight(), window.getWindowHeight()}, ECS::CUSTOM);
    // this->_sprites.emplace("../assets/GameName.png", sprite18);
    // ECS::Drawable2D sprite18c("../assets/GameNameColored.png", {window.getWindowHeight(), window.getWindowHeight()}, ECS::CUSTOM);
    // this->_sprites.emplace("../assets/GameNameColored.png", sprite18c);
    // ECS::Drawable2D sprite18u("../assets/GameNameColoredUnic.png", {window.getWindowHeight(), window.getWindowHeight()}, ECS::CUSTOM);
    // this->_sprites.emplace("../assets/GameNameColoredUnic.png", sprite18u);

    // ECS::Drawable2D sprite19("../assets/GameName.png", {window.getWindowHeight(), window.getWindowHeight()}, ECS::CUSTOM);
    // this->_sprites.emplace("../assets/GameName.png", sprite19);
    // ECS::Drawable2D sprite19c("../assets/GameNameColored.png", {window.getWindowHeight(), window.getWindowHeight()}, ECS::CUSTOM);
    // this->_sprites.emplace("../assets/GameNameColored.png", sprite19c);
    // ECS::Drawable2D sprite19u("../assets/GameNameColoredUnic.png", {window.getWindowHeight(), window.getWindowHeight()}, ECS::CUSTOM);
    // this->_sprites.emplace("../assets/GameNameColoredUnic.png", sprite19u);

    ECS::Drawable2D sprite20("../assets/Tutorial.png", {window.getWindowHeight(), window.getWindowHeight()}, ECS::CUSTOM);
    this->_sprites.emplace("../assets/Tutorial.png", sprite20);
    ECS::Drawable2D sprite20c("../assets/TutorialColored.png", {window.getWindowHeight(), window.getWindowHeight()}, ECS::CUSTOM);
    this->_sprites.emplace("../assets/TutorialColored.png", sprite20c);
    // ECS::Drawable2D sprite20u("../assets/TutorialColoredUnic.png", {window.getWindowHeight(), window.getWindowHeight()}, ECS::CUSTOM);
    // this->_sprites.emplace("../assets/TutorialColoredUnic.png", sprite20u);

    this->generateMenu();
}

std::vector<ECS::Entity> &menu::MenuGenerator::getMenuEntities()
{
    return (this->_menuEntities);
}

std::map<std::string, ECS::Drawable2D> &menu::MenuGenerator::getMenuSprites()
{
    return (this->_sprites);
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
    this->_menuEntities.push_back(Presets::createImage("BackgroundMenu", {0.0f, 0.0f, 0.0f}, {width, height, 0}, this->_sprites["../assets/BackgroundGame.png"]));
    this->_menuEntities.push_back(Presets::createImage("Logo", {static_cast<float>(width) / 4.0f, 75.0f, 0.0f}, {width / 2, height / 5, 0}, this->_sprites["../assets/GameName.png"]));
    this->_menuEntities.push_back(Presets::createButton("Play", {static_cast<float>(width) / 3.0f, static_cast<float>(height) / 3.0f, 0.0f}, {width / 3, height / 12, 0}, this->_callbackPlay, this->_sprites["../assets/Play.png"]));
    this->_menuEntities.push_back(Presets::createButton("Tuto", {static_cast<float>(width) / 3.0f, static_cast<float>(height) / 3.0f + static_cast<float>(height) / 9.0f, 0.0f}, {width / 3, height / 10, 0}, &callbackTuto, this->_sprites["../assets/Tutorial.png"]));
    this->_menuEntities.push_back(Presets::createButton("Options", {static_cast<float>(width) / 3.0f, static_cast<float>(height) / 3.0f + static_cast<float>(height) / 9.0f * 2.0f, 0.0f}, {width / 3, height / 10, 0}, &callbackOptions, this->_sprites["../assets/Settings.png"]));
    this->_menuEntities.push_back(Presets::createButton("Credits", {static_cast<float>(width) / 3.0f, static_cast<float>(height) / 3.0f + static_cast<float>(height) / 9.0f * 3.0f, 0.0f}, {width / 3, height / 10, 0}, &callbackCredits, this->_sprites["../assets/Credits.png"]));
    this->_menuEntities.push_back(Presets::createButton("Quit", {static_cast<float>(width) / 3.0f, static_cast<float>(height) / 3.0f + static_cast<float>(height) / 9.0f * 4.0f, 0.0f}, {width / 3, height / 10, 0}, &callbackQuit, this->_sprites["../assets/Quit.png"]));
}

void menu::MenuGenerator::generateTuto()
{
    raylib::Window &window = raylib::Window::getWindow();
    int width = window.getWindowWidth();
    int height = window.getWindowHeight();

    this->_menuPage = 1;
    this->_menuEntities.clear();
    this->_menuEntities.push_back(Presets::createImage("BackgroundTuto0", {0.0f, 0.0f, 0.0f}, {width, height, 0}, this->_sprites["../assets/BackgroundGame.png"]));
    this->_menuEntities.push_back(Presets::createButton("Right", {static_cast<float>(width) - 75.0f - static_cast<float>(width / 12), static_cast<float>(height) - static_cast<float>(height) / 9.0f * 4.0f, static_cast<float>(height) / 22.0f}, {width / 12, height / 22, 0}, &callbackTuto1, this->_sprites["../assets/ArrowRight.png"]));
    this->_menuEntities.push_back(Presets::createButton("Back To menu", {static_cast<float>(width) / 3.0f, static_cast<float>(height) / 3.0f + static_cast<float>(height) / 9.0f * 4.0f, 0.0f}, {width / 3, height / 10, 0}, &callbackMenu, this->_sprites["../assets/Back.png"]));
}

void menu::MenuGenerator::generateTuto1()
{
    raylib::Window &window = raylib::Window::getWindow();
    int width = window.getWindowWidth();
    int height = window.getWindowHeight();

    this->_menuPage = 2;
    this->_menuEntities.clear();
    this->_menuEntities.push_back(Presets::createImage("backgroundTuto1", {0.0f, 0.0f, 0.0f}, {width, height, 0}, this->_sprites["../assets/BackgroundGame.png"]));
    this->_menuEntities.push_back(Presets::createButton("Left", {75.0f, static_cast<float>(height) - static_cast<float>(height) / 9.0f * 4.0f, static_cast<float>(height) / 22.0f}, {width / 12, height / 22, 0}, &callbackTuto, this->_sprites["../assets/ArrowLeft.png"]));
    this->_menuEntities.push_back(Presets::createButton("Right", {static_cast<float>(width) - 75.0f - static_cast<float>(width / 12), static_cast<float>(height) - static_cast<float>(height) / 9.0f * 4.0f, static_cast<float>(height) / 22.0f}, {width / 12, height / 22, 0}, &callbackTuto2, this->_sprites["../assets/ArrowRight.png"]));
    this->_menuEntities.push_back(Presets::createButton("Back To menu", {static_cast<float>(width) / 3.0f, static_cast<float>(height) / 3.0f + static_cast<float>(height) / 9.0f * 4.0f, 0.0f}, {width / 3, height / 10, 0}, &callbackMenu, this->_sprites["../assets/Back.png"]));
}

void menu::MenuGenerator::generateTuto2()
{
    raylib::Window &window = raylib::Window::getWindow();
    int width = window.getWindowWidth();
    int height = window.getWindowHeight();

    this->_menuPage = 3;
    this->_menuEntities.clear();
    this->_menuEntities.push_back(Presets::createImage("BackgroundTuto2", {0.0f, 0.0f, 0.0f}, {width, height, 0}, this->_sprites["../assets/BackgroundGame.png"]));
    this->_menuEntities.push_back(Presets::createButton("Left", {75.0f, static_cast<float>(height) - static_cast<float>(height) / 9.0f * 4.0f, static_cast<float>(height) / 22.0f}, {width / 12, height / 22, 0}, &callbackTuto1, this->_sprites["../assets/ArrowLeft.png"]));
    this->_menuEntities.push_back(Presets::createButton("Back To menu", {static_cast<float>(width) / 3.0f, static_cast<float>(height) / 3.0f + static_cast<float>(height) / 9.0f * 4.0f, 0.0f}, {width / 3, height / 10, 0}, &callbackMenu, this->_sprites["../assets/Back.png"]));
}

void menu::MenuGenerator::generateOptions()
{
    raylib::Window &window = raylib::Window::getWindow();
    int width = window.getWindowWidth();
    int height = window.getWindowHeight();

    this->_menuPage = 4;
    this->_menuEntities.clear();
    this->_menuEntities.push_back(Presets::createImage("BackgroundOptions", {0.0f, 0.0f, 0.0f}, {width, height, 0}, this->_sprites["../assets/BackgroundGame.png"]));
    this->_menuEntities.push_back(Presets::createImage("VolumeImage", {static_cast<float>(width) / 4.0f, static_cast<float>(height) / 9.0f * 3.0f}, {width / 2, height / 12}, "../assets/VolumeBarUnic.png"));
    this->_menuEntities.push_back(Presets::createButton("VolumeButton", {(static_cast<float>(width) / 4.0f) - (static_cast<float>(width) / 160.0f) + ((static_cast<float>(width) / 2.0f) * this->_volume), static_cast<float>(height) / 9 * 3}, {width / 80, height / 12}, &callbackSetVolume, this->_sprites["../assets/VolumeCursorUnic.png"]));
    if (this->_nbPlayers == 2) {
        this->_menuEntities.push_back(Presets::createButton("2Players", {static_cast<float>(width) / 8.0f, static_cast<float>(height) / 9.0f * 5.0f}, {width / 5, height / 12}, &callbackTwoPlayers, this->_sprites["../assets/2PlayersColoredUnic.png"]));
        this->_menuEntities.push_back(Presets::createButton("3Players", {static_cast<float>(width) / 2.0f - static_cast<float>(width) / 10.0f, static_cast<float>(height) / 9.0f * 5.0f}, {width / 5, height / 12}, &callbackThreePlayers, this->_sprites["../assets/3Players.png"]));
        this->_menuEntities.push_back(Presets::createButton("4Players", {static_cast<float>(width) - (static_cast<float>(width) / 8.0f + static_cast<float>(width) / 5.0f), static_cast<float>(height) / 9.0f * 5.0f}, {width / 5, height / 12}, &callbackFourPlayers, this->_sprites["../assets/4Players.png"]));
    } else if (this->_nbPlayers == 3) {
        this->_menuEntities.push_back(Presets::createButton("2Players", {static_cast<float>(width) / 8.0f, static_cast<float>(height) / 9.0f * 5.0f}, {width / 5, height / 12}, &callbackTwoPlayers, this->_sprites["../assets/2Players.png"]));
        this->_menuEntities.push_back(Presets::createButton("3Players", {static_cast<float>(width) / 2.0f - static_cast<float>(width) / 10.0f, static_cast<float>(height) / 9.0f * 5.0f}, {width / 5, height / 12}, &callbackThreePlayers, this->_sprites["../assets/3PlayersColoredUnic.png"]));
        this->_menuEntities.push_back(Presets::createButton("4Players", {static_cast<float>(width) - (static_cast<float>(width) / 8.0f + static_cast<float>(width) / 5.0f), static_cast<float>(height) / 9.0f * 5.0f}, {width / 5, height / 12}, &callbackFourPlayers, this->_sprites["../assets/4Players.png"]));
    } else {
        this->_menuEntities.push_back(Presets::createButton("2Players", {static_cast<float>(width) / 8.0f, static_cast<float>(height) / 9.0f * 5.0f}, {width / 5, height / 12}, &callbackTwoPlayers, this->_sprites["../assets/2Players.png"]));
        this->_menuEntities.push_back(Presets::createButton("3Players", {static_cast<float>(width) / 2.0f - static_cast<float>(width) / 10.0f, static_cast<float>(height) / 9.0f * 5.0f}, {width / 5, height / 12}, &callbackThreePlayers, this->_sprites["../assets/3Players.png"]));
        this->_menuEntities.push_back(Presets::createButton("4Players", {static_cast<float>(width) - (static_cast<float>(width) / 8.0f + static_cast<float>(width) / 5.0f), static_cast<float>(height) / 9.0f * 5.0f}, {width / 5, height / 12}, &callbackFourPlayers, this->_sprites["../assets/4PlayersColoredUnic.png"]));
    }
    this->_menuEntities.push_back(Presets::createButton("Back To menu", {static_cast<float>(width) / 3.0f, static_cast<float>(height) / 3.0f + static_cast<float>(height) / 9.0f * 4.0f, 0.0f}, {width / 3, height / 10, 0}, &callbackMenu, this->_sprites["../assets/Back.png"]));
}

void menu::MenuGenerator::generateCredits()
{
    raylib::Window &window = raylib::Window::getWindow();
    int width = window.getWindowWidth();
    int height = window.getWindowHeight();

    this->_menuPage = 5;
    this->_menuEntities.push_back(Presets::createImage("BackgroundCredits", {0.0f, 0.0f, 0.0f}, {width, height, 0}, this->_sprites["../assets/BackgroundGame.png"]));
    this->_menuEntities.push_back(Presets::createImage("../assets/Credits.png", {0.0f, 0.0f, 0.0f}, {width, height, 0}, this->_sprites["../assets/CreditPage.png"]));
    // Faire le défilement des pngs
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

    if (::IsMouseButtonPressed(MOUSE_BUTTON_LEFT) == false)
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