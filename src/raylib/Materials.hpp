/*
** EPITECH PROJECT, 2021
** B-YEP-400-NAN-4-1-indiestudio-gildas.gonzalez
** File description:
** Material
*/

/**
 * @file Material.hpp
 * @author gildas.gonzalez@epitech.eu; pierrick.prost@epitech.eu; pierrick.prost@epitech.eu; valentin.bouchet@epitech.eu; mathis.ragot@epitech.eu
 * @brief File that contain the Material class
 * @version 0.1
 * @date 2021-06-18
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#ifndef MATERIAL_HPP_
#define MATERIAL_HPP_

#include "raylib.h"
#include <vector>
#include <string>

/**
 * @namespace raylib
 */
namespace raylib {
    /**
     * @class Material Material.hpp "src/raylib/Material.hpp"
     */
    class Material: public ::Material {
        public:
            /**
             * @fn Material()
             * @brief Construct a new Material object
             * 
             */
            Material();

            /**
             * @fn Material(const ::Material &oldMat)
             * @brief Construct a new Material object
             * 
             * @param oldMat Material to copy
             */
            Material(const ::Material &oldMat);

            /**
             * @fn Material &operator=(const ::Material &oldMat)
             * @brief Creates a new Material from an existing one
             * 
             * @param oldMat Material to copy
             * @return Material& Copied Material
             */
            Material &operator=(const ::Material &oldMat);

            /**
             * @fn ~Material()
             * @brief Destroy the Material object
             */
            ~Material();

            /**
             * @fn void unloadMat()
             * @brief Unload Material from VRAM
             * 
             */
            void unloadMat();

            /**
             * @fn void loadDefault()
             * @brief Load default Material
             * 
             */
            void loadDefault();

            /**
             * @fn void setTexture(int mapType, const ::Texture &texture)
             * @brief Set Material Texture
             * 
             * @param mapType Type of mapping
             * @param texture Texture to set
             */
            void setTexture(int mapType, const ::Texture &texture);

        protected:

        private:
            /**
             * @fn void setMaterial(const ::Material &oldMat)
             * @brief Set a new Material from an existing one
             * 
             * @param oldMat Mazterial to copy
             */
            void setMaterial(const ::Material &oldMat);

    };

    /**
     * @brief 
     * 
     * @param filePath 
     * @param materialCount 
     * @return std::vector<raylib::Material> 
     */
    std::vector<raylib::Material> loadMaterials(const std::string &filePath, int materialCount);
};

#endif /* !MATERIAL_HPP_ */