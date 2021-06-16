/*
** EPITECH PROJECT, 2021
** B-YEP-400-NAN-4-1-indiestudio-gildas.gonzalez
** File description:
** Controller
*/

#include "Controller.hpp"
#include "Presets.hpp"
#include "transform/Transform.hpp"
#include "vectors/ECSVector.hpp"

void ECS::Controller::moveEntity(ECS::Entity &entity)
{
    try {
    ECS::Moveable &m = entity.getComponent<ECS::Moveable>(MOVEABLE);
    raylib::Controls controls;
    ECS::Vector3<float> newVel;
    int i = 0;
    
    if (controls.isKeyDown(raylib::Keys::KEY_UP)) {
        newVel.Z = -0.275;
        i = 1;
    }
    if (controls.isKeyDown(raylib::Keys::KEY_DOWN)) {
        newVel.Z = 0.275;
        i = 1;
    }
    if (controls.isKeyDown(raylib::Keys::KEY_LEFT)) {
        newVel.X = -0.275;
        i = 1;
    }
    if (controls.isKeyDown(raylib::Keys::KEY_RIGHT)) {
        newVel.X = 0.275;
        i = 1;
    }
    if (i == 0)
        m.setVelocity({0, 0, 0});
    m.setVelocity(newVel);
    } catch (std::out_of_range &e) {
    }
}