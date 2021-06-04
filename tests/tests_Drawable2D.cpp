/*
** EPITECH PROJECT, 2021
** B-YEP-400-NAN-4-1-indiestudio-gildas.gonzalez
** File description:
** tests_Drawable2D
*/

#include "OSRedirector.hpp"
#include "Drawable2D.hpp"
#include "ECSVector3.hpp"

Test(Drawable2D_constructor, normal_usage)
{
    ECSVector3 size(1, 2, 3);
    Drawable2D drawable("texture", size);

    cr_assert_eq(drawable.getSpritePath(), "texture");
    cr_assert_eq(drawable.getSize().getX(), 1);
    cr_assert_eq(drawable.getSize().getY(), 2);
    cr_assert_eq(drawable.getSize().getZ(), 3);
}

Test(Drawable2D_setSpritePath, normal_usage)
{
    ECSVector3 size(1, 2, 3);
    Drawable2D drawable("texture", size);

    drawable.setSpritePath("sprite");
    cr_assert_eq(drawable.getSpritePath(), "sprite");
}

Test(Drawable3D_setSize, normal_usage)
{
    ECSVector3 size(1, 2, 3);
    ECSVector3 newSize(4, 5, 6);
    Drawable2D drawable("texture", size);

    drawable.setSize(newSize);
    cr_assert_eq(drawable.getSize().getX(), 4);
    cr_assert_eq(drawable.getSize().getY(), 5);
    cr_assert_eq(drawable.getSize().getZ(), 6);
}