/*
** EPITECH PROJECT, 2021
** B-YEP-400-NAN-4-1-indiestudio-gildas.gonzalez [WSL: kali-linux]
** File description:
** Drawable2D
*/

#include <iostream>

#ifndef DRAWABLE2D_HPP_
#define DRAWABLE2D_HPP_

#include "Vector3.hpp"

class Drawable2D {
    public:
        Drawable2D(std::string spritePath, Vector3 size);
        ~Drawable2D();
        void setSpritePath(std::string spritePath);
        void setSize(Vector3 size);
        const std::string getSpritePath() const;
        const Vector3 getSize() const;

    private:
        std::string _spritePath;
        Vector3 _size;
};

#endif /* !DRAWABLE2D_HPP_ */