/*
** EPITECH PROJECT, 2021
** B-YEP-400-NAN-4-1-indiestudio-gildas.gonzalez [WSL: kali-linux]
** File description:
** Error
*/

#include "Error.hpp"

Error::Error(std::string message)
{
    this->_message = message;
}

Error::~Error()
{
}

const char *Error::what() const noexcept
{
    return (_message.c_str());
}

std::string Error::getMessage() const
{
    return (_message);
}