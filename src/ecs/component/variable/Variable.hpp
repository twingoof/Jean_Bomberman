/*
** EPITECH PROJECT, 2021
** B-YEP-400-NAN-4-1-indiestudio-gildas.gonzalez
** File description:
** Variable
*/

/**
 * @file Variable.hpp
 * @author gildas.gonzalez@epitech.eu; pierrick.prost@epitech.eu; pierrick.prost@epitech.eu; valentin.bouchet@epitech.eu; mathis.ragot@epitech.eu
 * @brief File that contain the Variable component
 * @version 0.1
 * @date 2021-06-02
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include <iostream>

#ifndef VARIABLE_HPP_
#define VARIABLE_HPP_

#include "IComponent.hpp"

/**
 * @class Variable Variable.hpp "src/ecs/component/variable/Variable.hpp"
 */
class Variable:public IComponent {
    public:
        /**
         * @fn Variable(int variable = 0)
         * @brief Construct a new Variable object
         * 
         * @param variable 
         */
        Variable(int variable = 0);

        /**
         * @fn ~Variable()
         * @brief Destroy the Variable object
         */
        ~Variable();
        
        /**
         * @fn void add(int nb)
         * @brief Add a number to the variable
         * 
         * @param nb Number to add
         */
        void add(int nb);

        /**
         * @fn void setValue(int newVariable)
         * @brief Sub a number to the variable
         * 
         * @param nb Number to sub
         */
        void sub(int nb);

        /**
         * @fn void setValue(int newVariable)
         * @brief Set the value of the variable
         * 
         * @param newVariable New value
         */
        void setValue(int newVariable);

        /**
         * @fn const int getValue() const
         * @brief Get the value of the variable
         * 
         * @return const int 
         */
        const int getValue() const;

    private:
        int _variable; /**< Variable*/
};

#endif /* !VARIABLE_HPP_ */
