/*
** EPITECH PROJECT, 2021
** B-YEP-400-NAN-4-1-indiestudio-gildas.gonzalez
** File description:
** Audio
*/

#include "Audio.hpp"

raylib::Audio &raylib::Audio::getAudioDevice()
{
    static raylib::Audio instance;

    return (instance);
}

raylib::Audio::Audio(void) = default;

void raylib::Audio::initAudioDevice(void)
{
    ::InitAudioDevice();
    _isInitialized = true;
}

bool raylib::Audio::isReady(void) const
{
    return (_isInitialized);
}

void raylib::Audio::setMasterVolume(float volumeValue) const
{
    if (_isInitialized)
        ::SetMasterVolume(volumeValue);
}

void raylib::Audio::closeAudioDevice(void)
{
    if (_isInitialized)
        ::CloseAudioDevice();
}

raylib::Audio::~Audio() = default;