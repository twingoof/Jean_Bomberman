/*
** EPITECH PROJECT, 2021
** indie
** File description:
** TODO: add description
*/

/**
 * @file Camera.hpp
 * @author gildas.gonzalez@epitech.eu; pierrick.prost@epitech.eu; pierrick.prost@epitech.eu; valentin.bouchet@epitech.eu; mathis.ragot@epitech.eu
 * @brief File that contain the Camera class
 * @version 0.1
 * @date 2021-06-18
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#ifndef INDIE_CAMERA_HPP
#define INDIE_CAMERA_HPP

#include "Vector3.hpp"
#include "raylib.h"

namespace raylib {
    /**
     * @class Camera3D Camera.hpp "src/raylib/Camera.hpp"
     */
    class Camera3D : public ::Camera3D {
        public:
            /**
             * @fn Camera3D()
             * @brief Construct a new Camera 3 D object
             */
            Camera3D();

            /**
             * @fn Camera3D(Vector3 camPos, Vector3 camTarget, Vector3 camUp, float camFovY, int type)
             * @brief Construct a new Camera 3 D object
             * 
             * @param camPos Camera position
             * @param camTarget Camera target position
             * @param camUp Camera up position
             * @param camFovY Camera Fov
             * @param type Camera Type Enum (check raylib.h)
             */
            Camera3D(Vector3 camPos, Vector3 camTarget, Vector3 camUp, float camFovY, int type);

            /**
             * @fn ~Camera3D()
             * @brief Destroy the Camera 3 D object
             */
            ~Camera3D();

            /**
             * @fn void setMode(int mode)
             * @brief Set camera mode
             * 
             * @param mode New mode to set
             */
            void setMode(int mode);

            /**
             * @fn update()
             * @brief Update the camera
             * 
             */
            void update();

            /**
             * @fn setPanControl(int keyPan)
             * @brief Set camera pan
             * 
             * @param keyPan Key enabling pan
             */
            void setPanControl(int keyPan);

            /**
             * @fn void setAltControl(int keyAlt)
             * @brief Set Alt control key
             * 
             * @param keyAlt Key to set
             */
            void setAltControl(int keyAlt);

            /**
             * @fn void setSmootZoomControl(int keySmootZoom)
             * @brief Set a smooth zoom control
             * 
             * @param keySmoothZoom Key to set smooth zoom
             */
            void setSmoothZoomControl(int keySmoothZoom);

            /**
             * @fn void setCameraMoveControls(int front, int back, int left, int up, int down)
             * @brief Set camera direction controls
             * 
             * @param front Front key
             * @param back Back key
             * @param right Right key
             * @param left Left key
             * @param up Up key
             * @param down Down key
             */
            void setCameraMoveControls(int front, int back, int right, int left, int up, int down);

            /**
             * @fn ::Vector3 getPosition()
             * @brief Get the Position object
             * 
             * @return ::Vector3 Camera position
             */
            ::Vector3 getPosition();

            /**
             * @fn ::Vector3 ::getTarget()
             * @brief Get the Target position
             * 
             * @return ::Vector3 Target position
             */
            ::Vector3 getTarget();

            /**
             * @fn ::Vector3 getUp()
             * @brief Get the Up position
             * 
             * @return ::Vector3 Up position
             */
            ::Vector3 getUp();

            /**
             * @fn float getFovY()
             * @brief Get the vertical FOV
             * 
             * @return float Vertical FOV Scale
             */
            float getFovY();

            /**
             * @fn int getType()
             * @brief Get the Type object
             * 
             * @return int Camera Type Enum Value
             */
            int getType();

            /**
             * @fn void setPosition(::Vector3 camPos)
             * @brief Set the camera Position
             * 
             * @param camPos Camera position to set
             */
            void setPosition(::Vector3 camPos);

            /**
             * @fn void setTarget(::Vector3 camTarget)
             * @brief Set the Target position
             * 
             * @param camTarget Target Position
             */
            void setTarget(::Vector3 camTarget);

            /**
             * @fn void setUp(::Vector3 camUp)
             * @brief Set the Up position
             * 
             * @param camUp Camera up position
             */
            void setUp(::Vector3 camUp);

            /**
             * @fn void setFovY(float camFovY)
             * @brief Set the Fov Y object
             * 
             * @param camFovY Vertical FOV scale Factor
             */
            void setFovY(float camFovY);

            /**
             * @fn void setType(int camType)
             * @brief Set the Camera Type
             * 
             * @param camType Camera Type
             */
            void setType(int camType);

        protected:
        private:
    };
}

#endif //INDIE_CAMERA_HPP
