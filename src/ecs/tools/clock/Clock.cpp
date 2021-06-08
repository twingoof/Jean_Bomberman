/*
** EPITECH PROJECT, 2021
** B-YEP-400-NAN-4-1-indiestudio-gildas.gonzalez
** File description:
** Clock
*/

#include "Clock.hpp"

void ECS::Clock::startClock(void)
{
    this->_startTick = std::chrono::steady_clock::now();
}

void ECS::Clock::restartClock(void)
{
    this->_startTick = std::chrono::steady_clock::now();
}

double ECS::Clock::getTimeElapsed(void)
{
    this->_endTick = std::chrono::steady_clock::now();
    this->_duration = this->_endTick - this->_startTick;
    return (_duration.count());
}