/*
** EPITECH PROJECT, 2021
** B-YEP-400-NAN-4-1-indiestudio-gildas.gonzalez
** File description:
** Music
*/

/**
 * @file Music.hpp
 * @author gildas.gonzalez@epitech.eu; pierrick.prost@epitech.eu; pierrick.prost@epitech.eu; valentin.bouchet@epitech.eu; mathis.ragot@epitech.eu
 * @brief File that contain the Music class
 * @version 0.1
 * @date 2021-06-18
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#ifndef MUSIC_HPP_
#define MUSIC_HPP_

#include "raylib.h"
#include <string>

/**
 * @namespace raylib
 */
namespace raylib {
    /**
     * @class Music Music.hpp "src/raylib/Music.hpp"
     */
    class Music : public ::Music {
        public:
            /**
             * @fn Music() = default
             * @brief Construct a new Music object
             * 
             */
            Music() = default;

            /**
             * @fn Music(const std::string &filePath)
             * @brief Construct a new Music object
             * 
             * @param filePath File path to the music
             */
            Music(const std::string &filePath);

            /**
             * @fn Music(const Music &rHand)
             * @brief Construct a new Music object
             * 
             * @param rHand Music object to copy
             */
            Music(const Music &rHand);

            /**
             * @fn Music &operator=(const Music &rHand)
             * @brief Set a Music object from an existing one
             * 
             * @param rHand Existing Music object
             * @return Music& Copied Music
             */
            Music &operator=(const Music &rHand);

            /**
             * @fn ~Music()
             * @brief Destroy the Music object
             */
            ~Music();

            /**
             * @fn void loadMusicFromFile(const std::string &filePath)
             * @brief Load a music from a File
             * 
             * @param filePath Path to the music file
             */
            void loadMusicFromFile(const std::string &filePath);

            /**
             * @fn void launch()
             * @brief Launches the music
             */
            void launch();

            /**
             * @fn void pause()
             * @brief Pause the music
             * 
             */
            void pause();

            /**
             * @fn void resume()
             * @brief Resume a paused music
             * 
             */
            void resume();

            /**
             * @fn void stop()
             * @brief Stops a music
             * 
             */
            void stop();

            /**
             * @fn void updateMusic
             * @brief Update a music buffer
             * 
             */
            void updateMusic();

            /**
             * @fn void setVolume(float volumeVal)
             * @brief Set the music's volume
             * 
             * @param volumeVal Music value
             */
            void setVolume(float volumeVal);

            /**
             * @fn void unload()
             * @brief Unload a music from VRAM
             * 
             */
            void unload();

            /**
             * @fn bool isPlaying() const;
             * @brief Checks if the current music is playing
             * 
             * @return true If it's playing
             * @return false Otherwise
             */
            bool isPlaying() const;

        protected:

        private:
            bool _isLoaded;
            bool _isPlaying;

            /**
             * @fn void setMusic(const ::Music &rHand)
             * @brief Set the music from an existing one
             * 
             * @param rHand Music object to copy
             */
            void setMusic(const ::Music &rHand);

    };
};

#endif /* !MUSIC_HPP_ */
