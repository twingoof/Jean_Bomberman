/*
** EPITECH PROJECT, 2021
** B-YEP-400-NAN-4-1-indiestudio-gildas.gonzalez
** File description:
** Clock
*/

#ifndef CLOCK_HPP_
#define CLOCK_HPP_

#include <chrono>

namespace ECS {
    class Clock {
        public:
            Clock(float tick = 0.06f);
            Clock(const Clock &oldClock) = default;
            Clock &operator=(const Clock &oldClock) = default;
            ~Clock() = default;

            void startClock();
            void restartClock();
            double getTimeElapsed();

        protected:

        private:
            std::chrono::_V2::steady_clock::time_point _startTick;
            std::chrono::_V2::steady_clock::time_point _endTick;

            std::chrono::duration<double> _duration;
            float _tick;

    };
};

#endif /* !CLOCK_HPP_ */
