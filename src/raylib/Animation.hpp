/*
** EPITECH PROJECT, 2021
** B-YEP-400-NAN-4-1-indiestudio-gildas.gonzalez
** File description:
** Animation
*/

#ifndef ANIMATION_HPP_
#define ANIMATION_HPP_

#include "raylib.h"
#include <string>
#include <vector>
#include <memory>

namespace raylib {
    class Animation: public ::ModelAnimation {
        public:
            Animation() = default;
            Animation(const ::ModelAnimation &old);
            Animation &operator=(const ::ModelAnimation &old);

            ~Animation();

            void updateAnimation(::Model &model, int frame);
            void unloadAnimation();

            bool isModelAnimationValid(::Model &model);

        protected:

        private:
            void setModelAnimation(const ::ModelAnimation &model);

    };

    void unloadModelAnimations(std::vector<::ModelAnimation> modelAnimations, unsigned int count);

    std::vector<raylib::Animation> loadAnimations(const std::string &filePath, int animsCount);

};

#endif /* !ANIMATION_HPP_ */