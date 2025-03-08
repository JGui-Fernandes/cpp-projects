#include <ContaBancaria.cpp>

int main(){

    ContaBancaria* conta1 = new ContaBancaria();
    ContaBancaria* conta2 = new ContaBancaria();

    ContaBancaria contas[10];

    conta1->Abrir(1, 1, "João", 0);
    conta2->Abrir(2, 1, "Arthur", 0);

    contas[0] = *conta1;
    contas[1] = *conta2;

    
}