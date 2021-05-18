/*
** EPITECH PROJECT, 2021
** B-YEP-400-NAN-4-1-indiestudio-gildas.gonzalez
** File description:
** Error
*/

/**
 * @file Error.hpp
 * @author gildas.gonzalez@epitech.eu; pierrick.prost@epitech.eu; pierrick.prost@epitech.eu; valentin.bouchet@epitech.eu; mathis.ragot@epitech.eu
 * @brief File that contain the main class for throwing errors
 * @version 0.1
 * @date 2021-05-17
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include <iostream>
#include <exception>

#ifndef ERROR_HPP_
#define ERROR_HPP_

/**
 * @class Error Error.hpp "src/error/Error.hpp"
 */
class Error: public std::exception {
    public:
        /**
         * @fn Error(std::string message)
         * @brief Construct a new Error object
         * 
         * @param message Error message to throw
         */
        Error(std::string message);

        /**
         * @fn ~Error()
         * @brief Destroy the Error object
         */
        ~Error();

        /**
         * @fn const char *what() const noexcept
         * @brief Return the error message
         * 
         * @return const char* 
         */
        const char *what() const noexcept;

        /**
         * @fn std::string getMessage() const
         * @brief Get the error message. For test purpose only
         * 
         * @return std::string
         */
        std::string getMessage() const;

    private:
        std::string _message; /**< The error message*/
};

#endif /* !ERROR_HPP_ */