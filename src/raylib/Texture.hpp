/*
** EPITECH PROJECT, 2021
** B-YEP-400-NAN-4-1-indiestudio-gildas.gonzalez
** File description:
** Texture
*/

#ifndef TEXTURE_HPP_
#define TEXTURE_HPP_

#include "Vector3.hpp"
#include "Vector2.hpp"
#include "raylib.h"
#include <string>
#include <memory>

namespace raylib {
    class Texture: public ::Texture {
        public:
            Texture() = default;
            Texture(const ::Texture &old);
            Texture(const ::Image &image);
            Texture(const ::Image &image, int layout);
            Texture(const std::string &filePath);

            ~Texture();

            void loadFromImage(const ::Image &image);
            void loadCubemap(const ::Image &image, int layout);
            void loadFromFile(const std::string &filePath);
            void unload(void);
            Texture &update(const void *pixels);
            ::Vector2 getSize(void) const;
            ::Image getData(void) const;

            void draw(void);
            void draw(int posX, int posY, ::Color tint = {255, 255, 255, 255});
            void draw(::Vector2 position, ::Color tint = {255, 255, 255, 255});
            void draw(::Vector2 position, float rotation, float scale = 1.0, ::Color tint = {255, 255, 255, 255});
            void draw(::Rectangle sourceRec, ::Vector2 position, ::Color tint = {255, 255, 255, 255});
            void draw(::Vector2 tiling, ::Vector2 offset, ::Rectangle quad, ::Color tint = {255, 255, 255, 255});
            void draw(::Vector3 position, float width, float height, float length, ::Color tint = {255, 255, 255, 255});

            void setMaterial(::Material &material, int type = MATERIAL_MAP_NORMAL);

        protected:

        private:
            void setTexture(const ::Texture &old);

    };
};

#endif /* !TEXTURE_HPP_ */
