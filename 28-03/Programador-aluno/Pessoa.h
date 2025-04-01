#pragma once

#include <string>
#include <iostream>

using namespace std;

class Pessoa{

    public:
        Pessoa();
        Pessoa(char*, int);
        virtual ~Pessoa();

        void setNome(char*);
        char* getNome();

        void setIdade(int);
        int getIdade();

        virtual void imprime_dados();

    private:
        char* nome;
        int idade;
};
