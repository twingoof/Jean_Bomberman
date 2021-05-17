/*
** EPITECH PROJECT, 2021
** B-YEP-400-NAN-4-1-indiestudio-gildas.gonzalez
** File description:
** RaylibAudio
*/

#ifndef RAYLIBAUDIO_HPP_
#define RAYLIBAUDIO_HPP_

#include <vector>

#include "raylib.h"

/**
 * @namespace Raylib
 */
namespace Raylib {
    // Audio device management functions

    /**
     * @brief Initialize audio device and context
     * @fn void initAudioDevice()
     */
    extern "C" void initAudioDevice();
    
    /**
     * @brief Close the audio device end context
     * @fn void closeAudioDevice()
     */
    extern "C" void closeAudioDevice();

    /**
     * @brief Check if the audio device has been initialized successfully  
     * @fn bool isAudioDeviceReady()
     * @return True if audio device is ready False otherwise
     */
    extern "C" bool isAudioDeviceReady();

    /**
     * @brief Set master volume (listener)
     * @fn void setMasterVolume(float volume)
     * @param volume Volume level
     */
    extern "C" void setMasterVolume(float volume);

    // Wave/Sound loading/unloading functions

    /**
     * @brief Load wave data from file
     * @fn Wave loadWave(const std::string& fileName)
     * @param fileName Path to the wave data file
     * @return Loaded wave
     */
    extern "C" Wave loadWave(const std::string& fileName);

    /**
     * @brief Load wave from memory buffer
     * @fn  Wave loadWaveFromMemory(const std::string& fileType, const std::vector<unsigned char> fileData)
     * @param fileType File type containing wave data
     * @param fileData Wave data
     * @return Loaded wave
     */
     extern "C" Wave loadWaveFromMemory(const std::string& fileType, const std::vector<unsigned char> fileData);

     /**
      * @brief Load sound from file
      * @fn Sound loadSound(const std::string& fileName)
      * @param fileName Path to the sound data file
      * @return Loaded sound
      */
      extern "C" Sound loadSound(const std::string& fileName);

      /**
       * @brief Load sound from wave data
       * @fn Sound loadSoundFromWave(Wave wave)
       * @param wave Wave to load sound from
       * @return Loaded sound
       */
       extern "C" Sound loadSoundFromWave(Wave wave);

       /**
        * @brief Update sound buffer with new data
        * @fn void updateSound(Sound sound, const void* data)
        * @param sound Sound to buffer to update
        */
        extern "C" void updateSound(Sound sound, const void* data);

        /**
         * @brief Unload wave data
         * @fn void unloadWave(Wave wave);
         * @param wave Wave to unload
         */
         extern "C" void unloadWave(Wave wave);

         /**
          * @brief Unload sound
          * @fn void unloadSound(Sound sound)
          * @param sound Sound to unload
          */
          extern "C" void unloadSound(Sound sound);

          /**
           * @brief Export wave data to file
           * @fn bool exportWave(Wave wave, const std::string& fileName)
           * @param wave Wave to export
           * @param fileName File to save wave
           * @return True on success False otherwise
           */
           extern "C" bool exportWave(Wave wave, const std::string& fileName);

           /**
            * @brief Export wave sample data to code (.h)
            * @fn bool exportWaveAsCode(Wave wave, const std::string& fileName);
            * @param wave Wave to export
            * @param fileName File to save wave
            * @return True on success False otherwise
            */
            extern "C" bool exportWaveAsSound(Wave wave, const std::string& fileName);

            // Wave/Sound management functions

            /**
             * @brief Play a sound
             * @fn void playSound(Sound sound);
             * @param sound Sound to play
             */
             extern "C" void playSound(Sound sound);
}

#endif /* !RAYLIBAUDIO_HPP_ */
