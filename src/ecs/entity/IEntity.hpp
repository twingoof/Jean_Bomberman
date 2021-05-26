/*
** EPITECH PROJECT, 2021
** B-YEP-400-NAN-4-1-indiestudio-gildas.gonzalez
** File description:
** IEntity
*/

/**
 * @file IEntity.hpp
 * @author gildas.gonzalez@epitech.eu; pierrick.prost@epitech.eu; pierrick.prost@epitech.eu; valentin.bouchet@epitech.eu; mathis.ragot@epitech.eu
 * @brief File that contain the interface for all Entity
 * @version 0.1
 * @date 2021-05-26
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#ifndef IENTITY_HPP_
#define IENTITY_HPP_

/**
 * @class IEntity IEntity.hpp "src/ecs/entity/IEntity.hpp"
 */
class IEntity {
    public:
        /**
         * @fn IEntity() = default
         * @brief Construct a new IEntity object
         */
        IEntity() = default;

        /**
         * @fn virtual ~IEntity() = delete
         * @brief Destroy the IEntity object
         */
        virtual ~IEntity() = delete;
};

#endif /* !IENTITY_HPP_ */