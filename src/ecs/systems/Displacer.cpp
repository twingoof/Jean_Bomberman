/*
** EPITECH PROJECT, 2021
** B-YEP-400-NAN-4-1-indiestudio-gildas.gonzalez
** File description:
** Displacer
*/

#include "Displacer.hpp"
#include "Moveable.hpp"
void Displacer::moveEntity(Entity &moveableEntity, const ECSVector3 &movVector)
{
    ECSVector3 newPosition = moveableEntity.getPosition();
    Moveable m = moveableEntity.getComponent<Moveable>(MOVEABLE);
    newPosition.setX(newPosition.getX() + m.getVelocity().getX());
    newPosition.setY(newPosition.getY() + m.getVelocity().getY());
    moveableEntity.setPosition(newPosition);
}

void Displacer::teleportEntity(Entity &moveableEntity, const ECSVector3 &telpVector)
{
    moveableEntity.setPosition(telpVector);
}
