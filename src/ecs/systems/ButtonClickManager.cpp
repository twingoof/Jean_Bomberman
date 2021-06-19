/*
** EPITECH PROJECT, 2021
** B-YEP-400-NAN-4-1-indiestudio-gildas.gonzalez [WSL: Ubuntu-20.04]
** File description:
** ButtonClickManager
*/

#include "ButtonClickManager.hpp"

void ECS::ButtonClickManager::checkButtonArea(std::vector<ECS::Entity> &entities)
{
    menu::MenuGenerator &menu = menu::MenuGenerator::getMenuGenerator();
    raylib::Controls c;

    for (auto it = entities.begin(); it != entities.end(); it++) {
        try {
            ECS::Clickable clickable = (*it).getComponent<ECS::Clickable>(ECS::CLICKABLE);
            ECS::Drawable2D &d = (*it).getComponent<ECS::Drawable2D>(ECS::DRAWABLE2D);
            std::string path = d.getSpritePath();
            ECS::Vector3<int> size;
            bool isOverflow = buttonIsOverflow(*it);
            if (isOverflow && path.find("Unic.png") == path.npos && path.find("Colored.png") == path.npos) {
                size = d.getSize();
                std::cout << d.getSpritePath() << " - ";
                d = menu.getMenuSprites().find(getColoredSpritePath(path))->second;
                d.setSize(size);
                std::cout << d.getSpritePath() << " - " << (*it).getComponent<ECS::Drawable2D>(ECS::DRAWABLE2D).getSpritePath() << std::endl;
                if (c.isMouseButtonPressed(raylib::MouseButton::MOUSE_BUTTON_LEFT) && buttonIsPressed(*it)) {
                    clickable.callback();
                    return;
                }
            } else if (!isOverflow && path.find("Unic.png") == path.npos && path.find("Colored.png") != path.npos) {
                std::cout << d.getSpritePath() << " - ";
                size = d.getSize();
                d = menu.getMenuSprites().find(getUncoloredSpritePath(path))->second;
                d.setSize(size);
                std::cout << d.getSpritePath() << " - " << (*it).getComponent<ECS::Drawable2D>(ECS::DRAWABLE2D).getSpritePath() << std::endl;
            }
        } catch (std::out_of_range &e) {
            continue;
        }
    }
    // menu.setMenuEntities(entities);
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

std::string ECS::ButtonClickManager::getColoredSpritePath(std::string spritePath)
{
    std::string toAdd = "Colored.png";

    spritePath = spritePath.substr(0, spritePath.size() - 4);
    return (spritePath + toAdd);
}

std::string ECS::ButtonClickManager::getUncoloredSpritePath(std::string spritePath)
{
    std::string toAdd = ".png";

    spritePath = spritePath.substr(0, spritePath.size() - 11);
    return (spritePath + toAdd);
}