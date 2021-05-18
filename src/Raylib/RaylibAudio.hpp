/*
** EPITECH PROJECT, 2021
** B-YEP-400-NAN-4-1-indiestudio-gildas.gonzalez
** File description:
** RaylibAudio
*/

#ifndef RAYLIBAUDIO_HPP_
#define RAYLIBAUDIO_HPP_

#include <iostream>
#include <vector>

#include "raylib.h"

/**
 * @namespace Raylib
 */
namespace Raylib {
    // Audio device management functions

    /**
     * @brief Initialize audio device and context
     * @fn void initAudioDevice()
     */
    extern "C" void initAudioDevice();

    /**
     * @brief Close the audio device end context
     * @fn void closeAudioDevice()
     */
    extern "C" void closeAudioDevice();

    /**
     * @brief Check if the audio device has been initialized successfully
     * @fn bool isAudioDeviceReady()
     * @return True if audio device is ready False otherwise
     */
    extern "C" bool isAudioDeviceReady();

    /**
     * @brief Set master volume (listener)
     * @fn void setMasterVolume(float volume)
     * @param volume Volume level
     */
    extern "C" void setMasterVolume(float volume);

    // Wave/Sound loading/unloading functions

    /**
     * @brief Load wave data from file
     * @fn Wave loadWave(const std::string& fileName)
     * @param fileName Path to the wave data file
     * @return Loaded wave
     */
    extern "C" Wave loadWave(const std::string& fileName);

    /**
     * @brief Load wave from memory buffer
     * @fn  Wave loadWaveFromMemory(const std::string& fileType, const std::vector<unsigned char> fileData)
     * @param fileType File type containing wave data
     * @param fileData Wave data
     * @return Loaded wave
     */
<<<<<<< Updated upstream
    extern "C" Wave loadWaveFromMemory(const std::string& fileType, const std::vector<unsigned char> fileData);

    /**
     * @brief Load sound from file
     * @fn Sound loadSound(const std::string& fileName)
     * @param fileName Path to the sound data file
     * @return Loaded sound
     */
    extern "C" Sound loadSound(const std::string& fileName);

    /**
     * @brief Load sound from wave data
     * @fn Sound loadSoundFromWave(Wave wave)
     * @param wave Wave to load sound from
     * @return Loaded sound
     */
    extern "C" Sound loadSoundFromWave(Wave wave);

    /**
    * @brief Update sound buffer with new data
    * @fn void updateSound(Sound sound, const void* data)
    * @param sound Sound to buffer to update
    */
    extern "C" void updateSound(Sound sound, const void* data);

    /**
     * @brief Unload wave data
     * @fn void unloadWave(Wave wave);
     * @param wave Wave to unload
     */
    extern "C" void unloadWave(Wave wave);

    /**
     * @brief Unload sound
     * @fn void unloadSound(Sound sound)
     * @param sound Sound to unload
     */
    extern "C" void unloadSound(Sound sound);

    /**
     * @brief Export wave data to file
     * @fn bool exportWave(Wave wave, const std::string& fileName)
     * @param wave Wave to export
     * @param fileName File to save wave
     * @return True on success False otherwise
     */
    extern "C" bool exportWave(Wave wave, const std::string& fileName);

    /**
    * @brief Export wave sample data to code (.h)
    * @fn bool exportWaveAsCode(Wave wave, const std::string& fileName)
    * @param wave Wave to export
    * @param fileName File to save wave
    * @return True on success False otherwise
    */
    extern "C" bool exportWaveAsSound(Wave wave, const std::string& fileName);

    // Wave/Sound management functions

    /**
     * @brief Play a sound
     * @fn void playSound(Sound sound)
     * @param sound Sound to play
     */
    extern "C" void playSound(Sound sound);

    /**
    * @brief Stop playing a sound
    * @fn void stopSound(Sound sound)
    * @param sound Sound to stop
    */
    extern "C" void stopSound(Sound sound);

    /**
    * @brief Pause a sound
    * @fn void pauseSound(Sound sound)
    * @param sound Sound to pause
    */
    extern "C" void pauseSound(Sound sound);

    /**
    * @brief Resume a paused sound
    * @fn void resumeSound(Sound sound)
    * @param sound Sound to resume
    */
    extern "C" void resumeSound(Sound sound);

    /**
    * @brief Play a sound (using multichannel buffer pool)
    * @fn void playSoundMulti(Sound sound)
    * @param sound Sound to play
    */
    extern "C" void playSoundMulti(Sound sound);

    /**
    * @brief Stop any sound playing (using multichannel buffer poo)
    * @fn void stopSoundMulti()
    */
    extern "C" void stopSoundMulti();

    /**
    * @brief Get number of sounds playing in the multichannel
    * @fn int getSoundsPlaying()
    * @return The number of sounds playing in the multichannel
    */
    extern "C" int getSoundsPlaying();

