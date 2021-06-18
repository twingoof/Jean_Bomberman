/*
** EPITECH PROJECT, 2021
** B-YEP-400-NAN-4-1-indiestudio-gildas.gonzalez [WSL: kali-linux]
** File description:
** Drawable3D
*/


#ifndef DRAWABLE3D_HPP_
#define DRAWABLE3D_HPP_

#include "ECSVector.hpp"
#include "enum.hpp"
#include "Drawable.hpp"
#include <iostream>

namespace ECS {
    class Drawable3D: public ECS::Drawable {
        public:
            Drawable3D(std::string meshPath, const ECS::Vector3<int>& size);
            Drawable3D &operator=(const Drawable3D &rHand) = default;
            Drawable3D(const Drawable3D &drawable3D);
            Drawable3D(ECS::DrawableType type, const ECS::Vector3<int>& size);
            ~Drawable3D() override;

            void setMeshPath(std::string meshPath);
            void setTexturePath(std::string texturePath);
            void setSize(const ECS::Vector3<int>& size);
            void setColor(const ECS::Vector4<unsigned char> color);
            void setWColor(const ECS::Vector4<unsigned char> wColor);

            unsigned int getId() const;
            std::string getMeshPath() const;
            std::string getTexturePath() const;
            ECS::Vector3<int> getSize() const;
            ECS::DrawableType getType() const;
            ECS::Vector4<unsigned char> getColor() const;
            ECS::Vector4<unsigned char> getWColor() const;

        protected:
        private:
            std::string _meshPath;
            std::string _texturePath;
            ECS::Vector3<int> _size;
            ECS::DrawableType _type;
            ECS::Vector4<unsigned char> _color;
            ECS::Vector4<unsigned char> _wColor;
    };
};

#endif /* !DRAWABLE3D_HPP_ */
