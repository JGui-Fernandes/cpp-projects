#include <iostream>

#include "Lista.h"

using namespace std;

int main()
{
    Lista<char> lista;

    lista.adicionarFinalLista('A');
    lista.adicionarFinalLista('C');
    lista.adicionarFinalLista('E');

    lista.adicionarPosicaoLista('B', 0);
    lista.adicionarPosicaoLista('D', 4);

    lista.imprime();
    return 0;
}
