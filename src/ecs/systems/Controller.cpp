/*
** EPITECH PROJECT, 2021
** B-YEP-400-NAN-4-1-indiestudio-gildas.gonzalez
** File description:
** Controller
*/

#include "Controller.hpp"
#include "Transform.hpp"
#include "ECSVector.hpp"

void ECS::Controller::moveEntity(ECS::Entity &entity)
{
    raylib::Window &myWindow = raylib::Window::getWindow();
    ECS::Moveable m = entity.getComponent<ECS::Moveable>(MOVEABLE);
    ECS::Vector3<float> newPosition = entity.getComponent<ECS::Transform>(TRANSFORM).getPosition();
    raylib::Controls controls;
    int i = 0;


    if (controls.isKeyDown(raylib::Keys::KEY_UP)) {
        entity.getComponent<ECS::Moveable>(MOVEABLE).setVelocity(0, 0, -5);
        i = 1;
    }
    if (controls.isKeyDown(raylib::Keys::KEY_DOWN)) {
        entity.getComponent<ECS::Moveable>(MOVEABLE).setVelocity(0, 0, 5);
        i = 1;
    }
    if (controls.isKeyDown(raylib::Keys::KEY_LEFT)) {
        entity.getComponent<ECS::Moveable>(MOVEABLE).setVelocity(-5, 0, 0);
        i = 1;
    }
    if (controls.isKeyDown(raylib::Keys::KEY_RIGHT)) {
        entity.getComponent<ECS::Moveable>(MOVEABLE).setVelocity(5, 0, 0);
        i = 1;
    }
    if (i == 0)
        entity.getComponent<ECS::Moveable>(MOVEABLE).setVelocity({0, 0, 0});
    if (myWindow.is3DMode()) {
        if (controls.isKeyPressed(raylib::Keys::KEY_SPACE)) {
            newPosition.Z = newPosition.Z + 5;
            entity.getComponent<Transform>(TRANSFORM).setPosition(newPosition);
        }
    }
}