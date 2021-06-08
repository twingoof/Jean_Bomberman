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
    int i = 0;


    if (controls.isKeyDown(raylib::Keys::KEY_UP)) {
        entity.getComponent<Moveable>(MOVEABLE).getVelocity().setY(-5);
        i = 1;
    }
    if (controls.isKeyDown(raylib::Keys::KEY_DOWN)) {
        entity.getComponent<Moveable>(MOVEABLE).getVelocity().setY(5);
        i = 1;
    }
    if (controls.isKeyDown(raylib::Keys::KEY_LEFT)) {
        entity.getComponent<Moveable>(MOVEABLE).getVelocity().setX(-5);
        i = 1;
    }
    if (controls.isKeyDown(raylib::Keys::KEY_RIGHT)) {
        entity.getComponent<Moveable>(MOVEABLE).getVelocity().setX(5);
        i = 1;
    }
    if (i == 0)
        entity.getComponent<Moveable>(MOVEABLE).setVelocity({0, 0, 0});
    

    if (myWindow.is3DMode()) {
        if (controls.isKeyPressed(raylib::Keys::KEY_SPACE)) {
            newPosition.setZ(newPosition.getZ() + 5);
            entity.setPosition(newPosition);
        }
    }
}