#pragma once
#include <string>
#include <iostream>

using namespace std;

class Calculadora{

    public:
        Calculadora();
        Calculadora(string);

        void setMemoria(int);
        void setCor(string);

        int getMemoria();
        string getCor();

        float soma(float, float);
        float subtrai(float, float);
        float divide(float, float);
        float multiplica(float, float);

        int elevaAoQuadrado(int);
        int elevaAoCubo(int);

        void imprime_info();
    private:
        int memoria;
        string cor;
};
