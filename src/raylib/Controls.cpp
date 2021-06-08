/*
** EPITECH PROJECT, 2021
** B-YEP-400-NAN-4-1-indiestudio-gildas.gonzalez
** File description:
** Controls
*/

#include "Controls.hpp"

bool raylib::Controls::isKeyDown(int key)
{
    if (::IsKeyDown(key))
        return (true);
    return (false);
}

bool raylib::Controls::isKeyPressed(int key)
{
    if (::IsKeyPressed(key))
        return (true);
    return (false);
}

bool raylib::Controls::isKeyUp(int key)
{
    if (::IsKeyUp(key))
        return (true);
    return (false);
}

bool raylib::Controls::isKeyReleased(int key)
{
    if (::IsKeyReleased(key))
        return (true);
    return (false);
}