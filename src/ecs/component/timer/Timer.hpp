/*
** EPITECH PROJECT, 2021
** B-YEP-400-NAN-4-1-indiestudio-gildas.gonzalez [WSL: Ubuntu-20.04]
** File description:
** Timer
*/

#ifndef TIMER_HPP_
#define TIMER_HPP_

#include "Clock.hpp"
#include "IComponent.hpp"

namespace ECS {
    /**
     * @class Timer Timer.hpp "src/ecs/component/timer/Timer/hpp"
     */
    class Timer : public IComponent {
        public:
            /**
             * @fn Timer()
             * @brief Construct a new Timer object
             * 
             * @param restartTime 
             */
            Timer(double restartTime = 3.0);
            /**
             * @fn ~Timer()
             * @brief Destroy the Timer object
             * 
             */
            ~Timer() = default;

            /**
             * @fn startClock()
             * @brief start clock
             * 
             */
            void startClock();
            /**
             * @fn restartClock()
             * @brief retart clock
             * 
             */
            void restartClock();
            /**
             * @fn getTimeElapsed()
             * @brief Get the Time Elapsed object
             * 
             * @return double 
             */
            double getTimeElapsed();

            /**
             * @fn getRestartTime()
             * @brief Get the Restart Time object
             * 
             * @return double 
             */
            double getRestartTime() const;

        protected:
        private:
            ECS::Clock _clock;
            double _restartTime;

    };
};

#endif /* !TIMER_HPP_ */
