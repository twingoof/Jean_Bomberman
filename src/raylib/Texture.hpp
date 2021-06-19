/*
** EPITECH PROJECT, 2021
** B-YEP-400-NAN-4-1-indiestudio-gildas.gonzalez
** File description:
** Texture
*/

/**
 * @file Texture.hpp
 * @author gildas.gonzalez@epitech.eu; pierrick.prost@epitech.eu; pierrick.prost@epitech.eu; valentin.bouchet@epitech.eu; mathis.ragot@epitech.eu
 * @brief File that contain the Texture class
 * @version 0.1
 * @date 2021-06-18
 * 
 * @copyright Copyright (c) 2021
 * 
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
            explicit Texture(const ::Texture &old);
            Texture(const ::Image &image);
            Texture(const ::Image &image, int layout);
            Texture(const std::string &filePath);

            raylib::Texture &operator=(const raylib::Texture &rHand);

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

            void drawScaled(::Texture texture, ::Vector2 position, float rotation, float horizontlScale, float vertclScale, ::Color tint = {255, 255, 255, 255});

            void setMaterial(::Material &material, int type = MATERIAL_MAP_NORMAL);

        protected:

        private:
            void setTexture(const ::Texture &old);

    };

    void drawTexture(raylib::Texture texture, int posX, int posY, ::Color color = WHITE);
};

#endif /* !TEXTURE_HPP_ */
