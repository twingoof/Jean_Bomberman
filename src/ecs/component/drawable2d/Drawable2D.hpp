/*
** EPITECH PROJECT, 2021
** B-YEP-400-NAN-4-1-indiestudio-gildas.gonzalez [WSL: kali-linux]
** File description:
** Drawable2D
*/

#ifndef DRAWABLE2D_HPP_
#define DRAWABLE2D_HPP_

#include "enum.hpp"
#include "IComponent.hpp"
#include "ECSVector.hpp"
#include <iostream>

/**
 * @namespace ECS
 */
namespace ECS {
    /**
     * @class Drawable2D Drawable2D.hpp "src/ecs/component/drawable2d/Drawable2D.hpp"
     */
    class Drawable2D : public ECS::IComponent {
        public:
            /**
             * @fn Drawable2D() = default
             * @brief Construct a new Drawable2D object
             */
            Drawable2D() = default;

            /**
             * @fn Drawable2D(std::string spritePath, ECS::Vector3<int> size, ECS::DrawableType type)
             * @brief Construct a new Drawable2D object
             * 
             * @param spritePath Path to the sprite
             * @param size Size of the sprite
             * @param type Type of drawing
             */
            Drawable2D(std::string spritePath, ECS::Vector3<int> size, ECS::DrawableType type);

            /**
             * @fn Drawable2D &operator=(const Drawable2D &drawable) = default
             * @brief Construct a new Drawable2D object
             * 
             * @param drawable Drawable2D object to copy
             * @return Drawable2D& 
             */
            Drawable2D &operator=(const Drawable2D &drawable) = default;

            /**
             * @fn ~Drawable2D() override
             * @brief Destroy the Drawable2D object
             */
            ~Drawable2D() override;

            /**
             * @fn void setSpritePath(std::string spritePath)
             * @brief Set the sprite path
             * 
             * @param spritePath new sprite path
             */
            void setSpritePath(std::string spritePath);

            /**
             * @fn void setSize(ECS::Vector3<int> size)
             * @brief Set the size
             * 
             * @param size new size
             */
            void setSize(ECS::Vector3<int> size);

            /**
             * @fn const std::string getSpritePath() const
             * @brief Get the sprite path
             * 
             * @return const std::string 
             */
            const std::string getSpritePath() const;

            /**
             * @fn const ECS::Vector3<int> getSize() const
             * @brief Get the size
             * 
             * @return const ECS::Vector3<int> 
             */
            const ECS::Vector3<int> getSize() const;

            /**
             * @fn ECS::DrawableType getType() const
             * @brief Get the type
             * 
             * @return ECS::DrawableType 
             */
            ECS::DrawableType getType() const;

            /**
             * @fn ECS::Vector4<unsigned char> getColor() const
             * @brief Get the color
             * 
             * @return ECS::Vector4<unsigned char> 
             */
            ECS::Vector4<unsigned char> getColor() const;

        private:
            ECS::DrawableType _type;
            std::string _spritePath;
            ECS::Vector3<int> _size;
            ECS::Vector4<unsigned char> _color;
    };
};

#endif /* !DRAWABLE2D_HPP_ */