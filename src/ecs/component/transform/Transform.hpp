/*
** EPITECH PROJECT, 2021
** B-YEP-400-NAN-4-1-indiestudio-gildas.gonzalez [WSL: kali-linux]
** File description:
** Transform
*/

#ifndef TRANSFORM_HPP_
#define TRANSFORM_HPP_

#include "ECSVector.hpp"
#include "IComponent.hpp"

namespace ECS {
    /**
     * @class Transform Transform.hpp "src/ecs/component/transform/Transform.hpp"
     */
    class Transform: public ECS::IComponent {
        public:
            /**
             * @fn Transform()
             * @brief Construct a new Transform object
             * 
             */
            Transform() = default;
            /**
             * @fn Transform()
             * @brief Construct a new Transform object
             * 
             * @param position 
             * @param size 
             */
            Transform(ECS::Vector3<float> position, ECS::Vector3<int> size);
            /**
             * @fn ~Transform()
             * @brief Destroy the Transform object
             * 
             */
            ~Transform() = default;

            /**
             * @fn setPosition()
             * @brief Set the Position object
             * 
             * @param newPosition 
             */
            void setPosition(ECS::Vector3<float> newPosition);
            /**
             * @fn setLastPosition()
             * @brief Set the Last Position object
             * 
             * @param newLastPosition 
             */
            void setLastPosition(ECS::Vector3<float> newLastPosition);
            /**
             * @fn setSize()
             * @brief Set the Size object
             * 
             * @param newSize 
             */
            void setSize(ECS::Vector3<int> newSize);

            /**
             * @fn void setScale(float scale)
             * @brief Set scale to passed value
             * @param scale new scale
             */
            void setScale(float scale);

            /**
             * @fn getPosition()
             * @brief Get the Position object
             * 
             * @return ECS::Vector3<float>& 
             */
            ECS::Vector3<float> &getPosition();
            /**
             * @fn getLastPosition()
             * @brief Get the Last Position object
             * 
             * @return ECS::Vector3<float>& 
             */
            ECS::Vector3<float> &getLastPosition();
            /**
             * @fn getSize()
             * @brief Get the Size object
             * 
             * @return ECS::Vector3<int>& 
             */
            ECS::Vector3<int> &getSize();

            /**
             * @fn getSpeed()
             * @brief Get the Speed object
             * 
             * @return int& 
             */
            int &getSpeed();
            /**
             * @fn getRange()
             * @brief Get the Range object
             * 
             * @return int& 
             */
            int &getRange();
            /**
             * @fn getReload()
             * @brief Get the Reload object
             * 
             * @return int& 
             */
            int &getReload();
            /**
             * @fn float &getScale()
             * @brief return scale value
             * @return float scale
             */
            float &getScale();

            /**
             * @fn addSpeed()
             * @brief add speed bonus counter
             * 
             * @param speed 
             */
            void addSpeed(int speed);
            /**
             * @fn addRange()
             * @brief add range bonus counter
             * 
             * @param range 
             */
            void addRange(int range);
            /**
             * @fn addReload()
             * @brief add reload bonus counter
             * 
             * @param reload 
             */
            void addReload(int reload);

        private:
            ECS::Vector3<float> _position;
            ECS::Vector3<float> _lastPosition;
            ECS::Vector3<int> _size;
            int _speed;
            int _range;
            int _reload;
            float _scale;
    };
};

#endif /* !TRANSFORM_HPP_ */