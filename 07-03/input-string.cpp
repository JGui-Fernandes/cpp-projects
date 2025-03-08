#include <iostream>

using namespace std;

int main() {
    const int SIZE = 100;
    char armazena[SIZE];

    cout << "Digite uma frase com espaços: " << endl;
    cin.getline(armazena, SIZE);
    cout << "A frase digitada é: \n" << armazena << endl;

    return 0;
}
