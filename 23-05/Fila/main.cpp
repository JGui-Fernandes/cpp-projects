#include <iostream>
#include "Nodo.h"
#include "Fila.h"

using namespace std;

int main()
{
   Fila<char> fila;
   fila.adicionarFila('A');
   fila.adicionarFila('B');
   fila.adicionarFila('C');

   fila.imprime();

   fila.atenderFila();
   fila.imprime();

    return 0;
}
