/*
** EPITECH PROJECT, 2021
** B-YEP-400-NAN-4-1-indiestudio-gildas.gonzalez
** File description:
** Controller
*/

#ifndef CONTROLLER_HPP_
#define CONTROLLER_HPP_

#include "Displacer.hpp"
#include "Controls.hpp"
#include "Moveable.hpp"
#include "Window.hpp"
#include "Entity.hpp"
#include "Sound.hpp"

namespace ECS {
    class Controller {
        public:
            Controller();
            Controller(const Controller &oldController) = default;
            Controller &operator=(const Controller &oldController) = default;
            ~Controller() = default;

            void moveEntity(std::vector<ECS::Entity> &entity);
            bool canMoveTop(std::vector<ECS::Entity> &entity, ECS::Entity &player, float speed);
            bool canMoveDown(std::vector<ECS::Entity> &entity, ECS::Entity &player, float speed);
            bool canMoveRight(std::vector<ECS::Entity> &entity, ECS::Entity &player, float speed);
            bool canMoveLeft(std::vector<ECS::Entity> &entity, ECS::Entity &player, float speed);

        protected:
        private:
            raylib::Sound collectBonus;
    };
};

#endif /* !CONTROLLER_HPP_ */