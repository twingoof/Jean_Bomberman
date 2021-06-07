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

    if (controls.isKeyPressed(raylib::Keys::KEY_UP) || controls.isKeyPressed
    (raylib::Keys::KEY_W)) {
        newPosition.setY(newPosition.getY() + (m.getVelocity().getY() * -1));
        entity.setPosition(newPosition);
    }
    if (controls.isKeyPressed(raylib::Keys::KEY_DOWN) || controls.isKeyPressed
    (raylib::Keys::KEY_S)) {
        newPosition.setY(newPosition.getY() + (m.getVelocity().getY() * 1));
        entity.setPosition(newPosition);
    }
    if (controls.isKeyPressed(raylib::Keys::KEY_LEFT) || controls.isKeyPressed
    (raylib::Keys::KEY_A)) {
        newPosition.setX(newPosition.getX() + (m.getVelocity().getX() * -1));
        entity.setPosition(newPosition);
    }
    if (controls.isKeyPressed(raylib::Keys::KEY_RIGHT) || controls.isKeyPressed
    (raylib::Keys::KEY_D)) {
        newPosition.setX(newPosition.getX() + (m.getVelocity().getX() * 1));
        entity.setPosition(newPosition);
    }
    if (myWindow.is3DMode()) {
        if (controls.isKeyPressed(raylib::Keys::KEY_SPACE)) {
            newPosition.setZ(newPosition.getZ() + (m.getVelocity().getZ() * 1));
            entity.setPosition(newPosition);
        }
    }
}