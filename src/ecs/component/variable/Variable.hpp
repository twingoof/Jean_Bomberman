/*
** EPITECH PROJECT, 2021
** B-YEP-400-NAN-4-1-indiestudio-gildas.gonzalez
** File description:
** Variable
*/

#include <iostream>

#ifndef VARIABLE_HPP_
#define VARIABLE_HPP_

#include "IComponent.hpp"

class Variable {
    public:
        Variable(int variable = 0);
        ~Variable();
        void add(int nb);
        void sub(int nb);
        void setValue(int newVariable);
        const int getValue() const;


    private:
        int _variable;
};

#endif /* !VARIABLE_HPP_ */
