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

/**
 * @class Vector3 Vector3.hpp "src/ecs/component/vector3/Vector3.hpp"
 */
class Vector3 {
    public:
        /**
         * @fn Vector3(std::array<int, 3> value = {})
         * @brief Construct a new Vector 3 object
         * 
         * @param value Default array value 
         */
        Vector3(std::array<int, 3> value = {});

        /**
         * @fn ~Vector3()
         * @brief Destroy the Vector 3 object
         */
        ~Vector3();

        /**
         * @fn void setValue(std::array<int, 3> newValue)
         * @brief Set the value of the vector
         * 
         * @param newValue New value of the vector
         */
        void setValue(std::array<int, 3> newValue);

        /**
         * @fn const std::array<int, 3> getValue() const
         * @brief Get the value of the vector
         * 
         * @return const std::array<int, 3> 
         */
        const std::array<int, 3> getValue() const;

    private:
        std::array<int, 3> _value; /**< Value of the vector*/
};

#endif /* !VECTOR3_HPP_ */
