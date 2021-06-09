/*
** EPITECH PROJECT, 2021
** B-YEP-400-NAN-4-1-indiestudio-gildas.gonzalez [WSL: kali-linux]
** File description:
** Factory
*/

#include "Factory.hpp"
#include "Moveable.hpp"
#include "Attacker.hpp"
#include "Killable.hpp"
#include "Clickable.hpp"
#include "Drawable3D.hpp"
#include "Drawable2D.hpp"

void Presets::createWall(Entity &entity)
{
    Drawable3D d(RECT, entity.getSize());
    entity.addComponent<Drawable3D>(d, DRAWABLE3D);
}

void Presets::createPlayer(Entity &entity, unsigned int ammo, unsigned short damage, unsigned short life)
{
    Drawable3D d(CIRCLE, entity.getSize());
    Moveable m(entity.getPosition());
    Attacker a(ammo, damage);
    Killable k(life);

    entity.addComponent<Drawable3D>(d, DRAWABLE3D);
    entity.addComponent<Moveable>(m, MOVEABLE);
    entity.addComponent<Attacker>(a, ATTACKER);
    entity.addComponent<Killable>(k, KILLABLE);
}

void Presets::createButton(Entity &entity, void(callback)(), std::string spritePath)
{
    Clickable c(callback);
    Drawable2D d(spritePath, entity.getSize(), RECT);

    entity.addComponent<Clickable>(c, CLICKABLE);
    entity.addComponent<Drawable2D>(d, DRAWABLE2D);
}

void Presets::createImage(Entity &entity, std::string spritePath)
{
    Drawable2D d(spritePath, entity.getSize(), RECT);

    entity.addComponent<Drawable2D>(d, DRAWABLE2D);
}