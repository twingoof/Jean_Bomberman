/*
** EPITECH PROJECT, 2021
** B-YEP-400-NAN-4-1-indiestudio-gildas.gonzalez
** File description:
** Displacer
*/

#include "Displacer.hpp"
#include "Moveable.hpp"
#include "transform/Transform.hpp"

void ECS::Displacer::moveEntity
(std::vector<std::reference_wrapper<ECS::Entity>> entities)
{
    for (auto &fEntity : entities) {
        try {
            ECS::Vector3<float> newPosition = fEntity.get().getComponent<ECS::Transform>(ECS::TRANSFORM).getPosition();
            ECS::Moveable m = fEntity.get().getComponent<ECS::Moveable>(ECS::MOVEABLE);
            newPosition.X = newPosition.X + m.getVelocity().X;
            newPosition.Y = newPosition.Y + m.getVelocity().Y;
            newPosition.Z = newPosition.Z + m.getVelocity().Z;
            fEntity.get().getComponent<ECS::Transform>(TRANSFORM).setPosition
                (newPosition);
        } catch (std::out_of_range &e) {
            std::cerr << e.what() << std::endl;
        }
    }
}

void ECS::Displacer::teleportEntity(ECS::Entity &moveableEntity, const ECS::Vector3<float> &telpVector)
{
    moveableEntity.getComponent<Transform>(TRANSFORM).setPosition(telpVector);
}
