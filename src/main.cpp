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
#include "Drawable.hpp"
#include "Renderer.hpp"
#include "Presets.hpp"
#include "Controller.hpp"
#include "Text.hpp"
#include "Displacer.hpp"
#include "Transform.hpp"
#include "MapGenerator.hpp"
#include "vectors/ECSVector.hpp"

unsigned int ECS::Drawable3D::currentId = 0;

//int main()
//{
//    std::vector<ECS::Drawable2D> v;
//
//    for (int i = 0; i <= 10; i++) {
//        ECS::Drawable2D d("../assets/skin.png", {10, 10, 10}, ECS::CIRCLE);
//        v.push_back(d);
//    }
//
//    for (const auto& item : v) {
//        std::cout<<"Id: "<<item.getId()<<" Size: "<<item.getSize().X<<" "<<item.getSize().Y<<" "<<item.getSize().Z<<std::endl;
//    }
//}

int main()
{
    std::vector<ECS::Entity> v;
//    v.push_back(Presets::createWall("pouet", {0.0f, 0.0f, 0.0f}));
    ECS::Renderer r;
    raylib::Window &window = raylib::Window::getWindow();
    window.initWindow(1600, 900, "Bojour", FLAG_WINDOW_RESIZABLE);
    raylib::Camera3D camera3D({20, 20, 0}, {0, 0, 0}, {0, 1, 0}, 45, CAMERA_PERSPECTIVE);
    window.setMainCamera(camera3D);
    ECS::Drawable2D d2("../assets/skin.png", {10, 10, 10}, ECS::CUSTOM);
    ECS::Transform t({50.f, 50.f, 50.f}, {20, 20, 20});
    ECS::Entity e;
    e.addComponent<ECS::Drawable2D>(d2, ECS::DRAWABLE2D);
    e.addComponent<ECS::Transform>(t, ECS::TRANSFORM);
    v.push_back(e);

    while (!window.windowShouldClose()) {
        r.draw(v);
    }
}