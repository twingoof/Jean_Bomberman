/*
** EPITECH PROJECT, 2021
** B-YEP-400-NAN-4-1-indiestudio-gildas.gonzalez
** File description:
** Clock
*/

/**
 * @file Clock.hpp
 * @author gildas.gonzalez@epitech.eu; pierrick.prost@epitech.eu; pierrick.prost@epitech.eu; valentin.bouchet@epitech.eu; mathis.ragot@epitech.eu
 * @brief File that contain the Clock
 * @version 0.1
 * @date 2021-06-20
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#ifndef CLOCK_HPP_
#define CLOCK_HPP_

#include <chrono>

/**
 * @namespace ECS
 */
namespace ECS {
    /**
     * @class Clock Clock.hpp "src/ecs/tools/clock/Clock.hpp"
     */
    class Clock {
        public:
            /**
             * @fn Clock() = default
             * @brief Construct a new Clock object
             */
            Clock() = default;

            /**
             * @fn Clock(const Clock &oldClock) = default
             * @brief Construct a new Clock object
             * 
             * @param oldClock clock to copy 
             */
            Clock(const Clock &oldClock) = default;

            /**
             * @fn Clock &operator=(const Clock &oldClock) = default
             * @brief Copy constructor
             * 
             * @param oldClock clock to copy
             * @return Clock& 
             */
            Clock &operator=(const Clock &oldClock) = default;

            /**
             * @fn ~Clock() = default
             * @brief Destroy the Clock object
             */
            ~Clock() = default;

            /**
             * @fn void startClock()
             * @brief Start the clock
             */
            void startClock();

            /**
             * @fn void restartClock()
             * @brief Restard the clock
             */
            void restartClock();

            /**
             * @fn double getTimeElapsed()
             * @brief Get the Time Elapsed
             * 
             * @return double 
             */
            double getTimeElapsed();

        protected:

        private:
            std::chrono::steady_clock::time_point _startTick;
            std::chrono::steady_clock::time_point _endTick;

            std::chrono::duration<double> _duration;
            float _tick;

    };
};

#endif /* !CLOCK_HPP_ */
