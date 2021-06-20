/*
** EPITECH PROJECT, 2021
** B-YEP-400-NAN-4-1-indiestudio-gildas.gonzalez
** File description:
** Audio
*/

/**
 * @file Animation.hpp
 * @author gildas.gonzalez@epitech.eu; pierrick.prost@epitech.eu; pierrick.prost@epitech.eu; valentin.bouchet@epitech.eu; mathis.ragot@epitech.eu
 * @brief File that contain the Audio class
 * @version 0.1
 * @date 2021-06-18
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#ifndef AUDIO_HPP_
#define AUDIO_HPP_

#include "raylib.h"

/**
 * @namespace raylib
 */
namespace raylib {
    /**
     * @class Audio Audio.hpp "src/raylib/Audio.hpp"
     */
    class Audio {
        public:
            /**
             * @fn static Audio &getAudioDevice()
             * @brief Get the Audio Device
             * 
             * @return Audio& 
             */
            static Audio &getAudioDevice();

            /**
             * @fn void initAudioDevice(void)
             * @brief Init the audio
             */
            void initAudioDevice(void);

            /**
             * @fn bool isReady(void) const
             * @brief Tell if the audio is ready
             * 
             * @return true 
             * @return false 
             */
            bool isReady(void) const;

            /**
             * @fn void setMasterVolume(float volumeValue) const
             * @brief Set the Master Volume
             * 
             * @param volumeValue volume
             */
            void setMasterVolume(float volumeValue) const;

            /**
             * @fn void closeAudioDevice(void)
             * @brief Close the audio device
             */
            void closeAudioDevice(void);

            /**
             * @fn ~Audio()
             * @brief Destroy the Audio
             */
            ~Audio();

        protected:

        private:
            bool _isInitialized;

            // Deleted functions for singleton instance
            Audio();
            Audio(const Audio &audioDevice) = delete;
            Audio &operator=(const Audio &audioDevice) = delete;

    };
};

#endif /* !AUDIO_HPP_ */