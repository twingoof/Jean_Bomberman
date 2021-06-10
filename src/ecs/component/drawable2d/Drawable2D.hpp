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
#include "ECSVector3.hpp"
#include <iostream>

namespace ECS {
    class Drawable2D : public ECS::IComponent {
        public:
            Drawable2D() = default;
            Drawable2D(std::string spritePath, ECS::Vector3<int> size, ECS::DrawableType type);
            Drawable2D &operator=(const Drawable2D &drawable) = default;
            ~Drawable2D() override;
            void setSpritePath(std::string spritePath);
            void setSize(ECS::Vector3<int> size);
            const std::string getSpritePath() const;
            const ECS::Vector3<int> getSize() const;
            ECS::DrawableType getType() const;

        private:
            ECS::DrawableType _type;
            std::string _spritePath;
            ECS::Vector3<int> _size;
    };
};

#endif /* !DRAWABLE2D_HPP_ */