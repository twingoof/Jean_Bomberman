/*
** EPITECH PROJECT, 2021
** indie
** File description:
** TODO: add description
*/

#include "Camera.hpp"

raylib::Camera3D::Camera3D() = default;

raylib::Camera3D::Camera3D(Vector3 camPos, Vector3 camTarget, Vector3 camUp, float camFovY, int type) : Camera3D()
{
    this->position = camPos;
    this->target = camTarget;
    this->up = camUp;
    this->fovy = camFovY;
    this->projection = type;
}

raylib::Camera3D::~Camera3D() = default;

void raylib::Camera3D::setMode(int mode)
{
    ::SetCameraMode(*this, mode);
}

void raylib::Camera3D::update()
{
    ::UpdateCamera(this);
}

void raylib::Camera3D::setPanControl(int keyPan)
{
    ::SetCameraPanControl(keyPan);
}

void raylib::Camera3D::setAltControl(int keyAlt)
{
    ::SetCameraAltControl(keyAlt);
}

void raylib::Camera3D::setSmoothZoomControl(int keySmoothZoom)
{
    ::SetCameraSmoothZoomControl(keySmoothZoom);
}

void raylib::Camera3D::setCameraMoveControls(int kfront, int kback, int kright, int kleft, int kup, int kdown)
{
    ::SetCameraMoveControls(kfront, kback, kright, kleft, kup, kdown);
}

::Vector3 raylib::Camera3D::getPosition()
{
    return this->position;
}

::Vector3 raylib::Camera3D::getTarget()
{
    return this->target;
}

::Vector3 raylib::Camera3D::getUp()
{
    return this->up;
}

float raylib::Camera3D::getFovY()
{
    return this->fovy;
}

int raylib::Camera3D::getType()
{
    return this->projection;
}

void raylib::Camera3D::setPosition(::Vector3 camPos)
{
    this->position = camPos;
}

void raylib::Camera3D::setTarget(::Vector3 camTarget)
{
    this->target = camTarget;
}

void raylib::Camera3D::setUp(::Vector3 camUp)
{
    this->up = camUp;
}

void raylib::Camera3D::setFovY(float camFovY)
{
    this->fovy = camFovY;
}

void raylib::Camera3D::setType(int camType)
{
    this->projection = camType;
}
