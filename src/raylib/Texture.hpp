/*
** EPITECH PROJECT, 2021
** B-YEP-400-NAN-4-1-indiestudio-gildas.gonzalez
** File description:
** Texture
*/

#ifndef TEXTURE_HPP_
#define TEXTURE_HPP_

extern "C" {
    #include "raylib.h"
}

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

            void LoadFromImage(const ::Image &image);

            void LoadCubemap(const ::Image &image, int layout);

            void LoadFromFile(const std::string &filePath);

            void Unload(void);

            Texture &Update(const void *pixels);

            ::Vector2 getSize(void) const;

            ::Image getData(void) const;

            void Draw(void);

            void Draw(int posX, int posY, ::Color tint = {255, 255, 255, 255});

            void Draw(::Vector2 position, ::Color tint = {255, 255, 255, 255});

            void Draw(::Vector2 position, float rotation, float scale = 1.0, ::Color tint = {255, 255, 255, 255});

            void Draw(::Rectangle sourceRec, ::Vector2 position, ::Color tint = {255, 255, 255, 255});

            void Draw(::Vector2 tiling, ::Vector2 offset, ::Rectangle quad, ::Color tint = {255, 255, 255, 255});

            void Draw(::Vector3 position, float width, float height, float length, ::Color tint = {255, 255, 255, 255});

            void setMaterial(::Material &material, int type = MATERIAL_MAP_NORMAL);

        protected:

        private:
            void setTexture(const ::Texture &old);

    };
};

#endif /* !TEXTURE_HPP_ */
