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
    /**
     * @class Moveable Moveable.hpp "src/ecs/component/moveable/Moveable.hpp"
     */
    class Moveable : public ECS::IComponent{
        public:
            /**
             * @fn Moveable()
             * @brief Construct a new Moveable object
             * 
             */
            Moveable();
            /**
             * @fn Moveable()
             * @brief Construct a new Moveable object
             * 
             * @param velocity 
             * @param keys 
             */
            Moveable(ECS::Vector3<float> &velocity, std::map<std::string, raylib::Keys> keys);

            /**
             * @fn Moveable()
             * @brief Construct a new Moveable object
             * 
             * @param cpy 
             */
            Moveable(const Moveable &cpy) = default;
            /**
             * @fn operator=()
             * @brief 
             * 
             * @param Moveable 
             * @return Moveable& 
             */
            Moveable &operator=(const Moveable &Moveable);
            /**
             * @fn ~Moveable()
             * @brief Destroy the Moveable object
             * 
             */
            ~Moveable();

            /**
             * @fn getVelocity()
             * @brief Get the Velocity object
             * 
             * @return ECS::Vector3<float> 
             */
            ECS::Vector3<float> getVelocity() const;
            /**
             * @fn getKeys()
             * @brief Get the Keys object
             * 
             * @return std::map<std::string, raylib::Keys> 
             */
            std::map<std::string, raylib::Keys> getKeys() const;
            /**
             * @fn getSpeed()
             * @brief Get the Speed object
             * 
             * @return float 
             */
            float getSpeed() const;

            /**
             * @fn setKeys()
             * @brief Set the Keys object
             * 
             * @param keys 
             */
            void setKeys(std::map<std::string, raylib::Keys> keys);
            /**
             * @fn setVelocity()
             * @brief Set the Velocity object
             * 
             * @param newValue 
             */
            void setVelocity(const ECS::Vector3<float> &newValue);
            /**
             * @fn setVelocity()
             * @brief Set the Velocity object
             * 
             * @param x 
             * @param y 
             * @param z 
             */
            void setVelocity(float x, float y, float z);
            /**
             * @fn setSpeed()
             * @brief Set the Speed object
             * 
             * @param value 
             */
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