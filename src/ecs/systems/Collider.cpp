/*
** EPITECH PROJECT, 2021
** B-YEP-400-NAN-4-1-indiestudio-gildas.gonzalez
** File description:
** Collider
*/

#include "Collider.hpp"
#include "Moveable.hpp"
#include "Window.hpp"

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

    if (firstR.x <= 0 || firstR.x >= win.getWindowWidth())
        firstM.setVelocity({-firstM.getVelocity().getX(), firstM.getVelocity().getY()});
    if (firstR.y <= 0 || firstR.y >= win.getWindowHeight())
        firstM.setVelocity({firstM.getVelocity().getX(), -firstM.getVelocity().getY()});
}