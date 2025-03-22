#pragma once

#include <string>
#include <iostream>

using namespace std;

class Atleta {
public:
    Atleta();
    Atleta(char*, int);

    char* getNome();
    int getIdade();

    void setNome(char*);
    void setIdade(int);

    void imprime_info();

private:
    char* nome;
    int idade;
};
