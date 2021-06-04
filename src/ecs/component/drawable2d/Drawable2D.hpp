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

class Drawable2D : public IComponent {
    public:
        Drawable2D() = default;
        Drawable2D(std::string spritePath, ECSVector3 size, DrawableType type);
        Drawable2D &operator=(const Drawable2D &drawable) = default;
        ~Drawable2D() override;
        void setSpritePath(std::string spritePath);
        void setSize(ECSVector3 size);
        const std::string getSpritePath() const;
        const ECSVector3 getSize() const;
        DrawableType getType() const;

    private:
        DrawableType _type;
        std::string _spritePath;
        ECSVector3 _size;
};

#endif /* !DRAWABLE2D_HPP_ */