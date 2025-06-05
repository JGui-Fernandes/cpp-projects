#include <iostream>

#include "Pilha.h"
#include "Gerenciador.h"

using namespace std;

int main()
{
    srand(time(0));
    int turnos;

    cout << "Digite o numero de turnos desejados: " << endl;
    cin >> turnos;


    Pilha<int>* lavados = new Pilha<int>();
    Pilha<int>* secos = new Pilha<int>();

    Gerenciador<int> gerenciador;

    gerenciador.simular(turnos, lavados, secos);

    cout << "Lavados mas nao secos: " << lavados->getSize() - secos->getSize();

    return 0;
}
