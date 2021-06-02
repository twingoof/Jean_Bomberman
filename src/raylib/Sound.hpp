/*
** EPITECH PROJECT, 2021
** B-YEP-400-NAN-4-1-indiestudio-gildas.gonzalez
** File description:
** Sound
*/

#ifndef SOUND_HPP_
#define SOUND_HPP_

#include "raylib.h"
#include <string>

namespace raylib {
    class Sound: public ::Sound {
        public:
            Sound() = default;

            Sound(const std::string &filePath);

            Sound(const ::Sound &oldSound);

            Sound &operator=(const ::Sound &oldSound);

            void playSound(void) const;

            void stopSound(void) const;

            void pauseSound(void) const;

            void resumeSound(void) const;

            void loadSound(const std::string &filePath);

            void loadFromWave(const ::Wave &wave);

            bool isPlaying(void) const;

            void unloadSound() const;

            ~Sound();

        protected:

        private:
            void setSound(const ::Sound &oldSound);

    };
};

#endif /* !SOUND_HPP_ */