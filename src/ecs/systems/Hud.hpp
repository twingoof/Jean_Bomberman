/*
** EPITECH PROJECT, 2021
** B-YEP-400-NAN-4-1-indiestudio-gildas.gonzalez
** File description:
** Hud
*/

#ifndef HUD_HPP_
#define HUD_HPP_

#include "GetEntityInVector.hpp"
#include "Transform.hpp"
#include "Presets.hpp"
#include "Entity.hpp"
#include <vector>

namespace ECS {
    class Hud {
        public:
            Hud() = default;
            Hud(std::vector<ECS::Entity> &gameEntites);
            Hud(const Hud &rHand) = default;
            Hud &operator=(const Hud &rHand) = default;
            ~Hud() = default;

            void createHudEntities(std::vector<ECS::Entity> &gameEntities);

            void updateHudEntities(std::vector<ECS::Entity> &gameEntities, int width, int height);

        protected:

        private:

    };
};

#endif /* !HUD_HPP_ */
