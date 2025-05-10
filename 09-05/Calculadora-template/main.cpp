#include <iostream>

#include "Calculadora.h"

using namespace std;

int main()
{

    Calculadora<int, float> calc;

   /* int v1, v2;
    cout << "Digite o valor 1:" << endl;
    cin >> v1;
    cout << "Digite o valor 2:" << endl;
    cin >> v2;*/


    cout << "----->" <<calc.soma(1, 5);
    return 0;
}
