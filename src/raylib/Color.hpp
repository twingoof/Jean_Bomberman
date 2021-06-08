/*
** EPITECH PROJECT, 2021
** B-YEP-400-NAN-4-1-indiestudio-gildas.gonzalez [WSL: Ubuntu-20.04]
** File description:
** Color
*/

#ifndef COLOR_HPP_
#define COLOR_HPP_

#include "Vector4.hpp"
#include "Vector3.hpp"
#include "raylib.h"

namespace raylib {
    class Color : public ::Color {
        public:
            Color();
            Color(const ::Color &oldColor);
            Color &operator=(const ::Color&oldColor);
            ~Color() = default;

            Color &fromHSV(float hue, float saturation, float value);
            Color &changeAlpha(float alpha);
            Color &fadeColor(float alpha);
            Vector4 normalize();
            Vector3 toHSV();
            int toInt();

        protected:

        private:
            void setColor(const ::Color &oldColor);

    };
};

#endif /* !COLOR_HPP_ */
