/*
** EPITECH PROJECT, 2021
** B-YEP-400-NAN-4-1-indiestudio-gildas.gonzalez
** File description:
** Vector3
*/

#ifndef VECTOR3_HPP_
#define VECTOR3_HPP_

class Vector3 {
    public:
        Vector3(int x = 0, int y = 0, int z = 0);
        ~Vector3();
        void setX(int x);
        void setY(int y);
        void setZ(int z);
        const int getX() const;
        const int getY() const;
        const int getZ() const;

    private:
        int _x;
        int _y;
        int _z;
};

#endif /* !VECTOR3_HPP_ */
