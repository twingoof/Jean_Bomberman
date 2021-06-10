/*
** EPITECH PROJECT, 2021
** B-YEP-400-NAN-4-1-indiestudio-gildas.gonzalez
** File description:
** Displacer
*/

#include "Displacer.hpp"
#include "Moveable.hpp"
#include "Transform.hpp"

void ECS::Displacer::moveEntity(ECS::Entity &moveableEntity)
{
    ECS::Vector3<float> newPosition = moveableEntity.getComponent<Transform>(TRANSFORM).getPosition();
    ECS::Moveable m = moveableEntity.getComponent<ECS::Moveable>(MOVEABLE);
    newPosition.X = newPosition.X + m.getVelocity().X;
    newPosition.Y = newPosition.Y + m.getVelocity().Y;
    newPosition.Z = newPosition.Z + m.getVelocity().Z;
    moveableEntity.getComponent<Transform>(TRANSFORM).setPosition(newPosition);
}

void ECS::Displacer::teleportEntity(ECS::Entity &moveableEntity, const ECS::Vector3<float> &telpVector)
{
    moveableEntity.getComponent<Transform>(TRANSFORM).setPosition(telpVector);
}
