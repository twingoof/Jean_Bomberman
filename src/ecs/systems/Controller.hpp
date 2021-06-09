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

namespace ECS {
    class Controller {
        public:
            Controller() = default;
            Controller(const Controller &oldController) = default;
            Controller &operator=(const Controller &oldController) = default;
            ~Controller() = default;

            void moveEntity(ECS::Entity &entity);

        protected:
        private:
    };
};

#endif /* !CONTROLLER_HPP_ */