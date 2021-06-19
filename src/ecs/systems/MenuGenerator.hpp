/*
** EPITECH PROJECT, 2021
** B-YEP-400-NAN-4-1-indiestudio-gildas.gonzalez [WSL: Ubuntu-20.04]
** File description:
** MenuGenerator
*/

#ifndef MENUGENERATOR_HPP_
#define MENUGENERATOR_HPP_

#include "Entity.hpp"
#include "Presets.hpp"
#include <tuple>
#include <vector>
#include <functional>

namespace menu {
    class MenuGenerator {
        public:
            ~MenuGenerator() = default;

            void initMenuGenerator(void(*callback)(), float volume = 1.0f, int nbPlayers = 2);

            std::vector<ECS::Entity> &getMenuEntities();
            std::map<int, std::map<std::string, raylib::Keys>> getPlayerKeys() const;
            float getVolume() const;
            int getNbPlayers() const;
            bool needToExit() const;

            void updateEntities();

            // _menuPage = 0
            void generateMenu();
            // _menuPage = 1
            void generateTuto();
            // _menuPage = 2
            void generateTuto1();
            // _menuPage = 3
            void generateTuto2();
            // _menuPage = 4
            void generateOptions();
            // _menuPage = 5
            void generateCredits();
            // _menuPage = 6
            void generateKeysInputSelection();

            void setMenuEntities(std::vector<ECS::Entity> &entities);
            void setPlayerKeys(std::map<int, std::map<std::string, raylib::Keys>> playerKeys);
            void setVolume();
            void setNbPlayers(int nbPlayers);
            void setExit();
            void setKey(int playerIndex, std::string binding);

            static MenuGenerator &getMenuGenerator();

        private:
            MenuGenerator() = default;
            MenuGenerator(const MenuGenerator &) = delete;
            const MenuGenerator &operator=(const MenuGenerator &) = delete;
            std::map<int, std::map<std::string, raylib::Keys>> _playerKeys;
            std::vector<ECS::Entity> _menuEntities;
            void(*_callbackPlay)();
            float _volume;
            int _nbPlayers;
            int _menuPage;
            int _width;
            int _height;
            bool _quit;
    };
};

#endif /* !MENUGENERATOR_HPP_ */