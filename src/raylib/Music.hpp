/*
** EPITECH PROJECT, 2021
** B-YEP-400-NAN-4-1-indiestudio-gildas.gonzalez
** File description:
** Music
*/

#ifndef MUSIC_HPP_
#define MUSIC_HPP_

#include "raylib.h"
#include <string>

namespace raylib {
    class Music : public ::Music {
        public:
            Music() = default;
            Music(const std::string &filePath);
            Music(const Music &rHand);
            Music &operator=(const Music &rHand);
            ~Music();

            void loadMusicFromFile(const std::string &filePath);
            void launch();
            void pause();
            void resume();
            void stop();
            void updateMusic();
            void setVolume(float volumeVal);

            void unload();

            bool isPlaying() const;

        protected:

        private:
            bool _isLoaded;
            bool _isPlaying;
            void setMusic(const ::Music &rHand);

    };
};

#endif /* !MUSIC_HPP_ */
