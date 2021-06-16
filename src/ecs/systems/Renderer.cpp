/*
** EPITECH PROJECT, 2021
** indie
** File description:
** ECS Renderer system
*/

#include "Renderer.hpp"

#include "Circle.hpp"
#include "Cube.hpp"
#include "Image.hpp"
#include "Model.hpp"
#include "Rectangle.hpp"
#include "Text.hpp"
#include "Texture.hpp"
#include "Transform.hpp"
#include "Window.hpp"


ECS::Renderer::Renderer() = default;

ECS::Renderer::~Renderer() = default;

void ECS::Renderer::draw(const std::vector<ECS::Entity> &entities) {
    bool noDraw;

    for (const auto &entity : entities) {
        noDraw = false;
        try {
            ECS::Drawable2D drawable = entity.getComponent<ECS::Drawable2D>(DRAWABLE2D);
            this->_draw2D(entity.getComponent<Transform>(TRANSFORM).getPosition(), drawable);
        }
        catch (std::out_of_range &e) {
            noDraw = true;
        }

        try {
            ECS::Drawable3D drawable = entity.getComponent<ECS::Drawable3D>(DRAWABLE3D);
            this->_draw3D(entity.getComponent<Transform>(TRANSFORM).getPosition(), drawable);

        } catch (std::out_of_range &e) {
            noDraw = true;
        }

        if (!noDraw)
            std::cerr<<"ERROR: "<<entity.getName()<<" has no Drawabale component."<<std::endl;
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
    case ECS::DrawableType::CIRCLE :
        {
            ::Color color = {drawable.getColor().X, drawable.getColor().Y, drawable.getColor().Z, drawable.getColor().A};
            ::Color wColor = {drawable.getWColor().X, drawable.getWColor().Y, drawable.getWColor().Z, drawable.getWColor().A};
            DrawSphere({position.X, position.Y, position.Z}, drawable.getSize().X, color);
            DrawSphereWires({position.X, position.Y, position.Z}, drawable.getSize().X, 16, 16, wColor);
            break;
        }
    case ECS::DrawableType::RECT :
        {
            ::Texture2D tex("../assets/doxygen_logo.png");
            ECS::Vector3<int> size = drawable.getSize();
            ::Color color = {drawable.getColor().X, drawable.getColor().Y, drawable.getColor().Z, drawable.getColor().A};
            ::Color wColor = {drawable.getWColor().X, drawable.getWColor().Y, drawable.getWColor().Z, drawable.getWColor().A};
            raylib::drawCube({position.X, position.Y, position.Z}, size.X, size.Y, size.Z, color);
            raylib::drawCubeWires({position.X, position.Y, position.Z}, size.X, size.Y, size.Z, wColor);
            break;
        }
    case ECS::DrawableType::CUSTOM :
        {
            raylib::Vector3 pos;

            model = model.loadModel(drawable.getMeshPath());
            pos.x = static_cast<float>(position.X);
            pos.y = static_cast<float>(position.Y);
            pos.z = static_cast<float>(position.Z);
            model.drawModel(pos, 1, RED);
            break;
        }
    default:
        break;
    }
}


