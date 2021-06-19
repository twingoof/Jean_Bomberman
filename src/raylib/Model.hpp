/*
** EPITECH PROJECT, 2021
** B-YEP-400-NAN-4-1-indiestudio-gildas.gonzalez
** File description:
** Model
*/

/**
 * @file Model.hpp
 * @author gildas.gonzalez@epitech.eu; pierrick.prost@epitech.eu; pierrick.prost@epitech.eu; valentin.bouchet@epitech.eu; mathis.ragot@epitech.eu
 * @brief File that contain the Model class
 * @version 0.1
 * @date 2021-06-18
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#ifndef MODEL_HPP_
#define MODEL_HPP_

#include "Vector3.hpp"
#include "raylib.h"
#include <vector>
#include <string>

namespace raylib {
    /**
     * @class Model Model.hpp "src/raylib/Model.hpp"
     */
    class Model: public ::Model {
        public:
            /**
             * @fn Model() = default
             * @brief Construct a new Model object
             * 
             */
            Model() = default;

            /**
             * @fn Model(const std::string filePath)
             * @brief Construct a new Model object
             * 
             * @param filePath Path to model file
             */
            Model(const std::string &filePath);

            /**
             * @fn Model(const ::Mesh &basicMesh)
             * @brief Construct a new Model object
             * 
             * @param basicMesh Mesh to create a Model with
             */
            Model(const ::Mesh &basicMesh);

            /**
             * @fn Model(const ::Model &old)
             * @brief Construct a new Model object
             * 
             * @param old Existing model
             */
            Model(const ::Model &old);

            /**
             * @fn Model &operator=(const ::Model &old)
             * @brief Copy a Model from an existing one
             * 
             * @param old Existing model
             * @return Model& Copied Model
             */
            Model &operator=(const ::Model &old);

            /**
             * @fn ~Model()
             * @brief Destroy the Model object
             */
            ~Model();

            /**
             * @fn void unloadModel()
             * @brief Unload Model from VRAM
             * 
             */
            void unloadModel();

            /**
             * @fn ::Model loadModel(const std::string &filePath)
             * @brief Load Model from a File passed as parameter
             * 
             * @param filePath Path to the model file
             * @return ::Model Created Model
             */
            ::Model loadModel(const std::string &filePath);

            /**
             * @fn void updateAnimation(::ModelAnimation modelAnim, int frame)
             * @brief Update Model Animation on frame number
             * 
             * @param modelAnim ModelAnimation to update
             * @param frame Number of frame to update
             */
            void updateAnimation(::ModelAnimation modelAnim, int frame);

            /**
             * @fn void drawModel()
             * @brief Draw a model without parameters
             * 
             */
            void drawModel(void);

            /**
             * @fn void drawModel(::Vector3 position, float scale, ::Color tint = {255, 255, 255, 255})
             * @brief Draw a model with parameters
             * 
             * @param position Position of the model to draw
             * @param scale Model's scale to draw
             * @param tint Model's tint
             */
            void drawModel(::Vector3 position, float scale, ::Color tint = {255, 255, 255, 255});

            /**
             * @fn void drawModel(::Vector3 position, ::Vector3 rotationAxis, float rotationAngle, ::Vector3 scale, ::Color tint = {255, 255, 255, 255})
             * @brief Draws a model with parameters
             * 
             * @param position Model's position to draw
             * @param rotationAxis Model's rotation Axis
             * @param rotationAngle Model's rotation angle
             * @param scale Model's scale
             * @param tint Model's tint to draw
             */
            void drawModel(::Vector3 position, ::Vector3 rotationAxis, float rotationAngle, ::Vector3 scale, ::Color tint = {255, 255, 255, 255});

        protected:

        private:
            /**
             * @fn void setModel(const ::Model &model)
             * @brief Set Model from an existing one
             * 
             * @param model Model to copy
             */
            void setModel(const ::Model &model);

    };
};

#endif /* !MODEL_HPP_ */
