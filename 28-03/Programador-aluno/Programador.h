#pragma once

#include <string>
#include <iostream>
#include "Pessoa.h"

using namespace std;

class Programador: public Pessoa{

    public:
        Programador();
        Programador(char* nome, int idade, char* linguagem);
        ~Programador();

        void setLinguagem(char*);
        char* getLinguagem();

        void imprime_dados();

    private:
        char* linguagem;
};
