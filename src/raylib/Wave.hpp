/*
** EPITECH PROJECT, 2021
** B-YEP-400-NAN-4-1-indiestudio-gildas.gonzalez
** File description:
** Wave
*/

#ifndef WAVE_HPP_
#define WAVE_HPP_

#include "raylib.h"
#include <string>

namespace raylib {
    class Wave : public ::Wave {
        public:
            Wave() = default;
            Wave(const ::Wave &oldWave);
            Wave(const std::string &filePath);
            Wave &operator=(const ::Wave &oldWave);

            ~Wave();

            void loadWave(const std::string &filePath);

            void unloadWave();

        protected:

        private:
            void setWave(const ::Wave &oldWave);

    };
};

#endif /* !WAVE_HPP_ */