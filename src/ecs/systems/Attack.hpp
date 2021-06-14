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
#include "GetEntityInVector.hpp"

namespace ECS {
    class Attack {
        public:
            Attack() = default;
            ~Attack() = default;

            void manageBombs(std::vector<ECS::Entity> &entity);

        protected:
        private:
            void exploseBombs(std::vector<ECS::Entity> &entity);
            void manageErase(std::vector<ECS::Entity> &entities, ECS::Entity &bomb);
            void killPosKillable(std::vector<ECS::Entity> &entities, ECS::Entity &bomb);
            bool killTopKillable(std::vector<ECS::Entity> &entities, ECS::Entity &bomb, int spaceBtwEnt);
            bool killBotKillable(std::vector<ECS::Entity> &entities, ECS::Entity &bomb, int spaceBtwEnt);
            bool killLeftKillable(std::vector<ECS::Entity> &entities, ECS::Entity &bomb, int spaceBtwEnt);
            bool killRightKillable(std::vector<ECS::Entity> &entities, ECS::Entity &bomb, int spaceBtwEnt);
            ECS::Vector3<float> _findBombPos(ECS::Transform playerT);
            bool posIsColliding(ECS::Transform t1, ECS::Transform t2, int t2_x_multiplicator, int t2_y_multiplicator);
            
            unsigned int _bombId = 0;
    };
};

#endif /* !ATTACK_HPP_ */
