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
    if (x % 2 == 0 || y % 2 == 0) {
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

void MapGenerator::generateMap(void)
{
    std::string line;
    for (int i = 0; i < std::get<1>(dimensions); i++) {
        for (int j = 0; j < std::get<0>(dimensions); j++)
            this->insideMap(j, i, line);
        this->_map.push_back(line);
        line.clear();
    }
}

std::vector<std::reference_wrapper<ECS::Entity>> MapGenerator::generateMapEntities()
{
    std::vector<std::reference_wrapper<ECS::Entity>> mapEntities;
    std::vector<std::string>::iterator it;
    int x = 0;
    int z = 0;

    z -= std::get<1>(dimensions) / 2;
    for (it = _map.begin(); it != _map.end(); it++) {
        x -= (std::get<0>(dimensions) / 2);
        for (const char &c : (*it)) {
            if (c == 'P' || c == ' ') {
                x += 1;
                continue;
            }
            ECS::Entity e = (Presets::createWall("wall"+std::to_string(x)+std::to_string(z),ECS::Vector3<float>(x,0, z)));
            mapEntities.push_back(e);
            x += 1;
        }
        x = 0;
        z += 1;
    }
    return (mapEntities);
}