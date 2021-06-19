/*
** EPITECH PROJECT, 2021
** B-YEP-400-NAN-4-1-indiestudio-gildas.gonzalez
** File description:
** Drawable
*/

#ifndef DRAWABLE_HPP_
#define DRAWABLE_HPP_

#include "IComponent.hpp"

namespace ECS {
    class Drawable : public ECS::IComponent {
        public:
            Drawable();

            unsigned int getTId() const;
            void setTId();
            bool loaded;

            static unsigned int currentTId;
        protected:
            unsigned int _tId;
        private:
    };
}
#endif /* !DRAWABLE_HPP_ */
