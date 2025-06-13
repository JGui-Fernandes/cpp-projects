#include <iostream>

#include "Gerenciador.h"

using namespace std;

int main()
{
    srand(time(0));

    Lista* lista = new Lista();

    Gerenciador gerenciador;

    gerenciador.organizar(lista);

    lista->imprime();

    return 0;
}
