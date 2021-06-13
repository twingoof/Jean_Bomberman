/*
** EPITECH PROJECT, 2021
** B-YEP-400-NAN-4-1-indiestudio-gildas.gonzalez [WSL: kali-linux]
** File description:
** Drawable3D
*/

/**
 * @file Drawable3D.hpp
 * @author gildas.gonzalez@epitech.eu; pierrick.prost@epitech.eu; pierrick.prost@epitech.eu; valentin.bouchet@epitech.eu; mathis.ragot@epitech.eu
 * @brief File that contain the Drawable3D component
 * @version 0.1
 * @date 2021-06-13
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#ifndef DRAWABLE3D_HPP_
#define DRAWABLE3D_HPP_

#include "ECSVector.hpp"
#include "enum.hpp"
#include "IComponent.hpp"
#include <iostream>

/**
 * @namespace ECS
 */
namespace ECS {
    /**
     * @class Drawable3D Drawable3D.hpp "src/ecs/component/drawable3d/Drawable3D.hpp"
     */
    class Drawable3D: public ECS::IComponent {
        public:
            /**
             * @fn Drawable3D(std::string meshPath, ECS::Vector3<int> size)
             * @brief Construct a new Drawable3D object
             * 
             * @param meshPath Path to the mesh
             * @param size Size of the mesh
             */
            Drawable3D(std::string meshPath, const ECS::Vector3<int>& size);

            /**
             * @fn Drawable3D &operator=(const Drawable3D &drawable) = default
             * @brief Construct a new Drawable3D object
             * 
             * @param drawable Drawable3D object to copy
             * @return Drawable3D& 
             */
            Drawable3D &operator=(const Drawable3D &rHand) = default;

            /**
             * @fn Drawable3D(const Drawable3D &drawable3D)
             * @brief Construct a new Drawable3D object
             * 
             * @param drawable3D Drawable3D object to copy
             */
            Drawable3D(const Drawable3D &drawable3D);

            /**
             * @fn Drawable3D(ECS::DrawableType type, const ECS::Vector3<int>& size)
             * @brief Construct a new Drawable3D object
             * 
             * @param type Type of drawing
             * @param size Size of drawing
             */
            Drawable3D(ECS::DrawableType type, const ECS::Vector3<int>& size);

            /**
             * @fn ~Drawable3D()
             * @brief Destroy the Drawable 3 D object
             */
            ~Drawable3D();

            /**
             * @fn void setMeshPath(std::string meshPath)
             * @brief Set the mesh path
             * 
             * @param meshPath New mesh path
             */
            void setMeshPath(std::string meshPath);

            /**
             * @fn void setSize(const ECS::Vector3<int>& size)
             * @brief Set the size
             * 
             * @param size New size
             */
            void setSize(const ECS::Vector3<int>& size);

            /**
             * @fn void setColor(const ECS::Vector4<unsigned char> color)
             * @brief Set the color
             * 
             * @param color New color
             */
            void setColor(const ECS::Vector4<unsigned char> color);

            /**
             * @fn void setWColor(const ECS::Vector4<unsigned char> wColor)
             * @brief Set the wColor
             * 
             * @param wColor new wColor
             */
            void setWColor(const ECS::Vector4<unsigned char> wColor);

            /**
             * @fn const std::string getMeshPath() const
             * @brief Get the mesh path
             * 
             * @return const std::string 
             */
            const std::string getMeshPath() const;

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

            /**
             * @fn ECS::Vector4<unsigned char> getWColor() const
             * @brief Get the wColor
             * 
             * @return ECS::Vector4<unsigned char> 
             */
            ECS::Vector4<unsigned char> getWColor() const;

        private:
            std::string _meshPath;
            ECS::Vector3<int> _size;
            ECS::DrawableType _type;
            ECS::Vector4<unsigned char> _color;
            ECS::Vector4<unsigned char> _wColor;
    };
};

#endif /* !DRAWABLE3D_HPP_ */
