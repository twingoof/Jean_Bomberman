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
    class Timer : public IComponent {
        public:
            Timer(double restartTime = 3.0);
            ~Timer() = default;

            void startClock();
            void restartClock();
            double getTimeElapsed();

            double getRestartTime() const;

        protected:
        private:
            ECS::Clock _clock;
            double _restartTime;

    };
};

#endif /* !TIMER_HPP_ */
