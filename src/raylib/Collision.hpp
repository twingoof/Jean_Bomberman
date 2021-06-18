/*
** EPITECH PROJECT, 2021
** B-YEP-400-NAN-4-1-indiestudio-gildas.gonzalez
** File description:
** Collision
*/

/**
 * @file Collision.hpp
 * @author gildas.gonzalez@epitech.eu; pierrick.prost@epitech.eu; pierrick.prost@epitech.eu; valentin.bouchet@epitech.eu; mathis.ragot@epitech.eu
 * @brief File that contain the Collision detection functions
 * @version 0.1
 * @date 2021-06-18
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#ifndef COLLISION_HPP_
#define COLLISION_HPP_

#include "raylib.h"

namespace raylib {

    /**
     * @fn bool checkCollisionRecs(::Rectangle rec1, ::Rectangle rec2)
     * @brief Checks collisions between 2 rectangles
     * 
     * @param rec1 Rectangle structure informations
     * @param rec2 Rectangle structure informations
     * @return true If colliding
     * @return false Otherwise
     */
    bool checkCollisionRecs(::Rectangle rec1, ::Rectangle rec2);

    /**
     * @fn bool checkCollisionPointCircle(::Vector2 point, ::Vector2 circleCenter, float radius)
     * @brief Checks collision between a point and a circle
     * 
     * @param point Point position
     * @param circleCenter Circle center position
     * @param radius Circle radius
     * @return true If colliding
     * @return false Otherwise
     */
    bool checkCollisionPointCircle(::Vector2 point, ::Vector2 circleCenter, float radius);

    /**
     * @fn bool checkCollisionPointRec(::Vector2 point, ::Rectangle recShape)
     * @brief Checks collision between a point and a rectangle
     * 
     * @param point Point poisiton
     * @param recShape Rectangle structure to check
     * @return true If colliding
     * @return false Otherwise
     */
    bool checkCollisionPointRec(::Vector2 point, ::Rectangle recShape);

    /**
     * @fn bool checkCollisionBoxes(::BoundingBox box1, ::BoundingBox box2)
     * @brief Checks collision between 2 boxes
     * 
     * @param box1 Box structure to check
     * @param box2 Box structure to check
     * @return true If colliding
     * @return false Otherwise
     */
    bool checkCollisionBoxes(::BoundingBox box1, ::BoundingBox box2);

};

#endif /* !COLLISION_HPP_ */
