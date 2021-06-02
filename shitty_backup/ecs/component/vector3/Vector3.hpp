/*
** EPITECH PROJECT, 2021
** B-YEP-400-NAN-4-1-indiestudio-gildas.gonzalez
** File description:
** Vector3
*/

/**
 * @file Vector3.hpp
 * @author gildas.gonzalez@epitech.eu; pierrick.prost@epitech.eu; pierrick.prost@epitech.eu; valentin.bouchet@epitech.eu; mathis.ragot@epitech.eu
 * @brief File that contain the Vector3 component
 * @version 0.1
 * @date 2021-06-02
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include <iostream>
#include <array>

#ifndef VECTOR3_HPP_
#define VECTOR3_HPP_

#include "IComponent.hpp"

/**
 * @class Vector3 Vector3.hpp "src/ecs/component/vector3/Vector3.hpp"
 */
class Vector3:public IComponent {
    public:
        Vector3();

    private:
        int _x; /**< x value*/
        int _y; /**< y value*/
        int _z; /**< z value*/
};

#endif /* !VECTOR3_HPP_ */
