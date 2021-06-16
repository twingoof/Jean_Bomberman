/*
** EPITECH PROJECT, 2021
** B-YEP-400-NAN-4-1-indiestudio-gildas.gonzalez
** File description:
** Map
*/

#include "MapGenerator.hpp"
#include "raylib.h"

MapGenerator::MapGenerator(int width, int height)
{
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

MapGenerator::~MapGenerator()
{}

void MapGenerator::insideMap(int x, int y, std::string &line)
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

bool MapGenerator::isPlayerSpawn(const int x, const int y)
{
    if ((x == 0 || x == 1 || x == std::get<0>(dimensions) - 1 || x == std::get<0>(dimensions) - 2))
        if ((y == 0 || y == 1 || y == std::get<1>(dimensions) - 1 || y == std::get<1>(dimensions) - 2))
            return (true);
    return (false);
}

void MapGenerator::addBorders(void)
{
    std::string line;

    for (int i = 0; i < std::get<0>(dimensions) + 2; i++)
        line += '#';
    _map.push_back(line);
    line.clear();
}

void MapGenerator::generateMap(void)
{
    std::string line;

    this->addBorders();
    for (int i = 0; i < std::get<1>(dimensions); i++) {
        line += '#';
        for (int j = 0; j < std::get<0>(dimensions); j++)
            this->insideMap(j, i, line);
        line += '#';
        this->_map.push_back(line);
        line.clear();
    }
    this->addBorders();
}

std::vector<ECS::Entity> MapGenerator::generateMapEntities()
{
    std::map<std::string, raylib::Keys> fstControls{{"up", raylib::Keys::KEY_UP}, {"down", raylib::Keys::KEY_DOWN}, {"left", raylib::Keys::KEY_LEFT}, {"right", raylib::Keys::KEY_RIGHT}, {"bomb", raylib::Keys::KEY_L},};
    std::map<std::string, raylib::Keys> sndControls{{"up", raylib::Keys::KEY_W}, {"down", raylib::Keys::KEY_S}, {"left", raylib::Keys::KEY_A}, {"right", raylib::Keys::KEY_D}, {"bomb", raylib::Keys::KEY_SPACE},};
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
                e = Presets::createPlayer("player1", ECS::Vector3<float>(x, 0, z), fstControls);
            else if (c == '2')
                e = Presets::createPlayer("player2", ECS::Vector3<float>(x, 0, z), sndControls);
            mapEntities.push_back(e);
            x += 3;
        }
        x = 0;
        z += 3;
    }
    return (mapEntities);
}