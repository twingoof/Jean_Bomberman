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

<<<<<<< HEAD
class Drawable3D : public IComponent{
    public:
        Drawable3D(std::string meshPath, const ECSVector3& size);
        Drawable3D(DrawableType type, const ECSVector3& size);
        Drawable3D &operator=(const Drawable3D &rHand) = default;
        Drawable3D(const Drawable3D &drawable3D);
        ~Drawable3D();

        void setMeshPath(std::string meshPath);
        void setSize(const ECSVector3& size);
        const std::string getMeshPath() const;
        const ECSVector3 getSize() const;
        DrawableType getType() const;

    private:
        std::string _meshPath;
        ECSVector3 _size;
        DrawableType _type;
=======
namespace ECS {
    class Drawable3D: public ECS::IComponent {
        public:
            Drawable3D(std::string meshPath, const ECS::Vector3& size);
            Drawable3D &operator=(const Drawable3D &rHand) = default;
            Drawable3D(const Drawable3D &drawable3D);
            ~Drawable3D();

            void setMeshPath(std::string meshPath);
            void setSize(const ECS::Vector3& size);
            const std::string getMeshPath() const;
            const ECS::Vector3 getSize() const;

        private:
            std::string _meshPath;
            ECS::Vector3 _size;
    };
>>>>>>> 05938a43ba7df350ffc50db201868b91ce697826
};

#endif /* !DRAWABLE3D_HPP_ */
