/*
** EPITECH PROJECT, 2021
** B-YEP-400-NAN-4-1-indiestudio-gildas.gonzalez
** File description:
** Controller
*/

#include "Controller.hpp"
#include "transform/Transform.hpp"
#include "vectors/ECSVector.hpp"

void ECS::Controller::moveEntity(ECS::Entity &entity)
{
    raylib::Window &myWindow = raylib::Window::getWindow();
    ECS::Moveable &m = entity.getComponent<ECS::Moveable>(MOVEABLE);
    raylib::Controls controls;
    ECS::Vector3<float> newVel;
    int i = 0;

    if (controls.isKeyDown(raylib::Keys::KEY_UP)) {
        newVel.Z = -0.1;
        i = 1;
    }
    if (controls.isKeyDown(raylib::Keys::KEY_DOWN)) {
        newVel.Z = 0.1;
        i = 1;
    }
    if (controls.isKeyDown(raylib::Keys::KEY_LEFT)) {
        newVel.X = -0.1;
        i = 1;
    }
    if (controls.isKeyDown(raylib::Keys::KEY_RIGHT)) {
        newVel.X = 0.1;
        i = 1;
    }
    if (i == 0)
        m.setVelocity({0, 0, 0});
    if (myWindow.is3DMode())
        if (controls.isKeyPressed(raylib::Keys::KEY_SPACE))
            newVel.Y = 0.5;
    m.setVelocity(newVel);
}