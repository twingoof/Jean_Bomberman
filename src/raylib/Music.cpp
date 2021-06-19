/*
** EPITECH PROJECT, 2021
** B-YEP-400-NAN-4-1-indiestudio-gildas.gonzalez
** File description:
** Music
*/

#include "Music.hpp"

raylib::Music::Music(const std::string &filePath)
{
    this->loadMusicFromFile(filePath);
}

raylib::Music::Music(const Music &rHand)
{
    this->setMusic(rHand);
}

raylib::Music &raylib::Music::operator=(const Music &rHand)
{
    this->setMusic(rHand);
    return (*this);
}

raylib::Music::~Music()
{
    if (_isLoaded)
        this->unload();
}

void raylib::Music::loadMusicFromFile(const std::string &filePath)
{
    this->setMusic(::LoadMusicStream(filePath.c_str()));
}

void raylib::Music::unload(void)
{
    ::UnloadMusicStream(*this);
}

void raylib::Music::launch(void)
{
    if (_isLoaded) {
        ::PlayMusicStream(*this);
        _isPlaying = true;
    }
}

void raylib::Music::pause(void)
{
    if (_isLoaded) {
        ::PauseMusicStream(*this);
        _isPlaying = false;
    }
}

void raylib::Music::resume(void)
{
    if (_isPlaying) {
        ::ResumeMusicStream(*this);
        _isPlaying = true;
    }
}

void raylib::Music::stop(void)
{
    if (_isLoaded) {
        ::StopMusicStream(*this);
        _isPlaying = false;
    }
}

void raylib::Music::updateMusic(void)
{
    if (_isLoaded)
        ::UpdateMusicStream(*this);
}

void raylib::Music::setVolume(float volValue)
{
    ::SetMusicVolume(*this, volValue);
}

bool raylib::Music::isPlaying(void) const
{
    return (_isPlaying);
}

void raylib::Music::setMusic(const ::Music &rHand)
{
    this->ctxData = rHand.ctxData;
    this->ctxType = rHand.ctxType;
    this->stream = rHand.stream;
    this->sampleCount = rHand.sampleCount;
    this->looping = rHand.looping;
    this->_isLoaded = true;
}