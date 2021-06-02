/*
** EPITECH PROJECT, 2021
** B-YEP-400-NAN-4-1-indiestudio-gildas.gonzalez
** File description:
** Drawable
*/

#include <iostream>
#ifndef DRAWABLE_HPP_
#define DRAWABLE_HPP_
#include "IComponent.hpp"
#include "Vector3.hpp"

class Drawable:public IComponent {
    public:
        Drawable(Vector3 position, Vector3 size, bool activated = false);
        ~Drawable();
        void setSprite(std::string spritePath);
        void setMesh(std::string meshPath);
        void setActivation(bool activated);
        void setPosition(Vector3 position);
        void setSize(Vector3 size);
        const std::string getSprite() const;
        const std::string getMesh() const;
        const bool getActivation() const;
        const Vector3 getPosition() const;
        const Vector3 getSize() const;

    private:
        bool _activated;
        std::string _sprite;
        std::string _mesh;
        Vector3 _position;
        Vector3 _size;
};

#endif /* !DRAWABLE_HPP_ */