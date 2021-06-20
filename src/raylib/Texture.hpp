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

/**
 * @namespace raylib
 */
namespace raylib {
    /**
     * @class Texture Texture.hpp "src/raylib/Texture.hpp"
     */
    class Texture: public ::Texture {
        public:
            /**
             * @fn Texture() = default
             * @brief Construct a new Texture object
             */
            Texture() = default;
            
            /**
             * @fn Texture(const ::Texture &old)
             * @brief Construct a new Texture object
             * 
             * @param old Texture
             */
            Texture(const ::Texture &old);

            /**
             * @fn Texture(const ::Image &image)
             * @brief Construct a new Texture object
             * 
             * @param image Image 
             */
            Texture(const ::Image &image);

            /**
             * @fn Texture(const ::Image &image, int layout)
             * @brief Construct a new Texture
             * 
             * @param image Image
             * @param layout Layout
             */
            Texture(const ::Image &image, int layout);

            /**
             * @fn Texture(const std::string &filePath)
             * @brief Construct a new Texture object
             * 
             * @param filePath 
             */
            Texture(const std::string &filePath);

            /**
             * @fn raylib::Texture &operator=(const raylib::Texture &rHand)
             * @brief Copy constructor
             * 
             * @param rHand Texture to copy
             * @return raylib::Texture& 
             */
            raylib::Texture &operator=(const raylib::Texture &rHand);

            /**
             * @fn ~Texture()
             * @brief Destroy the Texture object
             */
            ~Texture();


            /**
             * @fn void loadFromImage(const ::Image &image)
             * @brief Load from Image
             * 
             * @param image Image to load
             */
            void loadFromImage(const ::Image &image);

            /**
             * @fn void loadCubemap(const ::Image &image, int layout)
             * @brief Load Cubemap
             * 
             * @param image Image
             * @param layout Layout
             */
            void loadCubemap(const ::Image &image, int layout);

            /**
             * @fn void loadFromFile(const std::string &filePath)
             * @brief Load from file
             * 
             * @param filePath Path to the texture
             */
            void loadFromFile(const std::string &filePath);

            /**
             * @fn void unload(void)
             * @brief Unload texture
             */
            void unload(void);

            /**
             * @fn Texture &update(const void *pixels)
             * @brief Update texture
             * 
             * @param pixels New pixels
             * @return Texture& 
             */
            Texture &update(const void *pixels);

            /**
             * @fn ::Vector2 getSize(void) const
             * @brief Get the Size
             * 
             * @return ::Vector2 
             */
            ::Vector2 getSize(void) const;

            /**
             * @fn ::Image getData(void) const
             * @brief Get the Data
             * 
             * @return ::Image 
             */
            ::Image getData(void) const;

            /**
             * @fn void draw(void)
             * @brief Draw
             */
            void draw(void);

            /**
             * @fn void draw(int posX, int posY, ::Color tint = {255, 255, 255, 255})
             * @brief Draw
             * 
             * @param posX X position
             * @param posY Y position
             * @param tint Color
             */
            void draw(int posX, int posY, ::Color tint = {255, 255, 255, 255});

            /**
             * @fn void draw(::Vector2 position, ::Color tint = {255, 255, 255, 255})
             * @brief Draw
             * 
             * @param position Position
             * @param tint Color
             */
            void draw(::Vector2 position, ::Color tint = {255, 255, 255, 255});

            /**
             * @fn void draw(::Vector2 position, float rotation, float scale = 1.0, ::Color tint = {255, 255, 255, 255})
             * @brief Draw
             * 
             * @param position Position
             * @param rotation Rotation
             * @param scale Scale 
             * @param tint Color 
             */
            void draw(::Vector2 position, float rotation, float scale = 1.0, ::Color tint = {255, 255, 255, 255});

            /**
             * @fn void draw(::Rectangle sourceRec, ::Vector2 position, ::Color tint = {255, 255, 255, 255})
             * @brief Draw
             * 
             * @param sourceRec Rectangle to draw
             * @param position Position
             * @param tint Color
             */
            void draw(::Rectangle sourceRec, ::Vector2 position, ::Color tint = {255, 255, 255, 255});

            /**
             * @fn void draw(::Vector2 tiling, ::Vector2 offset, ::Rectangle quad, ::Color tint = {255, 255, 255, 255})
             * @brief Draw
             * 
             * @param tiling Tiling
             * @param offset Offset
             * @param quad Rectangle
             * @param tint Color
             */
            void draw(::Vector2 tiling, ::Vector2 offset, ::Rectangle quad, ::Color tint = {255, 255, 255, 255});

            /**
             * @fn void draw(::Vector3 position, float width, float height, float length, ::Color tint = {255, 255, 255, 255})
             * @brief Draw the texture
             * 
             * @param position Position
             * @param width Width
             * @param height Height
             * @param length Length
             * @param tint Color
             */
            void draw(::Vector3 position, float width, float height, float length, ::Color tint = {255, 255, 255, 255});

            void drawScaled(::Vector2 position, float rotation, float horizontlScale, float vertclScale, ::Color tint = {255, 255, 255, 255});

            /**
             * @fn void setMaterial(::Material &material, int type = MATERIAL_MAP_NORMAL)
             * @brief Set the Material
             * 
             * @param material New material
             * @param type Material type
             */
            void setMaterial(::Material &material, int type = MATERIAL_MAP_NORMAL);

        protected:

        private:
            /**
             * @fn void setTexture(const ::Texture &old)
             * @brief Set the Texture
             * 
             * @param old Texture to set
             */
            void setTexture(const ::Texture &old);

    };

    /**
     * @fn void drawTexture(raylib::Texture texture, int posX, int posY, ::Color color = WHITE)
     * @brief Draw the texture
     * 
     * @param texture Texture to draw
     * @param posX X postition
     * @param posY Y position
     * @param color Color of the texture
     */
    void drawTexture(raylib::Texture texture, int posX, int posY, ::Color color = WHITE);
};

#endif /* !TEXTURE_HPP_ */
