/*
** EPITECH PROJECT, 2021
** B-YEP-400-NAN-4-1-indiestudio-gildas.gonzalez
** File description:
** Map
*/

#include "MapGenerator.hpp"
#include "raylib.h"

ECS::MapGenerator::MapGenerator(int width, int height, int nbPlayer)
{
    this->_nbPlayer = nbPlayer;
    if (width % 2 == 0)
        width++;
    else if (width < 5)
        width = 7;
    if (height % 2 == 0)
        height++;
    else if (height < 5)
        height = 7;
    dimensions = std::make_tuple(width, height);
    std::srand(static_cast<unsigned int>(std::time(nullptr)));
    this->generateMap();
}

ECS::MapGenerator::~MapGenerator()
{
}

void ECS::MapGenerator::insideMap2P(int x, int y, std::string &line)
{
    if (/*(*/x == 0/* || x == std::get<0>(dimensions) - 1) */&& /*(*/y == 0/* || y == std::get<1>(dimensions) - 1)*/)
        line += '1';
    else if (x == std::get<0>(dimensions) - 1 && y == std::get<1>(dimensions) - 1)
        line += '2';
    else if (x % 2 == 0 || y % 2 == 0) {
        if (this->isPlayerSpawn(x, y))
            line += ' ';
        else if (std::rand() % 10)
            line += 'D';
        else
            line += ' ';
    } else
        line += '#';
}

void ECS::MapGenerator::insideMap3P(int x, int y, std::string &line)
{
    if (x == 0 && y == 0)
        line += '1';
    else if (x == std::get<0>(dimensions) - 1 && y == 0)
        line += '2';
    else if (x == 0 && y == std::get<1>(dimensions) - 1)
        line += '3';
    else if (x % 2 == 0 || y % 2 == 0) {
        if (this->isPlayerSpawn(x, y))
            line += ' ';
        else if (std::rand() % 10)
            line += 'D';
        else
            line += ' ';
    } else
        line += '#';
}

void ECS::MapGenerator::insideMap4P(int x, int y, std::string &line)
{
    if (x == 0 && y == 0)
        line += '1';
    else if (x == std::get<0>(dimensions) - 1 && y == 0)
        line += '2';
    else if (x == 0 && y == std::get<1>(dimensions) - 1)
        line += '3';
    else if (x == std::get<0>(dimensions) - 1 && y == std::get<1>(dimensions) - 1)
        line += '4';
    else if (x % 2 == 0 || y % 2 == 0) {
        if (this->isPlayerSpawn(x, y))
            line += ' ';
        else if (std::rand() % 10)
            line += 'D';
        else
            line += ' ';
    } else
        line += '#';
}

bool ECS::MapGenerator::isPlayerSpawn(const int x, const int y)
{
    if ((x == 0 || x == 1 || x == std::get<0>(dimensions) - 1 || x == std::get<0>(dimensions) - 2))
        if ((y == 0 || y == 1 || y == std::get<1>(dimensions) - 1 || y == std::get<1>(dimensions) - 2))
            return (true);
    return (false);
}

void ECS::MapGenerator::addBorders(void)
{
    std::string line;

    for (int i = 0; i < std::get<0>(dimensions) + 2; i++)
        line += '#';
    _map.push_back(line);
    line.clear();
}

void ECS::MapGenerator::generateMap(void)
{
    std::string line;

    this->addBorders();
    for (int i = 0; i < std::get<1>(dimensions); i++) {
        line += '#';
        for (int j = 0; j < std::get<0>(dimensions); j++)
            switch (this->_nbPlayer) {
            case 2:
                this->insideMap2P(j, i, line);
                break;
            case 3:
                this->insideMap3P(j, i, line);
                break;
            case 4:
                this->insideMap4P(j, i, line);
                break;
            default:
                break;
            }
        line += '#';
        this->_map.push_back(line);
        line.clear();
    }
    this->addBorders();
}

std::vector<ECS::Entity> ECS::MapGenerator::generateMapEntities()
{
    std::map<std::string, raylib::Keys> fstControls{{"up", raylib::Keys::KEY_UP}, {"down", raylib::Keys::KEY_DOWN}, {"left", raylib::Keys::KEY_LEFT}, {"right", raylib::Keys::KEY_RIGHT}, {"bomb", raylib::Keys::KEY_RIGHT_CONTROL},};
    std::map<std::string, raylib::Keys> scndControls{{"up", raylib::Keys::KEY_W}, {"down", raylib::Keys::KEY_S}, {"left", raylib::Keys::KEY_Q}, {"right", raylib::Keys::KEY_D}, {"bomb", raylib::Keys::KEY_SPACE},};
    std::map<std::string, raylib::Keys> thrdControls{{"up", raylib::Keys::KEY_O}, {"down", raylib::Keys::KEY_L}, {"left", raylib::Keys::KEY_K}, {"right", raylib::Keys::KEY_M}, {"bomb", raylib::Keys::KEY_P},};
    std::map<std::string, raylib::Keys> fourControls{{"up", raylib::Keys::KEY_F1}, {"down", raylib::Keys::KEY_F2}, {"left", raylib::Keys::KEY_F3}, {"right", raylib::Keys::KEY_F4}, {"bomb", raylib::Keys::KEY_F5},};
    std::vector<ECS::Entity> mapEntities;
    std::vector<std::string>::iterator it;
    ECS::Entity e;
    float x = 0;
    float z = 0;

    z -= ((std::get<0>(dimensions)) / 2) * 3;
    for (it = _map.begin(); it != _map.end(); it++) {
        x -= ((std::get<1>(dimensions) + (2 * 2)) / 2) * 3;
        for (const char &c : (*it)) {
            if (c == ' ') {
                x += 3;
                continue;
            }
            if (c == 'D')
                e = (Presets::createSoftWall("wall" + std::to_string(x) + std::to_string(z), ECS::Vector3<float>(x, 0, z)));
            else if (c == '#')
                e = Presets::createWall("wall" + std::to_string(x) + std::to_string(z), ECS::Vector3<float>(x, 0, z));
            else if (c == '1')
                e = Presets::createPlayer("player1", ECS::Vector3<float>(x, 0, z), fstControls, {255, 0, 0, 255});
            else if (c == '2')
                e = Presets::createPlayer("player2", ECS::Vector3<float>(x, 0, z), scndControls, {255, 255, 0, 255});
            else if (c == '3')
                e = Presets::createPlayer("player3", ECS::Vector3<float>(x, 0, z), thrdControls, {0, 255, 0, 255});
            else if (c == '4')
                e = Presets::createPlayer("player4", ECS::Vector3<float>(x, 0, z), fourControls, {0, 0, 255, 255});
            mapEntities.push_back(e);
            x += 3;
        }
        x = 0;
        z += 3;
    }
    mapEntities.insert(mapEntities.begin(), Presets::createImage("background", {0., 0., 0.}, {1600, 900, 0}, "../assets/BackgroundGame.png"));
    return (mapEntities);
}