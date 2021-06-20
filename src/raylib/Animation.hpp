/*
** EPITECH PROJECT, 2021
** B-YEP-400-NAN-4-1-indiestudio-gildas.gonzalez
** File description:
** Animation
*/

/**
 * @file Animation.hpp
 * @author gildas.gonzalez@epitech.eu; pierrick.prost@epitech.eu; pierrick.prost@epitech.eu; valentin.bouchet@epitech.eu; mathis.ragot@epitech.eu
 * @brief File that contain the Animation class
 * @version 0.1
 * @date 2021-06-18
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#ifndef ANIMATION_HPP_
#define ANIMATION_HPP_

#include "raylib.h"
#include <string>
#include <vector>
#include <memory>

/**
 * @namespace raylib
 */
namespace raylib {
    /**
     * @class Animation Animation.hpp "src/raylib/Animation.hpp"
     */
    class Animation: public ::ModelAnimation {
        public:
            /**
             * @fn Animation() = default
             * @brief Construct a new Animation object
             * 
             */
            Animation() = default;

            /**
             * @fn Animation(const ::ModelAnimation &old)
             * @brief Construct a new Animation object
             * 
             * @param old Animation to copy
             */
            Animation(const ::ModelAnimation &old);

            /**
             * @fn Animation &operator=(const ::ModelAnimation &old)
             * @brief Copy a old ::ModelAnimation object
             * 
             * @param old Animation to copy
             */
            Animation &operator=(const ::ModelAnimation &old);

            /**
             * @fn ~Animation() = default
             * @brief Destroy a new Animation object
             */
            ~Animation();

            /**
             * @fn void updateAnimation(::Model &model, int frame)
             * @brief Update the model animation on frame number
             * 
             * @param model Model to update
             * @param frame Update done on frame number of frame
             */
            void updateAnimation(::Model &model, int frame);

            /**
             * @fn void unloadAnimation()
             * @brief Unload the model animation
             */
            void unloadAnimation();

            /**
             * @fn bool isModelAnimationValid(::Model &model)
             * @brief Checks if the animation is valid
             * 
             * @param model Model having the animation
             * @return true If animation is valid
             * @return false If animation isn't valid
             */
            bool isModelAnimationValid(::Model &model);

        protected:

        private:
            /**
             * @fn void setModelAnimation(const ::ModelAnimation &model)
             * @brief Set every variable member of the Animation
             * 
             * @param model ModelAnimation to copy in class
             */
            void setModelAnimation(const ::ModelAnimation &model);

    };

    /**
     * @fn void unloadModelAnimations(std::vectorq<::ModelAnimation> modelAnimation, unsigned int count)
     * @brief Unload Model Animation frames
     * 
     * @param modelAnimations Model Animation to unload
     * @param count Frames to unload
     */
    void unloadModelAnimations(std::vector<::ModelAnimation> modelAnimations, unsigned int count);

    /**
     * @fn std::vector<raylib::Animation> loadAnimations(const std::string &filePath, int animsCount)
     * @brief Load Model Animations from a valid file
     * 
     * @param filePath Path to the model animation file
     * @param animsCount Number of frame to load
     * @return std::vector<raylib::Animation> Vector of animation loaded
     */
    std::vector<raylib::Animation> loadAnimations(const std::string &filePath, int animsCount);

};

#endif /* !ANIMATION_HPP_ */