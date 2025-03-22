#pragma once
#include <string>
#include <iostream>
#include "FuncionarioCaixa.h"

using namespace std;

class Empresa{

    public:
        Empresa();
        Empresa(string, FuncionarioCaixa, FuncionarioCaixa);

        void setNome(string);
        void setFuncionario1(FuncionarioCaixa);
        void setFuncionario2(FuncionarioCaixa);

        string getNome();
        FuncionarioCaixa getFuncionario1();
        FuncionarioCaixa getFuncionario2();

        void imprime_info();

    private:
        string nome;
        FuncionarioCaixa funcionario1;
        FuncionarioCaixa funcionario2;

};