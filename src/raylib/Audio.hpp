/*
** EPITECH PROJECT, 2021
** B-YEP-400-NAN-4-1-indiestudio-gildas.gonzalez
** File description:
** Audio
*/

#ifndef AUDIO_HPP_
#define AUDIO_HPP_

#include "raylib.h"

namespace raylib {
    class Audio {
        public:
            static Audio &getAudioDevice();

            void initAudioDevice(void);
            bool isReady(void) const;
            void setMasterVolume(float volumeValue) const;
            void closeAudioDevice(void);

            ~Audio();

        protected:

        private:
            bool _isInitialized;

            // Deleted functions for singketon instance
            Audio();
            Audio(const Audio &audioDevice) = delete;
            Audio &operator=(const Audio &audioDevice) = delete;

    };
};

#endif /* !AUDIO_HPP_ */