#pragma once

#include <string>
#include <iostream>
#include "Pessoa.h"

using namespace std;

class Aluno: public Pessoa{

    public:
        Aluno();
        Aluno(char* nome, int idade, float nota);
        ~Aluno();

        void setNota(float);
        float getNota();

        void imprime_dados();
    private:
        float nota;
};
