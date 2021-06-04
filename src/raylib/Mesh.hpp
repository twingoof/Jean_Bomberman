/*
** EPITECH PROJECT, 2021
** B-YEP-400-NAN-4-1-indiestudio-gildas.gonzalez
** File description:
** Mesh
*/

#ifndef MESH_HPP_
#define MESH_HPP_

#include "raylib.h"
#include <string>

namespace raylib {
    class Mesh: public ::Mesh {
        public:
            Mesh() = default;

            Mesh(const ::Mesh &oldMesh);

            Mesh &operator=(const ::Mesh &oldMesh);

            ~Mesh();

            void draw(const ::Material &meshMat, const ::Matrix &meshMatrix);

            void upload(bool isDynamic);

            void unload();

            void generatePlane(float width, float length, int resX, int resZ);

            void generateCube(float width, float height, float length);

            void generateSphere(float radius, int rings, int slices);

            bool exportMesh(const std::string &filePath);

        protected:

        private:
            void setMesh(const ::Mesh &oldMesh);

    };
}

#endif /* !MESH_HPP_ */
