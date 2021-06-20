/*
** EPITECH PROJECT, 2021
** B-YEP-400-NAN-4-1-indiestudio-gildas.gonzalez
** File description:
** Hud
*/

#ifndef HUD_HPP_
#define HUD_HPP_

#include "Entity.hpp"
#include <vector>

class Hud {
    public:
        Hud() = default;
        Hud(const std::vector<ECS::Entity> &gameEntites);
        Hud(const Hud &rHand) = default;
        Hud &operator=(const Hud &rHand) = default;
        ~Hud() = default;

    protected:
        void storeGameEntities(std::vector<ECS::Entity> gameEnts);

        std::vector<ECS::Entity> getGameEntities(void) const;

    private:
        std::vector<ECS::Entity> _gameEntities;

};

#endif /* !HUD_HPP_ */
