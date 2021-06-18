/*
** EPITECH PROJECT, 2021
** B-YEP-400-NAN-4-1-indiestudio-gildas.gonzalez
** File description:
** Kill
*/

#ifndef KILL_HPP_
#define KILL_HPP_

#include "Clock.hpp"
#include "Presets.hpp"
#include "Entity.hpp"
#include <vector>
#include <ctime>
#include "Controls.hpp"
#include "enum.hpp"
#include "Sound.hpp"

namespace ECS {
    class Kill {
        public:
            Kill();
            ~Kill() = default;

            void deleteWall(std::vector<ECS::Entity> &entities);

        protected:
        private:
            int _bonusId;
            raylib::Sound playerDead;

    };
};

#endif /* !KILL_HPP_ */
