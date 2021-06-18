/*
** EPITECH PROJECT, 2021
** B-YEP-400-NAN-4-1-indiestudio-gildas.gonzalez
** File description:
** Sound
*/

/**
 * @file Sound.hpp
 * @author gildas.gonzalez@epitech.eu; pierrick.prost@epitech.eu; pierrick.prost@epitech.eu; valentin.bouchet@epitech.eu; mathis.ragot@epitech.eu
 * @brief File that contain the Sound class
 * @version 0.1
 * @date 2021-06-18
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#ifndef SOUND_HPP_
#define SOUND_HPP_

#include "raylib.h"
#include <string>

namespace raylib {
    /**
     * @class Sound Sound.hpp "src/raylib/Sound.hpp"
     */
    class Sound: public ::Sound {
        public:
            /**
             * @fn Sound() = default
             * @brief Construct a new Sound object
             */
            Sound() = default;

            /**
             * @fn Sound(const std::string &filePath)
             * @brief Construct a new Sound object
             * 
             * @param filePath File path to sound
             */
            Sound(const std::string &filePath);

            /**
             * @fn Sound(const ::Sound &oldSound)
             * @brief Construct a new Sound object
             * 
             * @param oldSound Sound to copy
             */
            Sound(const ::Sound &oldSound);

            /**
             * @fn Sound &operator=(const ::Sound &oldSound)
             * @brief Copy a sound from an existing one
             * 
             * @param oldSound Sound to copy
             * @return Sound& Copied sound
             */
            Sound &operator=(const ::Sound &oldSound);

            /**
             * @fn void playSound(void) const
             * @brief Plays sound
             * 
             */
            void playSound(void) const;

            /**
             * @fn void stopSound(void) const
             * @brief Stops sound
             * 
             */
            void stopSound(void) const;

            /**
             * @fn void pauseSound(void) const
             * @brief Pauses sound
             * 
             */
            void pauseSound(void) const;

            /**
             * @fn void resumeSound(void) const
             * @brief Resumes a paused sound
             * 
             */
            void resumeSound(void) const;

            /**
             * @fn void loadSound(const std::string &filePath)
             * @brief Load a sound from file
             * 
             * @param filePath Path to the file
             */
            void loadSound(const std::string &filePath);

            /**
             * @fn void loadFromWave(const ::Wave &wave)
             * @brief Load a sound from a Wave
             * 
             * @param wave Wave object
             */
            void loadFromWave(const ::Wave &wave);

            /**
             * @fn bool isPlaying(void) const
             * @brief Tells if sound is playing
             * 
             * @return true If is playing
             * @return false Otherwise
             */
            bool isPlaying(void) const;

            /**
             * @fn void unloadSound() const;
             * @brief Unload a sound from VRAM
             * 
             */
            void unloadSound() const;

            /**
             * @fn ~Sound()
             * @brief Destroy the Sound object
             * 
             */
            ~Sound();

        protected:

        private:
            /**
             * @fn void setSound(const ::Sound &oldSound)
             * @brief Set the Sound object
             * 
             * @param oldSound Sound to copy
             */
            void setSound(const ::Sound &oldSound);

    };
};

#endif /* !SOUND_HPP_ */