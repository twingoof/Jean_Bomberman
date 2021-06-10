/*
** EPITECH PROJECT, 2021
** B-YEP-400-NAN-4-1-indiestudio-gildas.gonzalez
** File description:
** Collider
*/

#include "Collider.hpp"
#include "Moveable.hpp"
#include "Window.hpp"
#include "Transform.hpp"
#include "Entity.hpp"

void ECS::Collider::isWindowColliding(ECS::Entity &entity)
{
    raylib::Window &win = raylib::Window::getWindow();
    ECS::Moveable mEntity = entity.getComponent<ECS::Moveable>(MOVEABLE);
    ECS::Transform tEntity = entity.getComponent<ECS::Transform>(TRANSFORM);
    float x = tEntity.getPosition().X;
    float y = tEntity.getPosition().Y;

    if (x <= 0 || (x + tEntity.getSize().X) >= win.getWindowWidth())
        mEntity.setVelocity(0.0f, 0.0f, 0.0f);
    if (y <= 0 || (y + tEntity.getSize().Y) >= win.getWindowHeight())
        mEntity.setVelocity(0.0f, 0.0f, 0.0f);
}

void ECS::Collider::isEntitesColliding(ECS::Entity &fEntity, ECS::Entity &sEntity)
{
    ECS::Transform fEntityT = fEntity.getComponent<ECS::Transform>(TRANSFORM);
    ECS::Transform sEntityT = sEntity.getComponent<ECS::Transform>(TRANSFORM);
    ECS::Moveable fEntityM = fEntity.getComponent<Moveable>(MOVEABLE);

    Rectangle fEntityR = {fEntityT.getPosition().X, fEntityT.getPosition().Y, fEntityT.getSize().X, fEntityT.getSize().Y};
    Rectangle sEntityR = {sEntityT.getPosition().X, sEntityT.getPosition().Y, sEntityT.getSize().X, sEntityT.getSize().Y};

    if (CheckCollisionRecs(fEntityR, sEntityR))
        fEntityM.setVelocity(fEntityM.getVelocity() * -1);
}

void ECS::Collider::checkCollision(std::vector<ECS::Entity> scene)
{
    for (auto &fEntity:scene) {
        isWindowColliding(fEntity);
        for (auto &sEntity:scene)
            if (fEntity.getName() != sEntity.getName())
                isEntitesColliding(fEntity, sEntity);
    }
}