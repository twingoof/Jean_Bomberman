/*
** EPITECH PROJECT, 2021
** B-YEP-400-NAN-4-1-indiestudio-gildas.gonzalez
** File description:
** Map
*/

#ifndef MAP_HPP_
#define MAP_HPP_

#include <string>
#include <vector>
#include "Entity.hpp"
#include "EntityManager.hpp"

class Map {
    public:
        Map(const int width, const int lenght);
        ~Map();

        EntityManager createGame();
        void addWall(EntityManager map, int name);

    protected:
    private:
        std::vector<std::string> _map;
};

#endif /* !MAP_HPP_ */
