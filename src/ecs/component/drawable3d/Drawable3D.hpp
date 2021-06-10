/*
** EPITECH PROJECT, 2021
** B-YEP-400-NAN-4-1-indiestudio-gildas.gonzalez [WSL: kali-linux]
** File description:
** Drawable3D
*/


#ifndef DRAWABLE3D_HPP_
#define DRAWABLE3D_HPP_

#include "ECSVector3.hpp"
#include "enum.hpp"
#include "IComponent.hpp"
#include <iostream>

namespace ECS {
    class Drawable3D: public ECS::IComponent {
        public:
            Drawable3D(std::string meshPath, const ECS::Vector3<int>& size);
            Drawable3D &operator=(const Drawable3D &rHand) = default;
            Drawable3D(const Drawable3D &drawable3D);
            Drawable3D(ECS::DrawableType type, const ECS::Vector3<int>& size);
            ~Drawable3D();

            void setMeshPath(std::string meshPath);
            void setSize(const ECS::Vector3<int>& size);
            const std::string getMeshPath() const;
            const ECS::Vector3<int> getSize() const;
            ECS::DrawableType getType() const;

        private:
            std::string _meshPath;
            ECS::Vector3<int> _size;
            ECS::DrawableType _type;
    };
};

#endif /* !DRAWABLE3D_HPP_ */
