/*
** EPITECH PROJECT, 2021
** B-YEP-400-NAN-4-1-indiestudio-gildas.gonzalez
** File description:
** Moveable
*/

#ifndef MOVEABLE_HPP_
#define MOVEABLE_HPP_

#include "ECSVector3.hpp"
#include "IComponent.hpp"

<<<<<<< HEAD
class Moveable : public IComponent{
    public:
        Moveable() = default;
        Moveable(int x, int y, int z, ECSVector3 velocity = {0, 0, 0});
        Moveable(ECSVector3 &position, ECSVector3 velocity = {0, 0, 0});
        Moveable(const Moveable &cpy) = default;
        Moveable &operator=(const Moveable &Moveable) = default;
        ~Moveable();

        void moveX(int offsetX);
        void moveY(int offsetY);
        void moveZ(int offsetZ);

        void move(int offsetX, int offsetY, int offsetZ);
        void move(ECSVector3 offsetPosition);

        void place(int offsetX, int offsetY, int offsetZ);
        void place(ECSVector3 offsetPosition);

        const ECSVector3 getPosition() const;

        void setVelocity(const ECSVector3 &newValue);
        void setVelocity(int x = 0, int y = 0, int z = 0);
        ECSVector3 &getVelocity() const;

    private:
        ECSVector3 _position;
        ECSVector3 &_velocityVector;
=======
namespace ECS {
    class Moveable : public ECS::IComponent{
        public:
            Moveable() = default;
            Moveable(int x, int y, int z, ECS::Vector3 velocity = {0, 0, 0});
            Moveable(ECS::Vector3 &position, ECS::Vector3 velocity = {0, 0, 0});
            Moveable(const Moveable &cpy) = default;
            Moveable &operator=(const Moveable &Moveable) = default;
            ~Moveable();

            void moveX(int offsetX);
            void moveY(int offsetY);
            void moveZ(int offsetZ);

            void move(int offsetX, int offsetY, int offsetZ);
            void move(ECS::Vector3 offsetPosition);

            void place(int offsetX, int offsetY, int offsetZ);
            void place(ECS::Vector3 offsetPosition);

            const ECS::Vector3 getPosition() const;

            void setVelocity(const ECS::Vector3 &newValue);
            ECS::Vector3 &getVelocity() const;

        private:
            ECS::Vector3 _position;
            ECS::Vector3 &_velocityVector;
    };
>>>>>>> 05938a43ba7df350ffc50db201868b91ce697826
};

#endif /* !MOVEABLE_HPP_ */