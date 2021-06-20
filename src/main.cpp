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
    window.initWindow(1600, 900, "Jean-Bomberman3D", FLAG_WINDOW_RESIZABLE);
    window.initAudioDevice();

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