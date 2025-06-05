#include <iostream>

#include "Lista.h"

using namespace std;

int main()
{
    Lista<char> lista;

    lista.adicionarFinalLista('A');
    lista.adicionarFinalLista('C');
    lista.adicionarFinalLista('E');

    lista.adicionarPosicaoLista('B', 1);
    lista.adicionarPosicaoLista('D', 3);

    lista.imprime();
    return 0;
}