    /**
    * @brief Check if the sound is playing
    * @fn bool isSoundPlaying(Sound sound)
    * @param sound Sound to check
    * @return \bTrue if the sound is playing, \bFalse otherwise
    */
    extern "C" bool isSoundPlaying(Sound sound);

    /**
    * @brief Set volume for a sound (1.0 is max level)
    * @fn void setSoundVolume(Sound sound, float volume)
    * @param sound Sound to set volume
    * @param volume Volume to set the sound
    */
    extern "C" void setSoundVolume(Sound sound, float volume);

    /**
    * @brief Set pitch for a sound (1.0 is base level)
    * @fn void setSoundPitch(Sound sound, float pitch)
    * @param sound Sound to set pitch
    * @param pitch Pitch to set the sound
    */
    extern "C" void setSoundPitch(Sound sound, float pitch);

    /**
    * @brief Convert wave data to desired format
    * @fn void waveFormat(Wave &wave, int sampleRate, int sampleSize, int channels)
    * @param wave Wave to convert
    * @param sampleRate Desired sample rate
    * @param sampleSize Desired sample size
    * @param channels Desired number of channels
    */
    extern "C" void waveFormat(Wave &wave, int sampleRate, int sampleSize, int channels);

    /**
    * @brief Copy a wave to new wave
    * @fn Wave waveCopy(Wave wave)
    * @param wave Wave to copy
    * @return A copy of the wave passed as parameter
    */
    extern "C" Wave waveCopy(Wave wave);

    /**
    * @brief Crop a wave to a defined sample range
    * @fn void waveCrop(Wave &wave, int initSample, int finalSample)
    * @param wave Wave to crop
    * @param initSample Start of the wave sample
    * @param finalSample End of the wave sample
    */
    extern "C" void waveCrop(Wave &wave, int initSample, int finalSample);

    /**
    * @brief Load sample data from wave as a float array
    * @fn std::vector<float> loadWaveSamples(Wave wave)
    * @param wave Wave to load data from
    * @return a float vector containing the wave's data
    */
    extern "C" std::vector<float> loadWaveSamples(Wave wave);

    /**
    * @brief Unload wave sample loaded with \code loadWaveSamples()
    * @fn void unloadWaveSamples(std::vector<float> samples)
    * @param samples Samples to unload
    */
    extern "C" void unloadWaveSamples(std::vector<float> samples);

    // *****************************
    // * Music management function *
    // *****************************
    /**
    * @brief Load music stream from file
    * @fn Music loadMusicStream(const std::string& fileName)
    * @param fileName File to load music from
    */
    extern "C" Music loadMusicStream(const std::string& fileName);

    /**
    * @brief Unload music stream
    * @fn void unloadMusicStream(Music music)
    * @param music Music stream to unload
    */
    extern "C" void unloadMusicStream(Music music);

    /**
    * @brief Start music playing
    * @fn void playMusicStream(Music music)
    * @param music Music stream to play
    */
    extern "C" void playMusicStream(Music music);

    /**
    * @brief Update buffers for music streaming
    * @fn void updateMusicStream(Music music)
    * @param music Music stream to update
    */
    extern "C" void updateMusicStream(Music music);

    /**
    * @brief Stop music playing
    * @fn void stopMusicStream(Music music)
    * @param music Music stream to stop
    */
    extern "C" void stopMusicStream(Music music);

    /**
    * @brief Pause music playing
    * @fn void pauseMusicStream(Music music)
    * @param music Music stream to pause
    */
    extern "C" void pauseMusicStream(Music music);

    /**
    * @brief Resume music playing
    * @fn void resumeMusicStream(Music music)
    * @param music Music stream to resume
    */
    extern "C" void resumeMusicStream(Music music);

    /**
    * @brief Check if music is playing
    * @fn bool isMusicPlaying(Music music)
    * @param music Music stream to check
    * @return \bTrue if music stream is playing, \bFalse otherwise
    */
    extern "C" bool isMusicPlaying(Music music);

    /**
    * @brief Set volume for music (1.0 is max level)
    * @fn void setMusicVolume(Music music, float volume)
    * @param music Music to change volume
    * @param volume Desired volume
    */
    extern "C" void setMusicVolume(Music music, float pitch);

    /**
    * @brief Set pitch for music (1.0 is max level)
    * @fn void setMusicPitch(Music music, float pitch)
    * @param music Music to change pitch
    * @param pitch Desired pitch
    */
    extern "C" void setMusicPitch(Music music, float pitch);

    /**
    * @brief Get music time length (in seconds)
    * @fn float getMusicTimeLength(Music music)
    * @param music Music to get length from
    * @return Music length in second
    */
    extern "C" float getMusicLength(Music music);

    /**
    * @brief Get current music time played (in seconds)
    * @fn float getMusicTimePlayed(Music music)
    * @param music Music to get time played
    * @return Music time played
    */
    extern "C" float getMusicTimePlayed(Music music);

}

#endif /* !RAYLIBAUDIO_HPP_ */
