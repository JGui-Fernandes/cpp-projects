#include "Empresa.h"
#include "FuncionarioCaixa.h"
#include "Calculadora.h"

int main(){

    Calculadora calculadora1("Azul");
    Calculadora calculadora2("Vermelha");

    FuncionarioCaixa funcionario1("Joao", "Sapucaia do Sul", calculadora1);
    FuncionarioCaixa funcionario2("Duda", "São Leopoldo", calculadora2);

    cout << "Funcionario 1: " << endl;
    cout << "2 + 2 = " << funcionario1.soma((float)2, (float)2) << endl;
    cout << " 5 - 4 = " << funcionario1.subtrai((float)5, (float) 4) << endl;
    cout << "2 * 3 = " << funcionario1.multiplica((float)2, (float)3) << endl;

    cout << "Funcionario 2: " << endl;
    cout << "6 / 3 = " << funcionario2.divide((float)6, (float)3) << endl;
    cout << "7 + 2 = " << funcionario2.soma((float)7, (float)2) << endl;
    cout << "8 * 3 = " << funcionario2.multiplica((float)8, (float)3) << endl;

    Empresa empresa("Joaozin Gameplay", funcionario1, funcionario2);
    empresa.imprime_info();
    
    return 0;
}