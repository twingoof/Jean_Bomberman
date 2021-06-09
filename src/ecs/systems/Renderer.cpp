/*
** EPITECH PROJECT, 2021
** indie
** File description:
** ECS Renderer system
*/

#include "Renderer.hpp"

#include "Circle.hpp"
#include "Model.hpp"
#include "Rectangle.hpp"
#include "Text.hpp"
#include "Texture.hpp"

ECS::Renderer::Renderer() = default;

ECS::Renderer::~Renderer() = default;

void ECS::Renderer::draw(const std::map<std::string, std::shared_ptr<ECS::Entity>>& entities) {
    bool noDraw;

    for (const auto &entity : entities) {
        noDraw = false;
        try {
            ECS::Drawable2D drawable = entity.second.get()->getComponent<ECS::Drawable2D>(DRAWABLE2D);
            this->_draw2D(entity.second.get()->getPosition(), drawable);
        }
        catch (std::out_of_range &e) {
            noDraw = true;
        }

        try {
            ECS::Drawable3D drawable = entity.second.get()->getComponent<ECS::Drawable3D>(DRAWABLE3D);
            this->_draw3D(entity.second.get()->getPosition(), drawable);

        } catch (std::out_of_range &e) {
            noDraw = true;
        }

        if (!noDraw)
            std::cerr<<"ERROR: "<<"entity"<<" has no Drawabale component."<<std::endl;
    }
}

void ECS::Renderer::_draw2D(const ECS::Vector3& position, const ECS::Drawable2D& drawable)
{
    switch (drawable.getType()) {

        case CIRCLE:
            raylib::drawCircle(position._x, position._y, position._z);
            break;
        case RECT:
            raylib::drawRectangle(position._x, position._y, drawable.getSize()._x, drawable.getSize()._y);
            break;
    }
}

void ECS::Renderer::_draw3D(const ECS::Vector3& position, const ECS::Drawable3D& drawable)
{
    raylib::Model model;
    switch (drawable.getType())
    {
    case CIRCLE:
        // TODO: Change moi cette merde
        // raylib::Vector3 pos = {position._x, position._y, position._z};
        // DrawSphere(pos, 1.0f, RED);
        // DrawSphereWires(pos, 2.0f, 16, 16, MAGENTA);
    break;
    case CUSTOM:
        raylib::Vector3 pos;
        model = model.loadModel(drawable.getMeshPath());
        pos.x = static_cast<float>(position._x);
        pos.y = static_cast<float>(position._y);
        pos.z = static_cast<float>(position._z);
        model.drawModel(pos, 1, RED);
    break;
    }
}


