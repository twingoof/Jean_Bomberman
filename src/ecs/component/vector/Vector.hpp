/*
** EPITECH PROJECT, 2021
** B-YEP-400-NAN-4-1-indiestudio-gildas.gonzalez [WSL: kali-linux]
** File description:
** Vector
*/

/**
 * @file Vector.hpp
 * @author gildas.gonzalez@epitech.eu; pierrick.prost@epitech.eu; pierrick.prost@epitech.eu; valentin.bouchet@epitech.eu; mathis.ragot@epitech.eu
 * @brief File that contain the vector component
 * @version 0.1
 * @date 2021-05-27
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include <vector>
#ifndef VECTOR_HPP_
#define VECTOR_HPP_

#include "IComponent.hpp"

/**
 * @class Vector Vector.hpp "src/ecs/component/vector/Vector.hpp"
 */
class Vector {
    public:
        /**
         * @fn Vector(std::vector<int, int> value = {})
         * @brief Construct a new Vector object
         * 
         * @param value Default value of the vector
         */
        Vector(std::vector<int, int> value = {});

        /**
         * @fn ~Vector()
         * @brief Destroy the Vector object
         */
        ~Vector();

        /**
         * @fn void setValue(std::vector<int, int> newValue)
         * @brief Set the value of the Vector
         * 
         * @param newValue New value of the vector
         */
        void setValue(std::vector<int, int> newValue);

        /**
         * @fn const std::vector<int, int> getValue() const
         * @brief Get the value of the Vector
         * 
         * @return const std::vector<int, int> 
         */
        const std::vector<int, int> getValue() const;
    private:
        std::vector<int, int> _value; /**< The vector*/
};

#endif /* !VECTOR_HPP_ */