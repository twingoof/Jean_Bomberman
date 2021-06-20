/*
** EPITECH PROJECT, 2021
** B-YEP-400-NAN-4-1-indiestudio-gildas.gonzalez [WSL: Ubuntu-20.04]
** File description:
** Image
*/

/**
 * @file Image.hpp
 * @author gildas.gonzalez@epitech.eu; pierrick.prost@epitech.eu; pierrick.prost@epitech.eu; valentin.bouchet@epitech.eu; mathis.ragot@epitech.eu
 * @brief File that contain the Image class
 * @version 0.1
 * @date 2021-06-18
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#ifndef IMAGE_HPP_
#define IMAGE_HPP_

#include <string>
#include "raylib.h"

/**
 * @namespace raylib
 */
namespace raylib {
    /**
     * @class Image Image.hpp "src/raylib/Image.hpp"
     */
    class Image : public ::Image {
        public:
            /**
             * @fn Image() = default
             * @brief Construct a new Image object
             * 
             */
            Image() = default;

            /**
             * @fn Image(const ::Image &oldImage)
             * @brief Construct a new Image object
             * 
             * @param oldImage Image to copy
             */
            Image(const ::Image &oldImage);

            /**
             * @fn Image &operator=(const ::Image &oldImage)
             * @brief Copy a copy from an existing one
             * 
             * @param oldImage Image to copy
             * @return Image& Copied image
             */
            Image &operator=(const ::Image &oldImage);

            /**
             * @fn ~Image() = default
             * @brief Destroy the Image object
             * 
             */
            ~Image() = default;

            /**
             * @fn ::Image imageCopy(::Image image)
             * @brief Copy Image
             * 
             * @param image Image to copy
             * @return ::Image Copied image
             */
            ::Image imageCopy(::Image image);

            /**
             * @fn ::Image loadImage(const std::string &fileName)
             * @brief Load image from a file
             * 
             * @param fileName File path to the image
             * @return ::Image Created image
             */
            ::Image loadImage(const std::string &fileName);

            /**
             * @fn void unloadImage()
             * @brief Unload Image from VRAM
             * 
             */
            void unloadImage();

            /**
             * @fn bool exportImage(const std::string &fileName)
             * @brief Export Image to a new file
             * 
             * @param fileName File path to the export
             * @return true If export is successful
             * @return false Otherwise
             */
            bool exportImage(const std::string &fileName);

            /**
             * @fn void imageResize(int newWidth, int newHeight)
             * @brief Resize an image to the parameters sizes
             * 
             * @param newWidth Width to resize to
             * @param newHeight Height to resize to
             */
            void imageResize(int newWidth, int newHeight);

            /**
             * @fn ::Image genImageColor(int imgWidth, int imgHeight, ::Color color)
             * @brief Generates an image of color
             * 
             * @param imgWidth Image width
             * @param imgHeight Image height
             * @param color Image tint
             * @return ::Image Generated Image
             */
            ::Image genImageColor(int imgWidth, int imgHeight, ::Color color);

        private:
            /**
             * @fn void setImage(const ::Image &oldImage)
             * @brief Set the Image object
             * 
             * @param oldImage Image copied
             */
            void setImage(const ::Image &oldImage);
    };
};

#endif /* !IMAGE_HPP_ */
