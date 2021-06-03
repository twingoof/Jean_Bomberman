/*
** EPITECH PROJECT, 2021
** B-YEP-400-NAN-4-1-indiestudio-gildas.gonzalez [WSL: kali-linux]
** File description:
** Drawable3D
*/


#ifndef DRAWABLE3D_HPP_
#define DRAWABLE3D_HPP_

#include "ECSVector3.hpp"
#include <iostream>

class Drawable3D {
    public:
        Drawable3D(std::string meshPath, const ECSVector3& size);
        Drawable3D(const Drawable3D &drawable3D);
        ~Drawable3D();

        Drawable3D& operator=(Drawable3D const &rHand);

        void setMeshPath(std::string meshPath);
        void setSize(const ECSVector3& size);
        const std::string getMeshPath() const;
        const ECSVector3 getSize() const;

    private:
        std::string _meshPath;
        ECSVector3 _size;
};

#endif /* !DRAWABLE3D_HPP_ */
