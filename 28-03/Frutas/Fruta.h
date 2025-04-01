#pragma once

#include <string>
#include <iostream>

using namespace std;

class Fruta{

    public:
        Fruta();
        Fruta(float);

        void setPreco(float);
        float getPreco();

        float calcula_preco(float imposto);


    private:

        float preco;
};
