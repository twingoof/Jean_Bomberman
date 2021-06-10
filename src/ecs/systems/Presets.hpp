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
    void createButton(ECS::Entity &entity, ECS::Vector3<int> size, ECS::Vector3<float> position, void(callback)(), std::string spritePath, ECS::DrawableType type);
    void createWall(ECS::Entity &entity, ECS::Vector3<float> position, ECS::Vector3<int> size, ECS::DrawableType type);
};

#endif /* !PRESETS_HPP_ */
