/*
** EPITECH PROJECT, 2021
** B-YEP-400-NAN-4-1-indiestudio-gildas.gonzalez
** File description:
** Displacer
*/

#include "Displacer.hpp"

void Displacer::moveEntity(Moveable &moveableEntity, const ECSVector3 &movVector)
{
    moveableEntity.move(movVector);
}

void Displacer::teleportEntity(Moveable &moveableEntity, const ECSVector3 &telpVector)
{
    moveableEntity.place(telpVector);
}
