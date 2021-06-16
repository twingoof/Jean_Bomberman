/*
** EPITECH PROJECT, 2021
** indie
** File description:
** TODO: add description
*/

#ifndef INDIE_CAMERA_HPP
#define INDIE_CAMERA_HPP

#include "Vector3.hpp"
#include "raylib.h"

namespace raylib {
    class Camera3D : public ::Camera3D {
        public:
            Camera3D();
            Camera3D(Vector3 camPos, Vector3 camTarget, Vector3 camUp, float camFovY, int type);
            ~Camera3D();

            Camera3D &operator=(const Camera3D &cpy);

            void setMode(int mode);
            void update();

            void setPanControl(int keyPan);
            void setAltControl(int keyAlt);
            void setSmoothZoomControl(int keySmoothZoom);
            void setCameraMoveControls(int front, int back, int right, int left, int up, int down);

            ::Vector3 getPosition();
            ::Vector3 getTarget();
            ::Vector3 getUp();
            float getFovY();
            int getType();

            void setPosition(::Vector3 camPos);
            void setTarget(::Vector3 camTarget);
            void setUp(::Vector3 camUp);
            void setFovY(float camFovY);
            void setType(int camType);

        protected:
        private:
    };
}

#endif //INDIE_CAMERA_HPP
