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

    if (controls.isKeyDown(raylib::Keys::KEY_UP) || controls.isKeyDown
    (raylib::Keys::KEY_Z)) {
        newPosition.setY(newPosition.getY() - 5);
        entity.setPosition(newPosition);
    }
    if (controls.isKeyDown(raylib::Keys::KEY_DOWN) || controls.isKeyDown
    (raylib::Keys::KEY_S)) {
        newPosition.setY(newPosition.getY() + 5);
        entity.setPosition(newPosition);
    }
    if (controls.isKeyDown(raylib::Keys::KEY_LEFT) || controls.isKeyDown
        (raylib::Keys::KEY_Q)) {
        newPosition.setX(newPosition.getX() - 5);
        entity.setPosition(newPosition);
    }
    if (controls.isKeyDown(raylib::Keys::KEY_RIGHT) || controls.isKeyDown
        (raylib::Keys::KEY_D)) {
        newPosition.setX(newPosition.getX() + 5);
        entity.setPosition(newPosition);
    }
    if (myWindow.is3DMode()) {
        if (controls.isKeyPressed(raylib::Keys::KEY_SPACE)) {
            newPosition.setZ(newPosition.getZ() + 5);
            entity.setPosition(newPosition);
        }
    }
}