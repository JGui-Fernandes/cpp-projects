#include <iostream>

using namespace std;

int main() {
    int valor1;
    int valor2;

    cout << "Leitura do primeiro valor: ";
    cin >> valor1;
    cout << valor1 << endl;
    cout << "Leitura do segundo valor: ";
    cin >> valor2;
    cout << valor2 << endl;

    float x;
    float y;

    // entrada de um float, pressiona <ENTER>, entrada de outro float, pressiona <ENTER>
    cin >> x >> y;

    cout << "soma: " << x + y;


    return 0;
}
