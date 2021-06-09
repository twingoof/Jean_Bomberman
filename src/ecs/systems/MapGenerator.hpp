/*
** EPITECH PROJECT, 2021
** B-YEP-400-NAN-4-1-indiestudio-gildas.gonzalez
** File description:
** MapGenerator
*/

#ifndef MAPGENERATOR_HPP_
#define MAPGENERATOR_HPP_

#include <string>
#include <vector>
#include <ctime>
#include "Entity.hpp"
#include "EntityManager.hpp"

class MapGenerator {
    public:
        MapGenerator(const int width, const int lenght);
        ~MapGenerator();

        void generateMap(void);
        void insideMap(int x, int y, std::string &line);

    protected:
        bool isPlayerSpawn(const int x, const int y);

    private:
        std::vector<std::string> _map;
        std::tuple<int, int> dimensions;
};

#endif /* !MAP_HPP_ */
