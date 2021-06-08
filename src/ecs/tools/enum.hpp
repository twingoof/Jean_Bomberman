/*
** EPITECH PROJECT, 2021
** B-YEP-400-NAN-4-1-indiestudio-gildas.gonzalez [WSL: kali-linux]
** File description:
** enum
*/

#ifndef ENUM_HPP_
#define ENUM_HPP_

namespace ECS {
    enum ComponentType
    {
        DRAWABLE2D,
        DRAWABLE3D,
        CLICKABLE, 
        MOVEABLE,
        KILLABLE,
        PHYSICS,
        COLLECTIBLE,
        ATTACKER,
    };

<<<<<<< HEAD
enum DrawableType {
    CIRCLE,
    RECT,
    CUSTOM
};
=======
    enum DrawableType {
        CIRCLE,
        RECT
    };
>>>>>>> 05938a43ba7df350ffc50db201868b91ce697826

    typedef struct texture2D_s {
        int height;
        int width;
        int mipmaps;
        int format;
        unsigned int id;
    } texture2D_t;
};

#endif /* !ENUM_HPP_ */
