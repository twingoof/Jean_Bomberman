/*
** EPITECH PROJECT, 2021
** B-YEP-400-NAN-4-1-indiestudio-gildas.gonzalez
** File description:
** Variable
*/

#include "Variable.hpp"

Variable::Variable(int variable)
{
    this->_variable = variable;
}

Variable::~Variable() = default;

void Variable::add(int nb)
{
    this->_variable += nb;
}

void Variable::sub(int nb)
{
    this->_variable -= nb;
}

void Variable::setValue(int newVariable)
{
    this->_variable = newVariable;
}

const int Variable::getValue() const
{
    return (this->_variable);
}