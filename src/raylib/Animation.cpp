/*
** EPITECH PROJECT, 2021
** B-YEP-400-NAN-4-1-indiestudio-gildas.gonzalez
** File description:
** Animation
*/

#include "Animation.hpp"

raylib::Animation::Animation(const ::ModelAnimation &oldAnim)
{
    this->setModelAnimation(oldAnim);
}

raylib::Animation::~Animation(void)
{
    this->unloadAnimation();
}

raylib::Animation &raylib::Animation::operator=(const ::ModelAnimation &oldAnim)
{
    this->setModelAnimation(oldAnim);
    return (*this);
}

void raylib::Animation::unloadAnimation(void)
{
    ::UnloadModelAnimation(*this);
}

void raylib::Animation::updateAnimation(::Model &model, int frame)
{
    ::UpdateModelAnimation(model, *this, frame);
}

void raylib::Animation::setModelAnimation(const ::ModelAnimation &old)
{
    this->frameCount = old.frameCount;
    this->framePoses = old.framePoses;
    this->boneCount = old.boneCount;
    this->bones = old.bones;
}

void raylib::unloadModelAnimations(std::vector<::ModelAnimation> modelAnimation, unsigned int count)
{
    ::UnloadModelAnimations(modelAnimation.data(), count);
}

std::vector<raylib::Animation> raylib::loadAnimations(const std::string &filePath, int animsCount)
{
    std::vector<raylib::Animation> newAnim;
    auto newAnimC = ::LoadModelAnimations(filePath.c_str(), &animsCount);

    if (newAnimC == nullptr)
        return (newAnim);
    for (int i = 0; i < animsCount; i++)
        newAnim.push_back(raylib::Animation(newAnimC[i]));
    return (newAnim);
}
