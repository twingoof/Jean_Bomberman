/*
** EPITECH PROJECT, 2021
** indie
** File description:
** TODO: add description
*/

#ifndef INDIE_ALTENTITY_HPP
#define INDIE_ALTENTITY_HPP

#include "enum.hpp"
#include "ECSVector3.hpp"
#include "IComponent.hpp"

#include <map>
#include <memory>

class AltEntity {
    public:
        AltEntity() = default;
        explicit AltEntity(const ECSVector3& position);
        ~AltEntity() = default;

        template<class T>
        void addComponent(T& component, ComponentType type);

        template<class T>
        T getComponent(ComponentType type);
//        std::map<ComponentType, std::unique_ptr<IComponent>> getComponents() {return (this->_components);};
        ECSVector3 getPosition() {return this->_position;}
    private:
        ECSVector3 _position;
        std::map<ComponentType, std::shared_ptr<IComponent>> _components;
};

template<class T>
void AltEntity::addComponent(T &component, ComponentType type) {
//    std::unique_ptr<T> uPtr = std::make_unique<T>(component);
//    std::pair<ComponentType, std::unique_ptr<IComponent>> toInsert(type, std::make_unique<T>(component));
    this->_components.insert(std::make_pair(type, std::make_shared<T>(component)));
}

template<class T>
T AltEntity::getComponent(ComponentType type) {
    return dynamic_cast<T&>((*this->_components.at(type)));
}

#endif //INDIE_ALTENTITY_HPP
