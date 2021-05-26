/*
** EPITECH PROJECT, 2021
** B-YEP-400-NAN-4-1-indiestudio-gildas.gonzalez
** File description:
** Button
*/

#ifndef BUTTON_HPP_
#define BUTTON_HPP_

#include "IEntity.hpp"

class Button:public IEntity {
    public:
        Button();
        ~Button();
        void display() override;

    protected:
    private:
};

#endif /* !BUTTON_HPP_ */
