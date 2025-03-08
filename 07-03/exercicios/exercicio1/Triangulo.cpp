#include "Triangulo.h"

Triangulo::Triangulo(){

}

Triangulo::Triangulo(float novaBase, float novaAltura){
    base = novaBase;
    altura = novaAltura;
}

void Triangulo::setBase(float novaBase){
    base = novaBase;
}

void Triangulo::setAltura(float novaAltura){
    altura = novaAltura;
}

float Triangulo::getBase(){
    return base;
}

float Triangulo::getAltura(){
    return altura;
}

float Triangulo::getArea(){
    float area = (base * altura)/2;

    return area;
}