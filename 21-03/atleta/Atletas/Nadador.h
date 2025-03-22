#include <string>
#include <iostream>
#include "Atleta.h"

using namespace std;

class Nadador: public Atleta{

    public:
        Nadador();
        Nadador(char*, int, char*);

        char* getCategoria();
        void setCategoria(char*);

        void imprime_info();

    private:
        char* categoria;

};
