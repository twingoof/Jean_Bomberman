/*
** EPITECH PROJECT, 2021
** B-YEP-400-NAN-4-1-indiestudio-gildas.gonzalez [WSL: kali-linux]
** File description:
** enum
*/

/**
 * @file Attack.hpp
 * @author gildas.gonzalez@epitech.eu; pierrick.prost@epitech.eu; pierrick.prost@epitech.eu; valentin.bouchet@epitech.eu; mathis.ragot@epitech.eu
 * @brief File that contain all the enum
 * @version 0.1
 * @date 2021-06-20
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#ifndef ENUM_HPP_
#define ENUM_HPP_

#ifndef MAP_SIZE_X
#define MAP_SIZE_X  19
#endif

#ifndef MAP_SIZE_Z
#define MAP_SIZE_Z  17
#endif

/**
 * @namespace ECS
 */
namespace ECS {
    /**
     * @enum ComponentType
     */
    enum ComponentType
    {
        DRAWABLE2D,
        DRAWABLE3D,
        CLICKABLE,
        MOVEABLE,
        KILLABLE,
        PHYSICS,
        COLLECTIBLE,
        ATTACKER,
        TRANSFORM,
        TIMER
    };

    /**
     * @enum BonusType
     */
    enum BonusType {
        MOVE,
        RANGE,
        RELOAD
    };

    /**
     * @enum DrawableType
     */
    enum DrawableType {
        CIRCLE,
        RECT,
        CUSTOM
    };
};

#endif /* !ENUM_HPP_ */
