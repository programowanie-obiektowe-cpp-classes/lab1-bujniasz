#include <iostream>
#include <cmath>

class Wektor2D
{
    public:
        //konstruktor domyslny tworzacy wektor [0,0]
        Wektor2D()
        {
            x = 0;
            y = 0;
        }

        //settery i gettery
        void setX(double wsp) {x = wsp;}
        double getX() {return x;}

        void setY(double wsp) {y = wsp;}
        double getY() {return y;}        

        //kontruktor parametryczny
        Wektor2D(double wsp1, double wsp2)
        {
            x = wsp1;
            y = wsp2;
        }
        

        //przeciazenie sumy
        Wektor2D operator+(Wektor2D nastepny)
        {
            return Wektor2D{x + nastepny.x, y + nastepny.y};
        }

        //przeciazanie iloczynu
        double operator*(Wektor2D nastepny)
        {
            return x*nastepny.x + y*nastepny.y;
        }

    private:
        double x;
        double y;    

};
