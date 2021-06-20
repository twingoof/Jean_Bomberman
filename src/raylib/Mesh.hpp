/*
** EPITECH PROJECT, 2021
** B-YEP-400-NAN-4-1-indiestudio-gildas.gonzalez
** File description:
** Mesh
*/

/**
 * @file Mesh.hpp
 * @author gildas.gonzalez@epitech.eu; pierrick.prost@epitech.eu; pierrick.prost@epitech.eu; valentin.bouchet@epitech.eu; mathis.ragot@epitech.eu
 * @brief File that contain the Mesh class
 * @version 0.1
 * @date 2021-06-18
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#ifndef MESH_HPP_
#define MESH_HPP_

#include "raylib.h"
#include <string>

/**
 * @namespace raylib
 */
namespace raylib {
    /**
     * @class Mesh Mesh.hpp "src/raylib/Mesh.hpp"
     */
    class Mesh: public ::Mesh {
        public:
            /**
             * @fn Mesh() = default
             * @brief Construct a new Mesh object
             * 
             */
            Mesh() = default;

            /**
             * @fn Mesh(const ::Mesh &oldMesh)
             * @brief Construct a new Mesh object
             * 
             * @param oldMesh oldMesh to copy
             */
            Mesh(const ::Mesh &oldMesh);

            /**
             * @fn Mesh &operator=(const ::Mesh &oldMesh)
             * @brief Creates a Mesh object from an existing one
             * 
             * @param oldMesh Mesh to copy
             * @return Mesh& Copied mesh
             */
            Mesh &operator=(const ::Mesh &oldMesh);

            /**
             * @fn ~Mesh()
             * @brief Destroy the Mesh object
             */
            ~Mesh();

            /**
             * @fn void draw(const ::Material &meshMat, const ::Matrix &meshMatrix)
             * @brief Draw a Mesh with a Material and a Matrix
             * 
             * @param meshMat Mesh material
             * @param meshMatrix Mesh Matrix
             */
            void draw(const ::Material &meshMat, const ::Matrix &meshMatrix);

            /**
             * @fn void upload(bool isDynamic)
             * @brief Upload a non-dynamic / dynamic Mesh
             * 
             * @param isDynamic Tells if the Mesh is a dynamic mesh
             */
            void upload(bool isDynamic);

            /**
             * @fn void unload()
             * @brief Unload the Mesh from VRAM
             */
            void unload();

            /**
             * @fn void generatePlane(float width, float length, int resX, int resZ)
             * @brief Generates a plan
             * 
             * @param width Plan width
             * @param length Plan length
             * @param resX Plan starting X position
             * @param resZ Plan starting Y position
             */
            void generatePlane(float width, float length, int resX, int resZ);

            /**
             * @fn void generateCube(float width, float height, float length)
             * @brief Generates a Cube
             * 
             * @param width Cube's width
             * @param height Cube's height
             * @param length Cube's length
             */
            void generateCube(float width, float height, float length);

            /**
             * @fn void generateSphere(float radius, int rings, int slices)
             * @brief void generateSphere(float radius, int rings, int slices)
             * 
             * @param radius Sphere radius
             * @param rings Sphere rings number
             * @param slices Sphere slices number
             */
            void generateSphere(float radius, int rings, int slices);

            /**
             * @fn bool exportMesh(const std::string &filePath)
             * @brief Export a Mesh into a file
             * 
             * @param filePath File path to exported file
             * @return true If export is successful
             * @return false Otherwise
             */
            bool exportMesh(const std::string &filePath);

        protected:

        private:
            /**
             * @fn void setMesh(const ::Mesh &oldMesh)
             * @brief Set a Mesh from an existing Mesh
             * 
             * @param oldMesh Mesh to copy
             */
            void setMesh(const ::Mesh &oldMesh);

    };
}

#endif /* !MESH_HPP_ */
