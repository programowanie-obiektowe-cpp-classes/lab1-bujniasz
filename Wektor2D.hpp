#include <iostream>
#include <cmath>

class Informer
{
public:

    Informer()
    {
        std::cout << "Wektor pomyslnie skonstruowany" << '\n';
    }

    ~Informer()
    {
        std::cout << "Wektor pomyslnie zniszczony" << '\n';
    }
};


class Wektor2D
{
public:
    Informer info{};


    //konstruktor
    Wektor2D(double wsp1, double wsp2)
    {
        x = wsp1;
        y = wsp2;
        //std::cout << "Wsp. x to: " << x << '\n';
        //std::cout << "Wsp. y to: " << y << '\n';
    }

    //destruktor
    ~Wektor2D()
    {
        //std::cout << "Destrukcja wektora " << '\n';
    }

    void setX(double wsp1)
    {
        x = wsp1;
    }

    double getX()
    {
        return x;
    }

    void setY(double wsp2)
    {
        y = wsp2;
    }

    double getY()
    {
        return y;
    }

    double norm()
    {
        return sqrt(x * x + y * y);
    }

    void print()
    {
        std::cout << "Norma wektora to: " << norm() << '\n';
    }

    Wektor2D operator+(Wektor2D nowy)
    {
        Wektor2D C{ x + nowy.x, y + nowy.y };
        return C;
    }

    Wektor2D operator*(const Wektor2D& nastepny)
    {
        return Wektor2D(x + nastepny.x, y + nastepny.y);
    }



private:
    double x;
    double y;
};
