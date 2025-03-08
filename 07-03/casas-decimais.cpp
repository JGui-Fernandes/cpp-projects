#include <iostream>
#include <iomanip> // Para manipulação de precisão

using namespace std;

int main() {
    double PI = 3.14159265;

    // Define a precisão para 5 casas decimais
    cout.precision(5);
    cout << setiosflags(ios::fixed) << PI << endl; // Imprime PI com 5 casas decimais

    // Alternativa:
    // Define e imprime PI com 5 casas decimais em uma única linha
    cout << setiosflags(ios::fixed) << setprecision(5) << PI;

    return 0;
}
