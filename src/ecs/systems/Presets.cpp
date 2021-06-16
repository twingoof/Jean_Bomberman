/*
** EPITECH PROJECT, 2021
** B-YEP-400-NAN-4-1-indiestudio-gildas.gonzalez
** File description:
** Presets
*/

#include "Presets.hpp"

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
    ECS::Vector3<int> size(3, 1, 3);
    ECS::Transform t(position, size);
    ECS::Drawable3D d(ECS::RECT, t.getSize());
    d.setColor({0, 0, 0, 255});

    entity.addComponent<ECS::Transform>(t, ECS::TRANSFORM);
    entity.addComponent<ECS::Drawable3D>(d, ECS::DRAWABLE3D);
    return (entity);
}

ECS::Entity Presets::createPlayer(std::string name, ECS::Vector3<float> position)
{
    ECS::Entity entity(name);
    ECS::Vector3<int> size(2, 1, 2);
    ECS::Attacker a(1, 100);
    ECS::Transform t(position, size);
    ECS::Moveable m(t.getPosition());
    ECS::Drawable3D d(ECS::RECT, t.getSize());
    d.setColor({0, 255, 0, 255});

    entity.addComponent<ECS::Attacker>(a, ECS::ATTACKER);
    entity.addComponent<ECS::Transform>(t, ECS::TRANSFORM);
    entity.addComponent<ECS::Moveable>(m, ECS::MOVEABLE);
    entity.addComponent<ECS::Drawable3D>(d, ECS::DRAWABLE3D);
    return (entity);
}

ECS::Entity Presets::createSoftWall(std::string name, ECS::Vector3<float> position)
{
    ECS::Entity entity(name);
    ECS::Vector3<int> size(3, 1, 3);
    ECS::Killable k(20);
    ECS::Transform t(position, size);
    ECS::Drawable3D d(ECS::RECT, t.getSize());
    d.setColor({255, 0, 0, 255});

    entity.addComponent<ECS::Transform>(t, ECS::TRANSFORM);
    entity.addComponent<ECS::Drawable3D>(d, ECS::DRAWABLE3D);
    entity.addComponent<ECS::Killable>(k, ECS::KILLABLE);
    return (entity);
}

ECS::Entity Presets::createBomb(std::string name, ECS::Vector3<float> position, int damages)
{
    ECS::Entity entity(name);
    ECS::Vector3<int> size(3, 1, 3);
    ECS::Attacker a(3, damages);
    ECS::Transform t(position, size);
    ECS::Timer timer;
    ECS::Drawable3D d(ECS::RECT, t.getSize());
    d.setColor({255, 255, 0, 255});

    timer.startClock();
    entity.addComponent<ECS::Attacker>(a, ECS::ATTACKER);
    entity.addComponent<ECS::Timer>(timer, ECS::TIMER);
    entity.addComponent<ECS::Transform>(t, ECS::TRANSFORM);
    entity.addComponent<ECS::Drawable3D>(d, ECS::DRAWABLE3D);
    std::cout << entity.getName() << std::endl;
    return (entity);
}