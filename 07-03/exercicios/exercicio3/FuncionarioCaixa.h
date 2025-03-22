#pragma once
#include <string>
#include <iostream>
#include "Calculadora.h"

using namespace std;

class FuncionarioCaixa{

    public: 

        FuncionarioCaixa();
        FuncionarioCaixa(string, string, Calculadora);

        void setNome(string);
        void setEndereco(string);
        void setCalculadora(Calculadora);

        string getNome();
        string getEndereco();
        Calculadora getCalculadora();

        float soma(float, float);
        float subtrai(float, float);
        float divide(float, float);
        float multiplica(float, float);

        int elevaAoQuadrado(int);
        int elevaAoCubo(int);

        void imprime_info();

    private:
        string nome;
        string endereco;
        Calculadora calculadora;

};