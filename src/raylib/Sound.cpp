/*
** EPITECH PROJECT, 2021
** B-YEP-400-NAN-4-1-indiestudio-gildas.gonzalez
** File description:
** Sound
*/

#include "Sound.hpp"

raylib::Sound::Sound(const std::string &filePath)
{
    this->loadSound(filePath);
}

raylib::Sound::Sound(const ::Sound &oldSound)
{
    this->setSound(oldSound);
}

raylib::Sound &raylib::Sound::operator=(const ::Sound &oldSound)
{
    this->setSound(oldSound);
    return (*this);
}

raylib::Sound::~Sound()
{
    this->unloadSound();
}

void raylib::Sound::playSound(void) const
{
    ::PlaySound(*this);
}

void raylib::Sound::stopSound(void) const
{
    ::StopSound(*this);
}

void raylib::Sound::pauseSound(void) const
{
    ::PauseSound(*this);
}

void raylib::Sound::resumeSound(void) const
{
    ::ResumeSound(*this);
}

void raylib::Sound::loadSound(const std::string &filePath)
{
    this->setSound(::LoadSound(filePath.c_str()));
}

bool raylib::Sound::isPlaying(void) const
{
    return (::IsSoundPlaying(*this));
}

void raylib::Sound::loadFromWave(const ::Wave &wave)
{
    this->setSound(::LoadSoundFromWave(wave));
}

void raylib::Sound::unloadSound(void) const
{
    ::UnloadSound(*this);
}