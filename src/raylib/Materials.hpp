/*
** EPITECH PROJECT, 2021
** B-YEP-400-NAN-4-1-indiestudio-gildas.gonzalez
** File description:
** Material
*/

#ifndef MATERIAL_HPP_
#define MATERIAL_HPP_

#include "raylib.h"
#include <vector>
#include <string>

namespace raylib {
    class Material: public ::Material {
        public:
            Material();

            Material(const ::Material &oldMat);

            Material &operator=(const ::Material &oldMat);

            ~Material();

            void unloadMat();

            void loadDefault();

            void setTexture(int mapType, const ::Texture &texture);

        protected:

        private:
            void setMaterial(const ::Material &oldMat);

    };

    std::vector<raylib::Material> loadMaterials(const std::string &filePath, int materialCount);
};

#endif /* !MATERIAL_HPP_ */