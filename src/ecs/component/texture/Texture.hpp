/*
** EPITECH PROJECT, 2021
** B-YEP-400-NAN-4-1-indiestudio-gildas.gonzalez [WSL: kali-linux]
** File description:
** Texture
*/

/**
 * @file Texture.hpp
 * @author gildas.gonzalez@epitech.eu; pierrick.prost@epitech.eu; pierrick.prost@epitech.eu; valentin.bouchet@epitech.eu; mathis.ragot@epitech.eu
 * @brief File that contain the Texture component
 * @version 0.1
 * @date 2021-05-27
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include <iostream>
#include <map>
#include <vector>

#ifndef TEXTURE_HPP_
#define TEXTURE_HPP_

#include "IComponent.hpp"

/**
 * @class Texture Texture.hpp "src/ecs/component/texture/Texture.hpp"
 */
class Texture:public IComponent {
    public:
        /**
         * @fn 
         * @brief Construct a new Texture
         * 
         * @param textures Texture of the object
         */
        Texture(std::map<std::string, std::string> textures = {});

        /**
         * @fn
         * @brief Destroy the Texture object
         */
        ~Texture();

        /**
         * @fn
         * @brief Add a new texture to the map 
         * 
         * @param newTexture New to texture to add, with the pair format (one texture)
         */
        void addTexture(std::pair<std::string, std::string> newTexture);

         /**
         * @fn
         * @brief Add a new texture to the map 
         * 
         * @param newTextures New to texture to add, with the map format (multiple texture)
         */
        void addTextures(std::map<std::string, std::string> newTextures);

        /**
         * @fn
         * @brief Delete a texture of the map
         * 
         * @param textureName Texture key to delete
         */
        void deleteTexture(std::string textureName);

        /**
         * @fn
         * @brief Delete a texture of the map
         * 
         * @param texturesName Vector of texture key to delete
         */
        void deleteTextures(std::vector<std::string> texturesName);

        /**
         * @fn
         * @brief Get the Texture map
         * 
         * @param textureName Key of the texture to get
         * @return const std::map<std::string, std::string> 
         */
        const std::map<std::string, std::string> getTexture(std::string textureName) const;

        /**
         * @fn
         * @brief Get the Texture map
         * 
         * @param texturesName Vectir of key of the texture to get
         * @return const std::map<std::string, std::string> 
         */
        const std::map<std::string, std::string> getTextures(std::vector<std::string> texturesName) const;

        /**
         * @fn
         * @brief Get the Texture map
         * 
         * @return const std::map<std::string, std::string> 
         */
        const std::map<std::string, std::string> getTextures() const;

    private:
        std::map<std::string, std::string> _textures;
};

#endif /* !TEXTURE_HPP_ */