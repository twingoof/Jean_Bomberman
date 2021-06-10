/*
** EPITECH PROJECT, 2021
** B-YEP-400-NAN-4-1-indiestudio-gildas.gonzalez
** File description:
** Displacer
*/

#include "Displacer.hpp"
#include "Moveable.hpp"
#include "transform/Transform.hpp"

void ECS::Displacer::moveEntity(std::vector<ECS::Entity> &entities)
{
    for (auto &fEntity : entities) {
        ECS::Vector3<float> newPosition;
        ECS::Moveable m;
        try {
            newPosition = fEntity.getComponent<ECS::Transform>(ECS::TRANSFORM).getPosition();
        } catch (std::out_of_range &e) {
            continue;
        }
        try {
            m = fEntity.getComponent<ECS::Moveable>(ECS::MOVEABLE);
        } catch (std::out_of_range &e) {
            continue;
        }
        newPosition.X = newPosition.X + m.getVelocity().X;
        newPosition.Y = newPosition.Y + m.getVelocity().Y;
        newPosition.Z = newPosition.Z + m.getVelocity().Z;
        fEntity.getComponent<ECS::Transform>(ECS::TRANSFORM).setPosition(newPosition);
    }
}

void ECS::Displacer::teleportEntity(ECS::Entity &moveableEntity, const ECS::Vector3<float> &telpVector)
{
    moveableEntity.getComponent<Transform>(TRANSFORM).setPosition(telpVector);
}
