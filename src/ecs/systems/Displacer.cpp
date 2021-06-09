/*
** EPITECH PROJECT, 2021
** B-YEP-400-NAN-4-1-indiestudio-gildas.gonzalez
** File description:
** Displacer
*/

#include "Displacer.hpp"
#include "Moveable.hpp"
void ECS::Displacer::moveEntity(ECS::Entity &moveableEntity)
{
    ECS::Vector3 newPosition = moveableEntity.getPosition();
    ECS::Moveable m = moveableEntity.getComponent<ECS::Moveable>(MOVEABLE);
    newPosition.setX(newPosition.getX() + (m.getVelocity().getX()));
    newPosition.setY(newPosition.getY() + (m.getVelocity().getY()));
    newPosition.setZ(newPosition.getZ() + (m.getVelocity().getZ()));
    moveableEntity.setPosition(newPosition);
}

void ECS::Displacer::teleportEntity(ECS::Entity &moveableEntity, const ECS::Vector3 &telpVector)
{
    moveableEntity.setPosition(telpVector);
}
