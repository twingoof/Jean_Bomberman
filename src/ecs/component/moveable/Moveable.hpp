/*
** EPITECH PROJECT, 2021
** B-YEP-400-NAN-4-1-indiestudio-gildas.gonzalez
** File description:
** Moveable
*/

#ifndef MOVEABLE_HPP_
#define MOVEABLE_HPP_

#include "vectors/ECSVector.hpp"
#include "IComponent.hpp"
#include "Controls.hpp"
#include <map>

namespace ECS {
    class Moveable : public ECS::IComponent{
        public:
            Moveable();
            Moveable(ECS::Vector3<float> &velocity, std::map<std::string, raylib::Keys> keys);

            Moveable(const Moveable &cpy) = default;
            Moveable &operator=(const Moveable &Moveable);
            ~Moveable();

            ECS::Vector3<float> getVelocity() const;
            std::map<std::string, raylib::Keys> getKeys() const;
            float getSpeed() const;

            void setKeys(std::map<std::string, raylib::Keys> keys);
            void setVelocity(const ECS::Vector3<float> &newValue);
            void setVelocity(float x, float y, float z);
            void setSpeed(float value);

        private:
            ECS::Vector3<float> _velocity;
            raylib::Keys _keyUp;
            raylib::Keys _keyDown;
            raylib::Keys _keyLeft;
            raylib::Keys _keyRight;
            raylib::Keys _keyBomb;
            float _speed;

    };
};

#endif /* !MOVEABLE_HPP_ */