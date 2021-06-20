/*
** EPITECH PROJECT, 2021
** indie
** File description:
** TODO: add description
*/

#include "SceneManager.hpp"

void launchPlay() {
    SceneManager &sceneMng = SceneManager::getSceneManager();

    sceneMng.setScene(1);
}

int main()
{
    raylib::Window &window = raylib::Window::getWindow();
    SceneManager &sceneMng = SceneManager::getSceneManager();

    sceneMng.initSceneManager(&launchPlay);
    while (!window.windowShouldClose()) {
        if (sceneMng.getExitStatus())
            break;
        sceneMng.displayScene();
    }
    window.stopAudioDevice();
    window.closeWindow();
    return 0;
}