/*
** EPITECH PROJECT, 2021
** B-YEP-400-NAN-4-1-indiestudio-gildas.gonzalez [WSL: Ubuntu-20.04]
** File description:
** Image
*/

#ifndef IMAGE_HPP_
#define IMAGE_HPP_

#include <string>
#include "raylib.h"

namespace raylib {
    class Image : public ::Image {
        public:
            Image() = default;
            Image(const ::Image &oldImage);
            Image &operator=(const ::Image &oldImage);
            ~Image() = default;

            ::Image imageCopy(::Image image);
            ::Image loadImage(const std::string &fileName);
            void unloadImage();
            bool exportImage(const std::string &fileName);
            void imageResize(int newWidth, int newHeight);
            ::Image genImageColor(int imgWidth, int imgHeight, ::Color color);

        private:
            void setImage(const ::Image &oldImage);
    };
};

#endif /* !IMAGE_HPP_ */
