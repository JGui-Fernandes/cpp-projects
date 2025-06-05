#include <iostream>

#include "Pilha.h"

using namespace std;

int main()
{

    Pilha<char> pilha;

    pilha.push('A');
    pilha.push('B');
    pilha.push('C');

    cout << pilha.top() << endl;

    pilha.pop();

    pilha.push('J');

    pilha.imprime();

    return 0;
}
