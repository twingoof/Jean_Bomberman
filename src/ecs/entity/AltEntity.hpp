/*
** EPITECH PROJECT, 2021
** indie
** File description:
** TODO: add description
*/

#ifndef INDIE_ALTENTITY_HPP
#define INDIE_ALTENTITY_HPP

#include "enum.hpp"
#include "IComponent.hpp"

#include <map>
#include <memory>

class AltEntity {
    public:
        AltEntity() = default;
        ~AltEntity() = default;

        template<class T>
        void addComponent(T& component, ComponentType type);

        template<class T>
        T getComponent(ComponentType type);
        std::map<ComponentType, std::unique_ptr<IComponent>> getComponents();
    private:
        std::map<ComponentType, std::unique_ptr<IComponent>> _components;
};

template<class T>
void AltEntity::addComponent(T &component, ComponentType type) {
    std::unique_ptr<T> uPtr = std::make_unique<T>(component);
    std::pair<ComponentType, std::unique_ptr<IComponent>> toInsert(type, std::move(uPtr));
    this->_components.insert(std::move(toInsert));
}

template<class T>
T AltEntity::getComponent(ComponentType type) {
    return dynamic_cast<T&>(*this->_components.at(type).get());
}

#endif //INDIE_ALTENTITY_HPP
