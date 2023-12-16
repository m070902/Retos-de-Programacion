

#include <iostream>

using namespace std;

class poligono
{
protected:

    int mult;

    poligono(int base, int altura){

        mult = base*altura;

    };

};

class triangulo: public poligono
{
public:

    triangulo(int base, int altura): poligono(base, altura){};

    float area(){return mult/2;}

};

class cuadrado: public poligono
{
public:

    cuadrado(int lado): poligono(lado, lado){};

    float area(){return mult;}

};

class rectangulo: public poligono
{
public:

    rectangulo(int base, int altura): poligono(base, altura){};

    float area(){return mult;}

};

int main(){

    triangulo figura1(2, 3);
    rectangulo figura2(2, 3);
    cuadrado figura3(2);

    printf("%f\n%f\n%f\n",figura1.area(), figura2.area(), figura3.area());
    
}
