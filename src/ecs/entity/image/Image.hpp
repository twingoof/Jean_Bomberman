/*
** EPITECH PROJECT, 2021
** B-YEP-400-NAN-4-1-indiestudio-gildas.gonzalez [WSL: kali-linux]
** File description:
** Image
*/

/**
 * @file Image.hpp
 * @author gildas.gonzalez@epitech.eu; pierrick.prost@epitech.eu; pierrick.prost@epitech.eu; valentin.bouchet@epitech.eu; mathis.ragot@epitech.eu
 * @brief File that contain the Image entity
 * @version 0.1
 * @date 2021-05-27
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include <vector>
#ifndef IMAGE_HPP_
#define IMAGE_HPP_

#include "IEntity.hpp"
#include "Texture.hpp"

/**
 * @class Image Image.hpp "src/ecs/entity/image/Image.hpp"
 */
class Image {
    public:
        /**
         * @fn Image(std::map<std::string, std::string> texture = {}, std::vector<int, int> position = {}, std::vector<int, int> size = {})
         * @brief Construct a new Image
         * 
         * @param texture Texture of the image
         * @param position Initial position of the image
         * @param size Initial size of the image
         */
        Image(std::map<std::string, std::string> texture = {}, std::vector<int, int> position = {}, std::vector<int, int> size = {});

        /**
         * @fn ~Image()
         * @brief Destroy the Image
         */
        ~Image();

        /**
         * @fn
         * @brief Get the position of the Image
         * 
         * @return const std::vector<int, int> 
         */
        const std::vector<int, int> getPosition() const;

        /**
         * @fn
         * @brief Get the size of the Image
         * 
         * @return const std::vector<int, int> 
         */
        const std::vector<int, int> getSize() const;

        /**
         * @fn 
         * @brief Set the position of the Image
         * 
         * @param newPosition New position to set
         */
        void setPosition(std::vector<int, int> newPosition);

        /**
         * @fn
         * @brief Set the size of the Image
         * 
         * @param newSize New size to set
         */
        void setSize(std::vector<int, int> newSize);

        Texture _imageTexture; /**< Texture of the Image*/
    private:
        std::vector<int, int> _position; /**< Position of the Image*/
        std::vector<int, int> _size; /**< Size of the Image*/
};

#endif /* !IMAGE_HPP_ */