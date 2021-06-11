/*
** EPITECH PROJECT, 2021
** B-YEP-400-NAN-4-1-indiestudio-gildas.gonzalez
** File description:
** Collision
*/

#include "Collision.hpp"

bool raylib::checkCollisionRecs(::Rectangle rec1, ::Rectangle rec2)
{
    return (::CheckCollisionRecs(rec1, rec2));
}

bool raylib::checkCollisionPointCircle(::Vector2 point, ::Vector2 circleCenter, float radius)
{
    return (::CheckCollisionPointCircle(point, circleCenter, radius));
}

bool raylib::checkCollisionPointRec(::Vector2 point, ::Rectangle recShape)
{
    return (::CheckCollisionPointRec(point, recShape));
}