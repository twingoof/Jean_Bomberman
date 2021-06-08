/*
** EPITECH PROJECT, 2021
** B-YEP-400-NAN-4-1-indiestudio-gildas.gonzalez
** File description:
** Model
*/

#ifndef MODEL_HPP_
#define MODEL_HPP_

#include "Vector3.hpp"
#include "raylib.h"
#include <vector>
#include <string>

namespace raylib {
    class Model: public ::Model {
        public:
            Model() = default;
            Model(const std::string &filePath);
            Model(const ::Mesh &basicMesh);
            Model(const ::Model &old);
            Model &operator=(const ::Model &old);
            ~Model();

            void unloadModel();
            ::Model loadModel(const std::string &filePath);
            void updateAnimation(::ModelAnimation modelAnim, int frame);

            void drawModel(void);
            void drawModel(::Vector3 position, float scale, ::Color tint = {255, 255, 255, 255});
            void drawModel(::Vector3 position, ::Vector3 rotationAxis, float rotationAngle, ::Vector3 scale, ::Color tint = {255, 255, 255, 255});

        protected:

        private:
            void setModel(const ::Model &model);

    };
};

#endif /* !MODEL_HPP_ */
