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
#include "Drawable3D.hpp"
#include "Vector3.hpp"
#include "Model.hpp"

class MapGenerator {
    public:
        MapGenerator(int width, int length);
        ~MapGenerator();

        void generateMap(void);
        void insideMap(int x, int y, std::string &line);

        void drawBorders(void);
        void drawMap(void);

    protected:
        bool isPlayerSpawn(const int x, const int y);

    private:
        std::vector<std::string> _map;
        std::tuple<int, int> dimensions;
};

#endif /* !MAP_HPP_ */
