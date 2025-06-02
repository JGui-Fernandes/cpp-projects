#include <iostream>

#include "Pilha.h"

using namespace std;

int main()
{
    Pilha<char> pilha;

    pilha.push('A');
    pilha.push('B');
    pilha.push('C');

    pilha.pop();

    pilha.imprime();
    return 0;
}
