/*
** EPITECH PROJECT, 2021
** B-YEP-400-NAN-4-1-indiestudio-gildas.gonzalez
** File description:
** Presets
*/

#include "Presets.hpp"
#include "Entity.hpp"
#include "Transform.hpp"
#include "Clickable.hpp"
#include "Drawable2D.hpp"
#include "Drawable3D.hpp"

void createButton(ECS::Entity &entity, ECS::Vector3<float> position, ECS::Vector3<int> size, void(callback)(), std::string spritePath, ECS::DrawableType type)
{
    ECS::Transform t(position, size);
    entity.addComponent<ECS::Transform>(t, ECS::TRANSFORM);
    ECS::Clickable c(callback);
    ECS::Drawable2D d(spritePath, entity.getComponent<ECS::Transform>(ECS::TRANSFORM).getSize(), type);
    entity.addComponent<ECS::Clickable>(c, ECS::CLICKABLE);
    entity.addComponent<ECS::Drawable2D>(d, ECS::DRAWABLE2D);
}

void Presets::createWall(ECS::Entity &entity, ECS::Vector3<float> position, ECS::Vector3<int> size, ECS::DrawableType type)
{
    ECS::Transform t(position, size);
    entity.addComponent<ECS::Transform>(t, ECS::TRANSFORM);
    ECS::Drawable3D d(type, entity.getComponent<ECS::Transform>(ECS::TRANSFORM).getSize());
    entity.addComponent<ECS::Drawable3D>(d, ECS::DRAWABLE3D);
}