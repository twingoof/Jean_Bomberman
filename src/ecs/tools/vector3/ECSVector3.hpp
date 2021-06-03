/*
** EPITECH PROJECT, 2021
** B-YEP-400-NAN-4-1-indiestudio-gildas.gonzalez
** File description:
** ECSVector3
*/

#include <iostream>

#ifndef ECSVector3_HPP_
#define ECSVector3_HPP_

class ECSVector3 {
    public:
        ECSVector3(int x = 0, int y = 0, int z = 0);
        ~ECSVector3();

        void setX(int x);
        void setY(int y);
        void setZ(int z);

        int getX() const;
        int getY() const;
        int getZ() const;

        ECSVector3 &operator=(const ECSVector3 &ECSVector3);
    private:
        int _x;
        int _y;
        int _z;
};

#endif /* !ECSVector3_HPP_ */
