/*
** EPITECH PROJECT, 2021
** B-YEP-400-NAN-4-1-indiestudio-gildas.gonzalez
** File description:
** Font
*/

#ifndef FONT_HPP_
#define FONT_HPP_

#include "Vector2.hpp"
#include "raylib.h"
#include <string>

namespace raylib {
    class Font : public ::Font {
        public:
            Font();
            Font(const std::string &filePath);
            Font(const ::Font &font);
            Font &operator=(const ::Font &font);
            ~Font();

            void unload(void);

            ::Vector2 measureText(const std::string &text, float fontSize, float spacing);
            ::Image imageText(const std::string &text, float fontSize, float spacing, ::Color tint);

        protected:

        private:
            void setFont(const ::Font &old);

    };
}

#endif /* !FONT_HPP_ */