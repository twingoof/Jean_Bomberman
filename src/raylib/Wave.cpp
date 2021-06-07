/*
** EPITECH PROJECT, 2021
** B-YEP-400-NAN-4-1-indiestudio-gildas.gonzalez
** File description:
** Wave
*/

#include "Wave.hpp"

raylib::Wave::Wave(const std::string &filePath)
{
    this->loadWave(filePath);
}

raylib::Wave::Wave(const ::Wave &oldWave)
{
    this->setWave(::WaveCopy(oldWave));
}

raylib::Wave &raylib::Wave::operator=(const ::Wave &oldWave)
{
    this->setWave(::WaveCopy(oldWave));
    return (*this);
}

raylib::Wave::~Wave()
{
    this->unloadWave();
}

void raylib::Wave::loadWave(const std::string &filePath)
{
    this->setWave(::LoadWave(filePath.c_str()));
}

void raylib::Wave::unloadWave(void)
{
    ::UnloadWave(*this);
}

void raylib::Wave::setWave(const ::Wave &oldWave)
{
    this->channels = oldWave.channels;
    this->sampleCount = oldWave.sampleCount;
    this->sampleRate = oldWave.sampleRate;
    this->data = oldWave.data;
    this->sampleSize = oldWave.sampleSize;
}