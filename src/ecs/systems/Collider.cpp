/*
** EPITECH PROJECT, 2021
** B-YEP-400-NAN-4-1-indiestudio-gildas.gonzalez
** File description:
** Collider
*/

#include "Collider.hpp"
#include "Moveable.hpp"
#include "Window.hpp"

void ECS::Collider::isWindowColliding(ECS::Entity &entity)
{
    raylib::Window &win = raylib::Window::getWindow();
    ECS::Moveable mEntity = entity.getComponent<ECS::Moveable>(MOVEABLE);
    ECS::Vector3 entitySize = entity.getSize();

    if (entitySize.getX() <= 0 || entitySize.getX() >= win.getWindowWidth())
        mEntity.setVelocity();
    if (entitySize.getY() <= 0 || entitySize.getY() >= win.getWindowHeight())
        mEntity.setVelocity();
}

void ECS::Collider::isEntitesColliding(ECS::Entity &fEntity, ECS::Entity &sEntity)
{
    ECS::Vector3 fEntityS = fEntity.getSize();
    ECS::Vector3 fEntityP = fEntity.getPosition();
    ECS::Vector3 sEntityS = sEntity.getSize();
    ECS::Vector3 sEntityP = sEntity.getPosition();
    ECS::Moveable fEntityM = fEntity.getComponent<ECS::Moveable>(MOVEABLE);

    Rectangle fEntityR = {fEntityP.getX(), fEntityP.getY(), fEntityS.getX(), fEntityS.getY()};
    Rectangle sEntityR = {sEntityP.getX(), sEntityP.getY(), sEntityS.getX(), sEntityS.getY()};

    if (CheckCollisionRecs(fEntityR, sEntityR))
        fEntityM.setVelocity();
}

void ECS::Collider::checkCollision(ECS::EntityManager &scene)
{
    for (auto &fEntity:scene.getEntities()) {
        isWindowColliding(*fEntity.second.get());
        for (auto &sEntity:scene.getEntities()) {
            if (fEntity.first != sEntity.first)
                isEntitesColliding(*fEntity.second.get(), *sEntity.second.get());
        }
    }
}