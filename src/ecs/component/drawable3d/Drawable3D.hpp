/*
** EPITECH PROJECT, 2021
** B-YEP-400-NAN-4-1-indiestudio-gildas.gonzalez [WSL: kali-linux]
** File description:
** Drawable3D
*/

#include <iostream>

#ifndef DRAWABLE3D_HPP_
    #define DRAWABLE3D_HPP_

    #include "Vector3.hpp"

class Drawable3D {
    public:
        Drawable3D(std::string meshPath, const Vector3& size);
        Drawable3D(const Drawable3D &drawable3D);
        ~Drawable3D();

        Drawable3D& operator=(Drawable3D const &rHand);

        void setMeshPath(std::string meshPath);
        void setSize(const Vector3& size);
        const std::string getMeshPath() const;
        const Vector3 getSize() const;

    private:
        std::string _meshPath;
        Vector3 _size;
};

#endif /* !DRAWABLE3D_HPP_ */
