/*
** EPITECH PROJECT, 2021
** B-YEP-400-NAN-4-1-indiestudio-gildas.gonzalez
** File description:
** Collider
*/

#include "Collider.hpp"
#include "Moveable.hpp"
#include "Window.hpp"

<<<<<<< HEAD
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
=======
void ECS::Collider::checkCollision(ECS::Entity &first, ECS::Entity &second)
{
    ::Rectangle firstR = {first.getPosition().getX(), first.getPosition().getY(), \
    first.getSize().getX(), first.getSize().getY()};
    ::Rectangle secondR = {second.getPosition().getX(), second.getPosition().getY(), \
    second.getSize().getX(), second.getSize().getY()};
    ECS::Moveable firstM = first.getComponent<ECS::Moveable>(MOVEABLE);
    ECS::Moveable secondM = second.getComponent<ECS::Moveable>(MOVEABLE);
    if (::CheckCollisionRecs(firstR, secondR)) {
        firstM.setVelocity(firstM.getVelocity() * -1);
        secondM.setVelocity(firstM.getVelocity() * -1);
    }
}

void ECS::Collider::checkWindowCollisiton(ECS::Entity &first)
{
    ::Rectangle firstR = {first.getPosition().getX(), first.getPosition().getY(), \
    first.getSize().getX(), first.getSize().getY()};
    raylib::Window &win = raylib::Window::getWindow();
    ECS::Moveable firstM = first.getComponent<ECS::Moveable>(MOVEABLE);
>>>>>>> 05938a43ba7df350ffc50db201868b91ce697826

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