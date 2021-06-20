/*
** EPITECH PROJECT, 2021
** B-YEP-400-NAN-4-1-indiestudio-gildas.gonzalez
** File description:
** MapGenerator
*/

/**
 * @file MapGenerator.hpp
 * @author gildas.gonzalez@epitech.eu; pierrick.prost@epitech.eu; pierrick.prost@epitech.eu; valentin.bouchet@epitech.eu; mathis.ragot@epitech.eu
 * @brief File that contain the MapGenerator system
 * @version 0.1
 * @date 2021-06-20
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#ifndef MAPGENERATOR_HPP_
#define MAPGENERATOR_HPP_

#include "Drawable3D.hpp"
#include "ECSVector.hpp"
#include "Presets.hpp"
#include "Entity.hpp"
#include "Model.hpp"
#include <string>
#include <vector>
#include <ctime>

/**
 * @namespace ECS
 */
namespace ECS {
    /**
     * @class MapGenerator MapGenerator.hpp "src/ecs/system/MapGenerator.hpp"
     */
    class MapGenerator {
        public:
            /**
             * @fn MapGenerator(int width, int length, int nbPlayer)
             * @brief Construct a new Map Generator object
             * 
             * @param width Width
             * @param length Length
             * @param nbPlayer Nb player
             */
            MapGenerator(int width, int length, int nbPlayer);

            /**
             * @fn ~MapGenerator()
             * @brief Destroy the Map Generator object
             */
            ~MapGenerator();

            /**
             * @fn void generateMap(void)
             * @brief Generate the map
             */
            void generateMap(void);

            /**
             * @fn void insideMap2P(int x, int y, std::string &line)
             * @brief Generate 2P map
             * 
             * @param x X
             * @param y Y
             * @param line line 
             */
            void insideMap2P(int x, int y, std::string &line);

            /**
             * @fn void insideMap3P(int x, int y, std::string &line)
             * @brief Generate 3P map
             * 
             * @param x X
             * @param y Y
             * @param line line 
             */
            void insideMap3P(int x, int y, std::string &line);

            /**
             * @fn void insideMap4P(int x, int y, std::string &line)
             * @brief Generate 4P map
             * 
             * @param x X
             * @param y Y
             * @param line line 
             */
            void insideMap4P(int x, int y, std::string &line);

            /**
             * @fn void addBorders()
             * @brief Add borders
             */
            void addBorders();

            /**
             * @fn std::vector<ECS::Entity> generateMapEntities(void)
             * @brief Generate the map entity
             * 
             * @return std::vector<ECS::Entity> 
             */
            std::vector<ECS::Entity> generateMapEntities(void);

        protected:
            /**
             * @fn bool isPlayerSpawn(const int x, const int y)
             * @brief Check if the player is spawned
             * 
             * @param x X
             * @param y Y
             * @return true 
             * @return false 
             */
            bool isPlayerSpawn(const int x, const int y);

        private:
            std::vector<std::string> _map;
            std::tuple<int, int> dimensions;
            int _nbPlayer;
    };
}

#endif /* !MAP_HPP_ */
