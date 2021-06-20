/*
** EPITECH PROJECT, 2021
** B-YEP-400-NAN-4-1-indiestudio-gildas.gonzalez
** File description:
** Font
*/

/**
 * @file Font.hpp
 * @author gildas.gonzalez@epitech.eu; pierrick.prost@epitech.eu; pierrick.prost@epitech.eu; valentin.bouchet@epitech.eu; mathis.ragot@epitech.eu
 * @brief File that contain the Font class
 * @version 0.1
 * @date 2021-06-18
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#ifndef FONT_HPP_
#define FONT_HPP_

#include "Vector2.hpp"
#include "raylib.h"
#include <string>

/**
 * @namespace raylib
 */
namespace raylib {
    /**
     * @class Font Font.hpp "src/raylib/Font.hpp"
     */
    class Font : public ::Font {
        public:
            /**
             * @fn Font()
             * @brief Construct a new Font object
             * 
             */
            Font();

            /**
             * @fn Font(const std::string &filePath)
             * @brief Construct a new Font object
             * 
             * @param filePath Path to font file
             */
            Font(const std::string &filePath);

            /**
             * @fn Font(const ::Font &font)
             * @brief Copy an existing Font
             * 
             * @param font Font to copy
             */
            Font(const ::Font &font);

            /**
             * @fn Font &operator=(const ::Font &font)
             * @brief Copy a font
             * 
             * @param font Font to copy
             * @return Font& Copied font
             */
            Font &operator=(const ::Font &font);

            /**
             * @fn ~Font()
             * @brief Destroy the Font object
             */
            ~Font();

            /**
             * @fn void unload()
             * @brief Unload created Font
             * 
             */
            void unload(void);

            /**
             * @fn ::Vector2 measureText(const std::string &text, float fontSize, float spacing)
             * @brief Mesture a text with the actual Font
             * 
             * @param text Text to measure
             * @param fontSize Font size
             * @param spacing Spacing between characters
             * @return ::Vector2 Dimensions in x and y of the measured text
             */
            ::Vector2 measureText(const std::string &text, float fontSize, float spacing);

            /**
             * @fn ::Image imageText(const std::string &text, float fontSize, float spacing, ::Color tint)
             * @brief Create an image with the text and the font
             * 
             * @param text Text to transform
             * @param fontSize Font size
             * @param spacing Spacing between characters
             * @param tint Texture tint
             * @return ::Image Image created based on the text
             */
            ::Image imageText(const std::string &text, float fontSize, float spacing, ::Color tint);

        protected:

        private:
            /**
             * @fn void setFont(const ::Font &old)
             * @brief Set the Font components
             * 
             * @param old Font to copy
             */
            void setFont(const ::Font &old);

    };
}

#endif /* !FONT_HPP_ */