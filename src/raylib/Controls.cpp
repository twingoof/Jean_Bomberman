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

bool raylib::Controls::isMouseButtonPressed(int button)
{
    if (::IsMouseButtonPressed(button))
        return (true);
    return (false);
}

bool raylib::Controls::isMouseButtonReleased(int button)
{
    if (::IsMouseButtonReleased(button))
        return (true);
    return (false);
}

bool raylib::Controls::isMouseButtonUp(int button)
{
    if (::IsMouseButtonUp(button))
        return (true);
    return (false);
}

bool raylib::Controls::isMouseButtonDown(int button)
{
    if (::IsMouseButtonDown(button))
        return (true);
    return (false);
}

int raylib::Controls::getCharacterPressed(void)
{
    return (::GetCharPressed());
}