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
    ECS::Transform tEntity = entity.getComponent<ECS::Transform>(TRANSFORM);
    ECS::Moveable mEntity;
    float x = tEntity.getPosition().X;
    float y = tEntity.getPosition().Y;

    try {
        mEntity = entity.getComponent<ECS::Moveable>(MOVEABLE);
    } catch (std::out_of_range &e) {
        return;
    }
    if (x <= 0 || (x + tEntity.getSize().X) >= win.getWindowWidth())
        mEntity.setVelocity(mEntity.getVelocity() * -1);
    if (y <= 0 || (y + tEntity.getSize().Y) >= win.getWindowHeight())
        mEntity.setVelocity(mEntity.getVelocity() * -1);
}

void ECS::Collider::isEntitesColliding(ECS::Entity &fEntity, ECS::Entity &sEntity)
{
    ECS::Transform &fEntityT = fEntity.getComponent<ECS::Transform>(TRANSFORM);
    ECS::Transform &sEntityT = sEntity.getComponent<ECS::Transform>(TRANSFORM);

    try {
        ECS::Moveable &fEntityM = fEntity.getComponent<Moveable>(MOVEABLE);

        Rectangle fEntityR = {fEntityT.getPosition().X, fEntityT.getPosition().Z, fEntityT.getSize().X, fEntityT.getSize().Z};
        Rectangle sEntityR = {sEntityT.getPosition().X, sEntityT.getPosition().Z, sEntityT.getSize().X, sEntityT.getSize().Z};

        if (CheckCollisionRecs(fEntityR, sEntityR)) {
            if (fEntityM.getVelocity().X != 0)
                fEntityM.setVelocity(-fEntityM.getVelocity().X, 0, fEntityM.getVelocity().Z);
            if (fEntityM.getVelocity().Z != 0)
                fEntityM.setVelocity(fEntityM.getVelocity().X, 0, -fEntityM.getVelocity().Z);
        }
    } catch (std::out_of_range &e) {
        return;
    }
}

void ECS::Collider::checkCollision(std::vector<ECS::Entity> &scene)
{
    for (auto &fEntity:scene) {
        for (auto sEntity:scene)
            if (fEntity.getName() != sEntity.getName())
                isEntitesColliding(fEntity, sEntity);
    }
    // _physicBodies.clear();
    // for (auto &fEntity:scene) {
    //     PhysicsBody newBody;

    //     ECS::Transform &fEntityT = fEntity.getComponent<ECS::Transform>(ECS::TRANSFORM);
    //     ::Vector2 bodyPos = {fEntityT.getPosition().X, fEntityT.getPosition().Z};
    //     newBody = CreatePhysicsBodyRectangle(bodyPos, fEntityT.getSize().X, fEntityT.getSize().Z, 10);
    //     _physicBodies.push_back(newBody);
    // }
}