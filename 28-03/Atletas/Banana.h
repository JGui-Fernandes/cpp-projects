#pragma once

#include <string>
#include <iostream>
#include "Fruta.h"

using namespace std;

class Banana: public Fruta{

    public:

        Banana();
        Banana(float preco, char* tipo);

        void setTipo(char* tipo);
        char* getTipo();

    private:
        char* tipo;

};
