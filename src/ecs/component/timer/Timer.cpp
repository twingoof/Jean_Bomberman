/*
** EPITECH PROJECT, 2021
** B-YEP-400-NAN-4-1-indiestudio-gildas.gonzalez [WSL: Ubuntu-20.04]
** File description:
** Timer
*/

#include "Timer.hpp"

void ECS::Timer::startClock(void)
{
    this->_clock.startClock();
}

void ECS::Timer::restartClock(void)
{
    this->_clock.restartClock();
}

double ECS::Timer::getTimeElapsed(void)
{
    return (this->_clock.getTimeElapsed());
}