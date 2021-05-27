/*
** EPITECH PROJECT, 2021
** B-YEP-400-NAN-4-1-indiestudio-gildas.gonzalez [WSL: kali-linux]
** File description:
** Text
*/

/**
 * @file Text.hpp
 * @author your name (you@domain.com)
 * @brief File that contain the Text component
 * @version 0.1
 * @date 2021-05-27
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include <iostream>

#ifndef TEXT_HPP_
#define TEXT_HPP_

/**
 * @class Text Text.hpp "src/ecs/text/Text.hpp"
 */
class Text {
    public:
        /**
         * @fn Text(std::string text = "")
         * @brief Construct a new Text
         * 
         * @param text Value of text
         */
        Text(std::string text = "");

        /**
         * @fn ~Text()
         * @brief Destroy the Text object
         */
        ~Text();

        /**
         * @fn void setText(std::string newText)
         * @brief Set the text
         * 
         * @param newText New text
         */
        void setText(std::string newText);

        /**
         * @fn const std::string getText() const
         * @brief Get the text
         * 
         * @return const std::string 
         */
        const std::string getText() const;

    private:
        std::string _text;
};

#endif /* !TEXT_HPP_ */
