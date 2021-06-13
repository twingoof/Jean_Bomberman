/*
** EPITECH PROJECT, 2021
** B-YEP-400-NAN-4-1-indiestudio-gildas.gonzalez [WSL: Ubuntu-20.04]
** File description:
** Attack
*/

#ifndef ATTACK_HPP_
#define ATTACK_HPP_

#include "Clock.hpp"
#include "Attacker.hpp"
#include "Presets.hpp"
#include "Entity.hpp"
#include <vector>
#include "Controls.hpp"

namespace ECS {
    class Attack {
        public:
            Attack() = default;
            ~Attack() = default;

            void manageBombs(std::vector<ECS::Entity> &entity);

        protected:
        private:
            void exploseBombs(std::vector<ECS::Entity> &entity);
            unsigned int _bombId = 0;
    };
};

#endif /* !ATTACK_HPP_ */
