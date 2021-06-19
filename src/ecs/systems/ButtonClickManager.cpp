/*
** EPITECH PROJECT, 2021
** B-YEP-400-NAN-4-1-indiestudio-gildas.gonzalez [WSL: Ubuntu-20.04]
** File description:
** ButtonClickManager
*/

#include "ButtonClickManager.hpp"

void ECS::ButtonClickManager::checkButtonArea(std::vector<ECS::Entity> &entities)
{
    ECS::Clickable clickable;
    raylib::Controls c;

    for (auto it = entities.begin(); it != entities.end(); it++) {
        if (buttonIsOverflow((*it))) {
            try {
                clickable = (*it).getComponent<ECS::Clickable>(ECS::CLICKABLE);
                ECS::Drawable2D &d = (*it).getComponent<ECS::Drawable2D>(ECS::DRAWABLE2D);
                d.setSpritePath(changeSpritePath(d.getSpritePath()));
            } catch (std::out_of_range &e) {
                continue;
            }
            if (c.isMouseButtonPressed(raylib::MouseButton::MOUSE_BUTTON_LEFT) && buttonIsPressed(*it))
                clickable.callback();
            break;
        }
    }
}

bool ECS::ButtonClickManager::buttonIsOverflow(ECS::Entity &entity)
{
    raylib::Window &window = raylib::Window::getWindow();
    ECS::Transform t = entity.getComponent<ECS::Transform>(ECS::TRANSFORM);

    if (raylib::checkCollisionPointRec(window.getMousePosition(), {t.getPosition().X, t.getPosition().Y, static_cast<float>(t.getSize().X), static_cast<float>(t.getSize().Y)}))
        return (true);
    return (false);
}

bool ECS::ButtonClickManager::buttonIsPressed(ECS::Entity &entity)
{
    raylib::Window &window = raylib::Window::getWindow();
    ECS::Transform t = entity.getComponent<ECS::Transform>(ECS::TRANSFORM);

    if (raylib::checkCollisionPointRec(window.getMousePosition(), {t.getPosition().X, t.getPosition().Y, static_cast<float>(t.getSize().X), static_cast<float>(t.getSize().Y)}))
        return (true);
    return (false);
}

std::string ECS::ButtonClickManager::changeSpritePath(std::string spritePath)
{
    std::string toAdd = "Colored.png";

    if (spritePath.find(toAdd) != spritePath.npos)
        return (spritePath);
    spritePath = spritePath.substr(0, spritePath.size() - 4);
    std::cout << spritePath + toAdd << std::endl;
    return (spritePath + toAdd);
}