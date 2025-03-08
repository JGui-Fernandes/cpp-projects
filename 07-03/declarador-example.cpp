#include <iostream>

// declaração para cout, endl e string
using std::cout;
using std::endl;
using std::string;

int main() {
    string nome;
    cout << "Informe o seu nome: ";
    std::cin >> nome;
    cout << "Ola " << nome << "!" << endl;
    cout << "Seja bem-vindo(a)!";

    return 0;
}
