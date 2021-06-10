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
#include "Moveable.hpp"
#include "Drawable3D.hpp"

ECS::Entity Presets::createButton(std::string name, ECS::Vector3<float> position, void(callback)(), std::string spritePath)
{
    ECS::Entity entity(name);
    ECS::Vector3<int> size(1, 1, 1);
    ECS::Transform t(position, size);
    ECS::Clickable c(callback);
    ECS::Drawable2D d(spritePath, t.getSize(), ECS::RECT);

    entity.addComponent<ECS::Transform>(t, ECS::TRANSFORM);
    entity.addComponent<ECS::Clickable>(c, ECS::CLICKABLE);
    entity.addComponent<ECS::Drawable2D>(d, ECS::DRAWABLE2D);
    return (entity);
}

ECS::Entity Presets::createImage(std::string name, ECS::Vector3<float> position, std::string spritePath)
{
    ECS::Entity entity(name);
    ECS::Vector3<int> size(1, 1, 1);
    ECS::Transform t(position, size);
    ECS::Drawable2D d(spritePath, t.getSize(), ECS::RECT);

    entity.addComponent<ECS::Transform>(t, ECS::TRANSFORM);
    entity.addComponent<ECS::Drawable2D>(d, ECS::DRAWABLE2D);
    return (entity);
}

ECS::Entity Presets::createWall(std::string name, ECS::Vector3<float> position)
{
    ECS::Entity entity(name);
    ECS::Vector3<int> size(1, 1, 1);
    ECS::Transform t(position, size);
    ECS::Drawable3D d(ECS::RECT, t.getSize());

    entity.addComponent<ECS::Transform>(t, ECS::TRANSFORM);
    entity.addComponent<ECS::Drawable3D>(d, ECS::DRAWABLE3D);
    return (entity);
}

ECS::Entity Presets::createPlayer(std::string name, ECS::Vector3<float> position)
{
    ECS::Entity entity(name);
    ECS::Vector3<int> size(1, 1, 1);
    ECS::Transform t(position, size);
    ECS::Moveable m(t.getPosition());
    ECS::Drawable3D d(ECS::RECT, t.getSize());
    
    entity.addComponent<ECS::Transform>(t, ECS::TRANSFORM);
    entity.addComponent<ECS::Moveable>(m, ECS::MOVEABLE);
    entity.addComponent<ECS::Drawable3D>(d, ECS::DRAWABLE3D);
    return (entity);
}

ECS::Entity Presets::createSoftWall(std::string name, ECS::Vector3<float> position)
{
    ECS::Entity entity(name);
    ECS::Vector3<int> size(1, 1, 1);
    ECS::Transform t(position, size);
    ECS::Drawable3D d(ECS::RECT, t.getSize());

    entity.addComponent<ECS::Transform>(t, ECS::TRANSFORM);
    entity.addComponent<ECS::Drawable3D>(d, ECS::DRAWABLE3D);
    return (entity);
}