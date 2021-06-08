/*
** EPITECH PROJECT, 2021
** B-YEP-400-NAN-4-1-indiestudio-gildas.gonzalez
** File description:
** Collider
*/

#include "Collider.hpp"
#include "Moveable.hpp"
#include "Window.hpp"

void Collider::isWindowColliding(Entity &entity)
{
    raylib::Window &win = raylib::Window::getWindow();
    Moveable mEntity = entity.getComponent<Moveable>(MOVEABLE);
    ECSVector3 entitySize = entity.getSize();

    if (entitySize.getX() <= 0 || entitySize.getX() >= win.getWindowWidth())
        mEntity.setVelocity();
    if (entitySize.getY() <= 0 || entitySize.getY() >= win.getWindowHeight())
        mEntity.setVelocity();
}

void Collider::isEntitesColliding(Entity &fEntity, Entity &sEntity)
{
    ECSVector3 fEntityS = fEntity.getSize();
    ECSVector3 fEntityP = fEntity.getPosition();
    ECSVector3 sEntityS = sEntity.getSize();
    ECSVector3 sEntityP = sEntity.getPosition();
    Moveable fEntityM = fEntity.getComponent<Moveable>(MOVEABLE);

    Rectangle fEntityR = {fEntityP.getX(), fEntityP.getY(), fEntityS.getX(), fEntityS.getY()};
    Rectangle sEntityR = {sEntityP.getX(), sEntityP.getY(), sEntityS.getX(), sEntityS.getY()};

    if (CheckCollisionRecs(fEntityR, sEntityR))
        fEntityM.setVelocity();
}

void Collider::checkCollision(EntityManager &scene)
{
    for (auto &fEntity:scene.getEntities()) {
        isWindowColliding(*fEntity.second.get());
        for (auto &sEntity:scene.getEntities()) {
            if (fEntity.first != sEntity.first)
                isEntitesColliding(*fEntity.second.get(), *sEntity.second.get());
        }
    }
}