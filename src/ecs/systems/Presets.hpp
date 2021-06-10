/*
** EPITECH PROJECT, 2021
** B-YEP-400-NAN-4-1-indiestudio-gildas.gonzalez
** File description:
** Presets
*/

#include "ECSVector.hpp"
#include "Entity.hpp"
#include "enum.hpp"

#ifndef PRESETS_HPP_
#define PRESETS_HPP_


namespace Presets
{
    ECS::Entity &createButton(std::string name, ECS::Vector3<float> position, void(callback)(), std::string spritePath);
    ECS::Entity &createWall(std::string name, ECS::Vector3<float> position);
    ECS::Entity &createPlayer(std::string name, ECS::Vector3<float> position);
};

#endif /* !PRESETS_HPP_ */
