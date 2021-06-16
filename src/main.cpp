/*
** EPITECH PROJECT, 2021
** indie
** File description:
** TODO: add description
*/

#include "Collider.hpp"
#include "Moveable.hpp"
#include "Window.hpp"
#include "Camera.hpp"
#include "Displacer.hpp"
#include "Renderer.hpp"
#include "Presets.hpp"
#include "Controller.hpp"
#include "Text.hpp"
#include "Displacer.hpp"
#include "Transform.hpp"
#include "MapGenerator.hpp"
#include "vectors/ECSVector.hpp"

unsigned int ECS::Drawable3D::currentId = 0;

int main()
{
    std::vector<ECS::Drawable3D> v;

    for (int i = 0; i <= 10; i++) {
        ECS::Drawable3D d(ECS::CIRCLE, {i, i, i});
        v.push_back(d);
    }

    for (const auto& item : v) {
        std::cout<<"Id: "<<item.getId()<<" Size: "<<item.getSize().X<<" "<<item.getSize().Y<<" "<<item.getSize().Z<<std::endl;
    }
}