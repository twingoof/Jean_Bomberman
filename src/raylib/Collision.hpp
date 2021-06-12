/*
** EPITECH PROJECT, 2021
** B-YEP-400-NAN-4-1-indiestudio-gildas.gonzalez
** File description:
** Collision
*/

#ifndef COLLISION_HPP_
#define COLLISION_HPP_

#include "raylib.h"

namespace raylib {

    bool checkCollisionRecs(::Rectangle rec1, ::Rectangle rec2);

    bool checkCollisionPointCircle(::Vector2 point, ::Vector2 circleCenter, float radius);

    bool checkCollisionPointRec(::Vector2 point, ::Rectangle recShape);

    bool checkCollisionBoxes(::BoundingBox box1, ::BoundingBox box2);

};

#endif /* !COLLISION_HPP_ */
