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

namespace ECS {
    class Kill {
        public:
            Kill() = default;
            ~Kill() = default;

            void deleteWall(std::vector<ECS::Entity> &entity);

        protected:
        private:
            int _bonusId;

    };
};

#endif /* !KILL_HPP_ */
