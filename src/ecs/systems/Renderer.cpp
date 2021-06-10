/*
** EPITECH PROJECT, 2021
** indie
** File description:
** ECS Renderer system
*/

#include "Renderer.hpp"

#include "Circle.hpp"
#include "Image.hpp"
#include "Model.hpp"
#include "Rectangle.hpp"
#include "Text.hpp"
#include "Texture.hpp"
#include "Transform.hpp"

ECS::Renderer::Renderer() = default;

ECS::Renderer::~Renderer() = default;

void ECS::Renderer::draw(const std::map<std::string, std::shared_ptr<ECS::Entity>>& entities) {
    bool noDraw;

    for (const auto &entity : entities) {
        noDraw = false;
        try {
            ECS::Drawable2D drawable = entity.second.get()->getComponent<ECS::Drawable2D>(DRAWABLE2D);
            this->_draw2D(entity.second.get()->getComponent<Transform>(TRANSFORM).getPosition(), drawable);
        }
        catch (std::out_of_range &e) {
            noDraw = true;
        }

        try {
            ECS::Drawable3D drawable = entity.second.get()->getComponent<ECS::Drawable3D>(DRAWABLE3D);
            this->_draw3D(entity.second.get()->getComponent<Transform>(TRANSFORM).getPosition(), drawable);

        } catch (std::out_of_range &e) {
            noDraw = true;
        }

        if (!noDraw)
            std::cerr<<"ERROR: "<<"entity"<<" has no Drawabale component."<<std::endl;
    }
}

void ECS::Renderer::_draw2D(const ECS::Vector3<float>& position, const ECS::Drawable2D& drawable)
{
    switch (drawable.getType()) {

        case CIRCLE:
            raylib::drawCircle(position.X, position.Y, position.Z);
            break;
        case RECT:
            raylib::drawRectangle(position.X, position.Y, drawable.getSize().X, drawable.getSize().Y);
            break;
        case CUSTOM:
            raylib::Image img;
            raylib::Texture tex;
            ECS::Vector4<unsigned char> col = {255, 255, 255, 255};
            std::cout<<"pouet"<<std::endl;
            img.loadImage(drawable.getSpritePath());
            tex.loadFromImage(img);
            raylib::drawTexture(tex, position.X, position.Y, WHITE);
            
            break;
    }
}

void ECS::Renderer::_draw3D(const ECS::Vector3<float>& position, const ECS::Drawable3D& drawable)
{
    raylib::Model model;
    switch (drawable.getType())
    {
    case CIRCLE:
        DrawSphere({position.X, position.Y, position.Z}, drawable.getSize().X, MAGENTA);
        DrawSphereWires({position.X, position.Y, position.Z}, drawable.getSize().X, 16, 16, RED);
        break;
    break;
    case CUSTOM:
        raylib::Vector3 pos;
        model = model.loadModel(drawable.getMeshPath());
        pos.x = static_cast<float>(position.X);
        pos.y = static_cast<float>(position.Y);
        pos.z = static_cast<float>(position.Z);
        model.drawModel(pos, 1, RED);
    break;
    }
}


