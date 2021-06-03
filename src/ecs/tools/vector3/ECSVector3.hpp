/*
** EPITECH PROJECT, 2021
** B-YEP-400-NAN-4-1-indiestudio-gildas.gonzalez
** File description:
** ECSVector3
*/

#ifndef ECSVector3_HPP_
#define ECSVector3_HPP_

class ECSVector3 {
    public:
        ECSVector3(int x = 0, int y = 0, int z = 0);
        ECSVector3 &operator=(const ECSVector3 &ECSVector3);
        ~ECSVector3();
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

#endif /* !ECSVector3_HPP_ */
