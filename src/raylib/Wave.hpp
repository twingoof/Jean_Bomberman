/*
** EPITECH PROJECT, 2021
** B-YEP-400-NAN-4-1-indiestudio-gildas.gonzalez
** File description:
** Wave
*/

/**
 * @file Wave.hpp
 * @author gildas.gonzalez@epitech.eu; pierrick.prost@epitech.eu; pierrick.prost@epitech.eu; valentin.bouchet@epitech.eu; mathis.ragot@epitech.eu
 * @brief File that contain the Wave class
 * @version 0.1
 * @date 2021-06-18
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#ifndef WAVE_HPP_
#define WAVE_HPP_

#include "raylib.h"
#include <string>

namespace raylib {
    /**
     * @class Wave Wave.hpp "src/raylib/Wave.hpp"
     */
    class Wave : public ::Wave {
        public:
            /**
             * @fn Wave() = default
             * @brief Construct a new Wave object
             * 
             */
            Wave() = default;

            /**
             * @fn Wave(const ::Wave &oldWave)
             * @brief Construct a new Wave object
             * 
             * @param oldWave Wave to copy
             */
            Wave(const ::Wave &oldWave);

            /**
             * @fn Wave(const std::string &filePath)
             * @brief Construct a new Wave object
             * 
             * @param filePath File path to wave
             */
            Wave(const std::string &filePath);

            /**
             * @fn Wave &operator=(const ::Wave &oldWave)
             * @brief Copy a Wave object from an existing one
             * 
             * @param oldWave Existing Wave
             * @return Wave& Copied wave object
             */
            Wave &operator=(const ::Wave &oldWave);

            /**
             * @fn ~Wave()
             * @brief Destroy the Wave object
             * 
             */
            ~Wave();

            /**
             * @fn void loadWave(const std::string &filePath)
             * @brief Load a wave object from a file
             * 
             * @param filePath Filepath to the wave file
             */
            void loadWave(const std::string &filePath);

            /**
             * @fn void unloadWave()
             * @brief Unload Wave Object from VRAM
             * 
             */
            void unloadWave();

        protected:

        private:
            /**
             * @fn void setWave(const ::Wave &oldWave)
             * @brief Set the Wave object
             * 
             * @param oldWave Wave object to copy
             */
            void setWave(const ::Wave &oldWave);

    };
};

#endif /* !WAVE_HPP_ */