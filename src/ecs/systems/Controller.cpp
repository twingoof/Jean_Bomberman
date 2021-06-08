/*
** EPITECH PROJECT, 2021
** B-YEP-400-NAN-4-1-indiestudio-gildas.gonzalez
** File description:
** Controller
*/

#include "Controller.hpp"

void Controller::moveEntity(Entity &entity)
{
    raylib::Window &myWindow = raylib::Window::getWindow();
    Moveable m = entity.getComponent<Moveable>(MOVEABLE);
    ECSVector3 newPosition = entity.getPosition();
    raylib::Controls controls;

    if (controls.isKeyDown(raylib::Keys::KEY_UP))
        entity.getComponent<Moveable>(MOVEABLE).setVelocity({0, -5, 0});
    else if (controls.isKeyDown(raylib::Keys::KEY_DOWN))
        entity.getComponent<Moveable>(MOVEABLE).setVelocity({0, 5, 0});
    else if (controls.isKeyDown(raylib::Keys::KEY_LEFT))
        entity.getComponent<Moveable>(MOVEABLE).setVelocity({-5, 0, 0});
    else if (controls.isKeyDown(raylib::Keys::KEY_RIGHT))
        entity.getComponent<Moveable>(MOVEABLE).setVelocity({5, 0, 0});
    else
        entity.getComponent<Moveable>(MOVEABLE).setVelocity({0, 0, 0});
    

    if (myWindow.is3DMode()) {
        if (controls.isKeyPressed(raylib::Keys::KEY_SPACE)) {
            newPosition.setZ(newPosition.getZ() + 5);
            entity.setPosition(newPosition);
        }
    }
}