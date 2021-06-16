/*
** EPITECH PROJECT, 2021
** B-YEP-400-NAN-4-1-indiestudio-gildas.gonzalez
** File description:
** Presets
*/

#include "Drawable3D.hpp"
#include "Drawable2D.hpp"
#include "ECSVector.hpp"
#include "Collectible.hpp"
#include "Transform.hpp"
#include "Attacker.hpp"
#include "Clickable.hpp"
#include "Moveable.hpp"
#include "Killable.hpp"
#include "Entity.hpp"
#include "Timer.hpp"
#include "enum.hpp"

#ifndef PRESETS_HPP_
#define PRESETS_HPP_

namespace Presets
{
    ECS::Entity createButton(std::string name, ECS::Vector3<float> position, void(callback)(), std::string spritePath);

    ECS::Entity createImage(std::string name, ECS::Vector3<float> position , std::string spritePath);

    ECS::Entity createWall(std::string name, ECS::Vector3<float> position);

    ECS::Entity createPlayer(std::string name, ECS::Vector3<float> position, std::map<std::string, raylib::Keys> keys);

    ECS::Entity createSoftWall(std::string name, ECS::Vector3<float> position);

    ECS::Entity createBomb(std::string name, ECS::Vector3<float> position, int damages, int range);

    ECS::Entity createBonus(std::string name, ECS::Vector3<float> position, ECS::BonusType bonusType);

};

#endif /* !PRESETS_HPP_ */
