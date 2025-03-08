#include <iostream>

using namespace std;

int main() {
    cout << "Hello World!\n";

    // impressão de uma linha com múltiplos comandos
    cout << "Teste com ";
    cout << "dois couts\n";

    // manipulador endl - gera um caractere nova linha
    // Além disso, descarrega o buffer de saída
    cout << "Escrevendo uma linha..." << endl;

    cout << "Mais uma vez...\n";

    int x = 15;

    int y = 20;

    // imprime uma string e o resultado da soma entre as variáveis x e y
    cout << "Saida encadeada: soma de dois numeros " << x + y << endl;


    return 0;
}
