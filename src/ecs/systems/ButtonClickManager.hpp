/*
** EPITECH PROJECT, 2021
** B-YEP-400-NAN-4-1-indiestudio-gildas.gonzalez [WSL: Ubuntu-20.04]
** File description:
** ButtonClickManager
*/

#ifndef BUTTONCLICKMANAGER_HPP_
#define BUTTONCLICKMANAGER_HPP_

#include "Entity.hpp"
#include "Controls.hpp"
#include "Transform.hpp"
#include "Clickable.hpp"
#include "Collision.hpp"
#include "Drawable2D.hpp"
#include "MenuGenerator.hpp"
#include <vector>

namespace ECS {
    class ButtonClickManager {
        public:
            ButtonClickManager() = default;
            ~ButtonClickManager() = default;

            void checkButtonArea(std::vector<ECS::Entity> &entities);
            bool buttonIsOverflow(ECS::Entity &entity);
            bool buttonIsPressed(ECS::Entity &entity);

        protected:
        private:
            std::string getColoredSpritePath(std::string spritePath);
            std::string getUncoloredSpritePath(std::string spritePath);
    };
};

#endif /* !BUTTONCLICKMANAGER_HPP_ */
