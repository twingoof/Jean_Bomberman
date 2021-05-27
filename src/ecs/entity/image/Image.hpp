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
#include "Vector.hpp"

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

        Vector _position; /**< Position of the image */
        Vector _size; /**< Size of the image */
        Texture _texture; /**< Texture of the image */
};

#endif /* !IMAGE_HPP_ */