#include "Triangulo.cpp"

#include <iostream>

using namespace std;

int main(){
    const float BASE = 2;
    const float ALTURA = 2;

    Triangulo triangulo(BASE, ALTURA);

    cout << triangulo.getArea();

    return 0;
}