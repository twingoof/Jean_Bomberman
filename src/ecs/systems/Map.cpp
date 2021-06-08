/*
** EPITECH PROJECT, 2021
** B-YEP-400-NAN-4-1-indiestudio-gildas.gonzalez
** File description:
** Map
*/

#include "Map.hpp"

Map::Map(const int width, const int lenght)
{
    std::string line;

    for (int i = 0; i < lenght; i++) {
        for (int j = 0; j < width; j++) {
            if (i == 0 || i == (lenght - 1) || j == 0 || j == (width - 1))
                line += '#';
            else
                line += ' ';
        }
        this->_map.push_back(line);
        line.clear();
    }
    for (auto i = this->_map.begin(); i != this->_map.end(); i++)
        std::cout << *i << std::endl;
}

Map::~Map()
{
}

EntityManager Map::createGame()
{
    EntityManager map;
    int name = 0;
    int width = 0;
    int length = 0;

    for (auto it = this->_map.begin(); it != this->_map.end(); it++) {
        for (std::string::size_type i = 0; i != this->_map.size(); i++) {
            if ((*it)[i] == '#') {
                map.createEntity(("wall" + std::to_string(name)), {width, 0, length}, {5, 5, 5});
                map.addDrawable3D(("wall" + std::to_string(name)), RECT);
                name++;
            }
            length++;
        }
        width++;
    }
    return (map);
}