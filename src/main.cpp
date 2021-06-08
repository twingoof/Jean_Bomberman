/*
** EPITECH PROJECT, 2021
** indie
** File description:
** TODO: add description
*/

#include "Collider.hpp"
#include "Moveable.hpp"
#include "enum.hpp"
#include "Drawable3D.hpp"
#include "Window.hpp"
#include "Camera.hpp"
#include "Displacer.hpp"
#include "Renderer.hpp"
#include "Controller.hpp"
#include "Text.hpp"
#include "Displacer.hpp"
#include "clock/Clock.hpp"
#include "Map.hpp"

int main()
{
    Map map(10, 20);
    EntityManager game = map.createGame();

    for (auto it : game.getEntities()) {
        std::cout << it.first << std::endl;
    }
    return 0;
}