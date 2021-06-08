/*
** EPITECH PROJECT, 2021
** B-YEP-400-NAN-4-1-indiestudio-gildas.gonzalez
** File description:
** IComponent
*/

/**
 * @file IComponent.hpp
 * @author gildas.gonzalez@epitech.eu; pierrick.prost@epitech.eu; pierrick.prost@epitech.eu; valentin.bouchet@epitech.eu; mathis.ragot@epitech.eu
 * @brief File that contain the interface for all components
 * @version 0.1
 * @date 2021-05-26
 *
 * @copyright Copyright (c) 2021
 *
 */
#ifndef ICOMPONENT_HPP_
#define ICOMPONENT_HPP_

namespace ECS {
    /**
     * @class IComponent IComponent.hpp "src/ecs/component/IComponent.hpp"
     */
    class IComponent {
        public:
            /**
             * @fn IComponent() = default
             * @brief Construct a new IComponent object
             */
            IComponent() = default;

            /**
             * @fn virtual ~IComponent() = default
             * @brief Destroy the IComponent object
             */
            virtual ~IComponent() = default;
    };
};

#endif /* !ICOMPONENT_HPP_ */