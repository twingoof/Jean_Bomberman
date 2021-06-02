/*
** EPITECH PROJECT, 2021
** B-YEP-400-NAN-4-1-indiestudio-gildas.gonzalez [WSL: kali-linux]
** File description:
** enum
*/

#ifndef ENUM_HPP_
#define ENUM_HPP_

enum ComponentType
{
    DRAWABLE2D,
    DRAWABLE3D,
    CLICKABLE, 
    MOVEABLE,
    KILLABLE,
    PHYSICS,
    COLLECTIBLE
};

typedef struct texture2D_s {
    int height;
    int width;
    int mipmaps;
    int format;
    unsigned int id;
} texture2D_t;

#endif /* !ENUM_HPP_ */
