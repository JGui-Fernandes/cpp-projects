#include <iostream>
#include "Fruta.h"
#include "Melancia.h"
#include "Banana.h"

using namespace std;

int main()
{
    Banana b(20.00, "Maca");

    Melancia m(40, 10, false);
    cout << "Melancia: " << m.calcula_preco_final();
    return 0;
}
