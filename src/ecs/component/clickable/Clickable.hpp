/*
** EPITECH PROJECT, 2021
** B-YEP-400-NAN-4-1-indiestudio-gildas.gonzalez
** File description:
** Clickable
*/

#ifndef CLICKABLE_HPP_
#define CLICKABLE_HPP_

class Clickable {
    public:
        Clickable(void(*callback)());
        Clickable();
        ~Clickable();
        void callback();
        void setCallback(void(*callback)());
        void (*getCallback())();

    private:
        void(*_callback)();
};

#endif /* !CLICKABLE_HPP_ */