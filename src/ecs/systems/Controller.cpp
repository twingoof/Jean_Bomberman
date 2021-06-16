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
        
        if (controls.isKeyDown(m.getKeys()["up"])) {
            newVel.Z = -0.275;
            i = 1;
        }
        if (controls.isKeyDown(m.getKeys()["down"])) {
            newVel.Z = 0.275;
            i = 1;
        }
        if (controls.isKeyDown(m.getKeys()["left"])) {
            newVel.X = -0.275;
            i = 1;
        }
        if (controls.isKeyDown(m.getKeys()["right"])) {
            newVel.X = 0.275;
            i = 1;
        }
        if (i == 0)
            m.setVelocity({0, 0, 0});
        m.setVelocity(newVel);
    } catch (std::out_of_range &e) {}
}