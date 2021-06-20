/*
** EPITECH PROJECT, 2021
** B-YEP-400-NAN-4-1-indiestudio-gildas.gonzalez [WSL: Ubuntu-20.04]
** File description:
** Color
*/

/**
 * @file Color.hpp
 * @author gildas.gonzalez@epitech.eu; pierrick.prost@epitech.eu; pierrick.prost@epitech.eu; valentin.bouchet@epitech.eu; mathis.ragot@epitech.eu
 * @brief File that contain the Color class
 * @version 0.1
 * @date 2021-06-18
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#ifndef COLOR_HPP_
#define COLOR_HPP_

#include "Vector4.hpp"
#include "Vector3.hpp"
#include "raylib.h"

namespace raylib {
    /**
     * @class Color Color.hpp "src/raylib/Color.hpp"
     */
    class Color : public ::Color {
        public:
            /**
             * @fn Color()
             * @brief Construct a new Color object
             */
            Color();

            /**
             * @fn Color(const ::Color &oldColor)
             * @brief Construct a new Color object
             * 
             * @param oldColor Color to copy
             */
            Color(const ::Color &oldColor);

            /**
             * @fn Color &operator=(const ::Color &oldColor)
             * @brief Copy an existing Color object
             * 
             * @param oldColor Color to copy
             */
            Color &operator=(const ::Color&oldColor);

            /**
             * @fn ~Color()
             * @brief Destruct a Color class
             */
            ~Color() = default;

            /**
             * @fn Color &fromHSV(float hue, float saturation, float value)
             * @brief Set a value from HSV type parameters
             * 
             * @param hue Hue value
             * @param saturation Saturation value
             * @param alpha Alpha value
             * @return Color& Changed color
             */
            Color &fromHSV(float hue, float saturation, float alpha);

            /**
             * @fn Color &changeAlpha(float alpha)
             * @brief Change Alpha Value of a color
             * 
             * @param alpha Alpha value to set
             * @return Color& Changed color
             */
            Color &changeAlpha(float alpha);

            /**
             * @fn Color &fadeColor(float alpha)
             * @brief Fade an existing color
             * 
             * @param alpha Alpha value to set to fade
             * @return Color& Changed color
             */
            Color &fadeColor(float alpha);

            /**
             * @fn Vector4 normalize()
             * @brief Converts Color into Vector4
             * 
             * @return Vector4 Color
             */
            Vector4 normalize();

            /**
             * @fn Vector3 toHSV()
             * @brief Converts Color to Vector3
             * 
             * @return Vector3 Color
             */
            Vector3 toHSV();

            /**
             * @fn int toInt()
             * @brief Convert color to Int
             * 
             * @return int Color Value
             */
            int toInt();

        protected:

        private:
            /**
             * @fn void setColor(const ::Color &oldColor)
             * @brief Set the color based on an existing one
             * 
             * @param oldColor Color to set to new color
             */
            void setColor(const ::Color &oldColor);

    };
};

#endif /* !COLOR_HPP_ */
