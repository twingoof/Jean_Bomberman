/*
** EPITECH PROJECT, 2021
** B-YEP-400-NAN-4-1-indiestudio-gildas.gonzalez
** File description:
** Cube
*/

/**
 * @file Cube.hpp
 * @author gildas.gonzalez@epitech.eu; pierrick.prost@epitech.eu; pierrick.prost@epitech.eu; valentin.bouchet@epitech.eu; mathis.ragot@epitech.eu
 * @brief File that contain the Cube draw functions
 * @version 0.1
 * @date 2021-06-18
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#ifndef CUBE_HPP_
#define CUBE_HPP_

#include "raylib.h"

#include "ECSVector.hpp"
#include "Texture.hpp"

/**
 * @namespace raylib
 */
namespace raylib {

    /**
     * @fn void drawCube(::Vector3 position, float width, float height, float length, ::Color tint = {255, 255, 255, 255});
     * @brief Draws a cube with parameters
     * 
     * @param position Cube position
     * @param width Cube width
     * @param height Cube height
     * @param length Cube length
     * @param tint Cube tint
     */
    void drawCube(::Vector3 position, float width, float height, float length, ::Color tint = {255, 255, 255, 255});

    /**
     * @fn void drawCubeV(::Vector3 position, ::Vector3 size, ::Color tint = {255, 255, 255, 255})
     * @brief Draws a cube with parameters
     * 
     * @param position Cube position
     * @param size Vector3 containing cube width, height and length
     * @param tint Cube tint to draw
     */
    void drawCubeV(::Vector3 position, ::Vector3 size, ::Color tint = {255, 255, 255, 255});

    /**
     * @fn void drawCubeWires(::Vector3 position, float width, float height, float length, ::Color tint = {255, 255, 255, 255})
     * @brief Draws cube wires with parameters
     * 
     * @param position Cube position
     * @param width Cube width
     * @param height Cube height
     * @param length Cube length
     * @param tint Cube tint
     */
    void drawCubeWires(::Vector3 position, float width, float height, float length, ::Color tint = {255, 255, 255, 255});

    /**
     * @fn void drawCubeWiresV(::Vector3 position, ::Vector3 size, ::Color tint = {255, 255, 255, 255})
     * @brief Draws cube wires with parameters
     * 
     * @param position Cube position
     * @param size Vector3 containing cube width, height and length
     * @param tint Cube tint to draw
     */
    void drawCubeWiresV(::Vector3 position, ::Vector3 size, ::Color tint = {255, 255, 255, 255});

    /**
     * @fn void drawTexturedCube(::Texture2D texture, ::Vector3 position, float width, float height, float length, ::Color tint = {255, 255, 255, 255})
     * @brief Draws a textured cube with parameters
     * 
     * @param texture Texture
     * @param position Cube position
     * @param width Cube width
     * @param height Cube height
     * @param length Cube length
     * @param tint Cube tint
     */
    void drawTexturedCube(raylib::Texture texture, ECS::Vector3<float> position, ECS::Vector3<int> size, ::Color tint = {255, 255, 255, 255});

};

#endif /* !CUBE_HPP_ */
