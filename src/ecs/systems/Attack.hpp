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
            void rangeExplosion(std::vector<ECS::Entity> &entity);
            void manageErase(std::vector<ECS::Entity> &entities, ECS::Entity &bomb);
            ECS::Entity &getTopKillable(std::vector<ECS::Entity> &entities, ECS::Entity &bomb);
            ECS::Entity &getBotKillable(std::vector<ECS::Entity> &entities, ECS::Entity &bomb);
            ECS::Entity &getLeftKillable(std::vector<ECS::Entity> &entities, ECS::Entity &bomb);
            ECS::Entity &getRightKillable(std::vector<ECS::Entity> &entities, ECS::Entity &bomb);
            bool killTopKillable(std::vector<ECS::Entity> &entities, ECS::Entity &entity, int spaceBtwEnt);
            bool killBotKillable(std::vector<ECS::Entity> &entities, ECS::Entity &entity, int spaceBtwEnt);
            bool killLeftKillable(std::vector<ECS::Entity> &entities, ECS::Entity &entity, int spaceBtwEnt);
            bool killRightKillable(std::vector<ECS::Entity> &entities, ECS::Entity &entity, int spaceBtwEnt);
            
            unsigned int _bombId = 0;
    };
};

#endif /* !ATTACK_HPP_ */
