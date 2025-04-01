#include <string>
#include <iostream>
#include "Atleta.h"
#include "Competicao.h"

using namespace std;

class Corredor: public Atleta{

    public:
        Corredor();
        Corredor(char*, int, int, Competicao);

        void imprime_competicao();
        void imprime_info();

        int getPeso();
        Competicao getCompeticao();

        void setPeso(int);
        void setCompeticao(Competicao);

    private:
        int peso;
        Competicao competicao;
};
