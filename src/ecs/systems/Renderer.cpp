/*
** EPITECH PROJECT, 2021
** indie
** File description:
** ECS Renderer system
*/

#include "Renderer.hpp"

Renderer::Renderer() = default;

Renderer::~Renderer() = default;

void Renderer::draw(const std::vector<Entity>& entities) {
    bool noDraw;

    for (const auto &entity : entities) {
        noDraw = false;
        try {
            Drawable2D drawable = entity.getComponent<Drawable2D>(DRAWABLE2D);
            this->_draw2D(entity.getPosition(), drawable);
        }
        catch (std::out_of_range &e) {
            noDraw = true;
        }

        try {
            Drawable3D drawable = entity.getComponent<Drawable3D>(DRAWABLE3D);
            this->_draw3D(entity.getPosition(), drawable);

        } catch (std::out_of_range &e) {
            noDraw = true;
        }

        if (!noDraw)
            std::cerr<<"ERROR: "<<"entity"<<" has no Drawabale component."<<std::endl;
    }
}

void Renderer::_draw2D(const ECSVector3& position, const Drawable2D& drawable)
{
    switch (drawable.getType()) {

        case CIRCLE:
            raylib::drawCircle(position._x, position._y, position._z);
            break;
        case RECT:
            // TODO: Draw rect
            break;
    }
}

void Renderer::_draw3D(const ECSVector3& position, const Drawable3D& drawable)
{
    Vector3 pos = {position._x, position._y, position._z};
    raylib::Model model;
    switch (drawable.getType())
    {
    case CIRCLE:
        DrawSphere(pos, 1.0f, RED);
        DrawSphereWires(pos, 2.0f, 16, 16, MAGENTA);
    break;
    case CUSTOM:
        model = model.loadModel(drawable.getMeshPath());
        Vector3 pos = {static_cast<float>(position._x), static_cast<float>(position._y), static_cast<float>(position._z)};
        model.drawModel(pos, 1, RED);
    break;
    }
}


