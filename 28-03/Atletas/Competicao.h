#pragma once

#include <string>
#include <iostream>
#include "Data.h"

using namespace std;

class Competicao {

    public:
        Competicao();
        Competicao(char*, Data);

        char* getNome();
        Data getData();

        void setNome(char*);
        void setData(Data);

        void imprime_data();

    private:
        char* nome;
        Data data;
};
