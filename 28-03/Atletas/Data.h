#pragma once

#include <string>
#include <iostream>

using namespace std;

class Data{

    public:
        Data();
        Data(int, int, int);

        int getDia();
        int getMes();
        int getAno();

        void setDia(int);
        void setMes(int);
        void setAno(int);

        void imprime_data();

    private:
        int dia;
        int mes;
        int ano;

};
