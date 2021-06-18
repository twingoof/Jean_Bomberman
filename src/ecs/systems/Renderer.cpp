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
#include "Rectangle.hpp"
#include "Transform.hpp"
#include "Window.hpp"

ECS::Renderer::Renderer() = default;

ECS::Renderer::~Renderer() = default;

void ECS::Renderer::draw(std::vector<ECS::Entity> &entities) {
    raylib::Window &window = raylib::Window::getWindow();
    bool noDraw;

    window.clearWindow(RAYWHITE);
    window.beginDrawing();
    for (auto &entity : entities) {
        noDraw = false;
        try {
            ECS::Drawable2D &drawable = entity.getComponent<ECS::Drawable2D>(DRAWABLE2D);
            this->_draw2D(entity.getComponent<Transform>(TRANSFORM).getPosition(), drawable);
        }
        catch (std::out_of_range &e) {
            noDraw = true;
        }

        try {
            ECS::Drawable3D &drawable = entity.getComponent<ECS::Drawable3D>(DRAWABLE3D);
            window.begin3DMode();
            this->_draw3D(entity.getComponent<Transform>(TRANSFORM).getPosition(), drawable);
            window.end3DMode();
        } catch (std::out_of_range &e) {
            noDraw = true;
        }

        if (!noDraw)
            std::cerr<<"ERROR: "<<entity.getName()<<" has no Drawabale component."<<std::endl;
    }
    window.endDrawing();
}

void ECS::Renderer::_draw2D(const ECS::Vector3<float>& position, ECS::Drawable2D& drawable)
{
    switch (drawable.getType()) {

        case CIRCLE:
            raylib::drawCircle(position.X, position.Y, position.Z);
            break;
        case RECT:
            raylib::drawRectangle(position.X, position.Y, drawable.getSize().X, drawable.getSize().Y);
            break;
        case CUSTOM:
            if (!this->_isTLoaded(drawable.getId()))
                this->_loadTextureInCache(drawable);
            raylib::drawTexture(this->_getTextureFromCache(drawable.getId()), position.X, position.Y, WHITE);
            
            break;
    }
}

void ECS::Renderer::_draw3D(const ECS::Vector3<float>& position, ECS::Drawable3D &drawable)
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
            ECS::Vector3<int> size = drawable.getSize();
            ::Color color = {drawable.getColor().X, drawable.getColor().Y, drawable.getColor().Z, drawable.getColor().A};
            ::Color wColor = {drawable.getWColor().X, drawable.getWColor().Y, drawable.getWColor().Z, drawable.getWColor().A};
            if (drawable.getTexturePath().empty())
                raylib::drawCube({position.X, position.Y, position.Z}, size.X, size.Y, size.Z, color);
            else {
                if (!drawable.loaded) {
                    drawable.loaded = true;
                    this->_loadTextureInCache(drawable);
                }
                raylib::drawTexturedCube(this->_getTextureFromCache(drawable.getId()), position, size, WHITE);
            }
            raylib::drawCubeWires({position.X, position.Y, position.Z}, size.X, size.Y, size.Z, wColor);
            break;
        }
    case ECS::DrawableType::CUSTOM :
        {
            raylib::Vector3 pos;
            raylib::Model model;

            if (!this->_isMloaded(drawable.getId()))
                this->_loadModelInCache(drawable);
            model = this->_getModelFromCache(drawable.getId());
            pos.x = static_cast<float>(position.X);
            pos.y = static_cast<float>(position.Y);
            pos.z = static_cast<float>(position.Z);
            model.drawModel(pos, 0.5, RED);
            break;
        }
    default:
        break;
    }
}

void ECS::Renderer::_loadTextureInCache(const ECS::Drawable2D& drawable) {
    raylib::Texture texture(drawable.getSpritePath());
    std::pair<unsigned int, raylib::Texture> toInsert = std::make_pair(drawable.getId(), texture);

    this->_loadedTextures.insert(toInsert);
}

void ECS::Renderer::_loadTextureInCache(const ECS::Drawable3D& drawable) {
    raylib::Texture texture(drawable.getTexturePath());
    std::pair<unsigned int, raylib::Texture> toInsert = std::make_pair(drawable.getId(), texture);

    this->_loadedTextures.insert(toInsert);
}

void ECS::Renderer::_loadModelInCache(const ECS::Drawable3D& drawable) {
    raylib::Model model(drawable.getMeshPath());
    std::pair<unsigned int, raylib::Model> toInsert = std::make_pair(drawable.getId(), model);

    this->_loadedModels.insert(toInsert);

//    if (!drawable.getTexturePath().empty()) {
//        ::Texture texture = ::LoadTexture(drawable.getTexturePath().c_str());
//        model.materials[0].maps[MATERIAL_MAP_DIFFUSE].texture = texture;
//    }
}

raylib::Texture ECS::Renderer::_getTextureFromCache(const unsigned int id) {
    raylib::Texture texture;

    try {
        texture = this->_loadedTextures.at(id);
    } catch (std::out_of_range &e) {
        std::cerr<<"Drawable["<<id<<"] has no loaded texture."<<std::endl;
    }
    return (texture);
}

raylib::Model ECS::Renderer::_getModelFromCache(const unsigned int id) {
    raylib::Model model;

    try {
        model = this->_loadedModels.at(id);
    } catch (std::out_of_range &e) {
        std::cerr<<"Drawable["<<id<<"] has no loaded model."<<std::endl;
    }
    return (model);
}

bool ECS::Renderer::_isMloaded(unsigned int id) {
    try {
        this->_loadedModels.at(id);
    } catch (std::out_of_range &e) {
        return (false);
    }
    return (true);
}

bool ECS::Renderer::_isTLoaded(unsigned int id) {
    try {
        this->_loadedTextures.at(id);
    } catch (std::out_of_range &e) {
        return (false);
    }
    return (true);
}