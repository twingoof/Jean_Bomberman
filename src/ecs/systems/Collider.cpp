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

int ECS::Collider::isEntitesColliding(ECS::Entity &fEntity, ECS::Entity &sEntity)
{
    ECS::Transform &fEntityT = fEntity.getComponent<ECS::Transform>(TRANSFORM);
    ECS::Transform &sEntityT = sEntity.getComponent<ECS::Transform>(TRANSFORM);

    try {
        ECS::Moveable &fEntityM = fEntity.getComponent<ECS::Moveable>(ECS::MOVEABLE);
        ECS::Collectible &collectible = sEntity.getComponent<ECS::Collectible>(ECS::COLLECTIBLE);
        ::BoundingBox fEntityR = {{fEntityT.getPosition().X - (static_cast<float>(fEntityT.getSize().X) / 2), fEntityT.getPosition().Y - (static_cast<float>(fEntityT.getSize().Y) / 2), fEntityT.getPosition().Z - (static_cast<float>(fEntityT.getSize().Z) / 2)}, {fEntityT.getPosition().X + (static_cast<float>(fEntityT.getSize().X) / 2), fEntityT.getPosition().Y + (static_cast<float>(fEntityT.getSize().Y) / 2), fEntityT.getPosition().Z + (static_cast<float>(fEntityT.getSize().Z) / 2)}};
        ::BoundingBox sEntityR = {{sEntityT.getPosition().X - (static_cast<float>(sEntityT.getSize().X) / 2), sEntityT.getPosition().Y - (static_cast<float>(sEntityT.getSize().Y) / 2), sEntityT.getPosition().Z - (static_cast<float>(sEntityT.getSize().Z) / 2)}, {sEntityT.getPosition().X + (static_cast<float>(sEntityT.getSize().X) / 2), sEntityT.getPosition().Y + (static_cast<float>(sEntityT.getSize().Y) / 2), sEntityT.getPosition().Z + (static_cast<float>(sEntityT.getSize().Z) / 2)}};

        if (raylib::checkCollisionBoxes(fEntityR, sEntityR)) {
            collectible.setBonus(fEntity);
            return (2);
        }
    } catch (const std::out_of_range &err) {}
    try {
        ECS::Moveable &fEntityM = fEntity.getComponent<Moveable>(MOVEABLE);
        ::BoundingBox fEntityR = {{fEntityT.getPosition().X - (static_cast<float>(fEntityT.getSize().X) / 2), fEntityT.getPosition().Y - (static_cast<float>(fEntityT.getSize().Y) / 2), fEntityT.getPosition().Z - (static_cast<float>(fEntityT.getSize().Z) / 2)}, {fEntityT.getPosition().X + (static_cast<float>(fEntityT.getSize().X) / 2), fEntityT.getPosition().Y + (static_cast<float>(fEntityT.getSize().Y) / 2), fEntityT.getPosition().Z + (static_cast<float>(fEntityT.getSize().Z) / 2)}};
        ::BoundingBox sEntityR = {{sEntityT.getPosition().X - (static_cast<float>(sEntityT.getSize().X) / 2), sEntityT.getPosition().Y - (static_cast<float>(sEntityT.getSize().Y) / 2), sEntityT.getPosition().Z - (static_cast<float>(sEntityT.getSize().Z) / 2)}, {sEntityT.getPosition().X + (static_cast<float>(sEntityT.getSize().X) / 2), sEntityT.getPosition().Y + (static_cast<float>(sEntityT.getSize().Y) / 2), sEntityT.getPosition().Z + (static_cast<float>(sEntityT.getSize().Z) / 2)}};

        if (raylib::checkCollisionBoxes(fEntityR, sEntityR))
            fEntityT.setPosition(fEntityT.getLastPosition());
    } catch (std::out_of_range &e) {
        return (1);
    }
    return (0);
}

void ECS::Collider::checkCollision(std::vector<ECS::Entity> &scene)
{
    std::string fCmp;
    std::string sCmp;

    for (auto it = scene.begin(); it != scene.end(); it++) {
        for (auto itt = scene.begin(); itt != scene.end(); itt++) {
            fCmp = (*it).getName();
            sCmp = (*itt).getName();
            if ((fCmp != sCmp) && ((fCmp.find("bomb-") == fCmp.npos) && (sCmp.find("bomb-") == sCmp.npos)))
                if (isEntitesColliding(*it, *itt) == 2) {
                    scene.erase(itt);
                    break;
                }
        }
    }
}