#include <iostream>
#include <stdio.h>

#include "Atleta.h"
#include "Data.h"
#include "Nadador.h"
#include "Competicao.h"


using namespace std;

int main()
{
    int dia, mes, ano, idade;
    char *nome = new char[100], *nomeCompeticao = new char[30], *categoria = new char[25];

    cout << "Digite o nome do nadador:" << endl;
    cin.getline(nome, 100);
    setbuf(stdin, NULL);

    cout << "Digite a idade de " << nome << ": " << endl;
    cin >> idade;
    setbuf(stdin, NULL);


    cout << "Digite a categoria de " << nome << ": " << endl;
    cin.getline(categoria, 25);
    setbuf(stdin, NULL);

    cout << "Digite o nome da competicao: " << endl;
    cin.getline(nomeCompeticao, 30);
    setbuf(stdin, NULL);

    cout << "Digite o dia, mes e ano da competicao(Ex: DD MM AAAA): " << endl;
    cin >> dia;
    cin >> mes;
    cin >> ano;

    Data data(dia, mes, ano);
    Competicao competicao(nomeCompeticao, data);
    Nadador nadador(nome, idade, categoria);

    data.imprime_data();

    cout << " --------------------- " << endl;

    competicao.imprime_data();

    cout << " --------------------- " << endl;

    nadador.imprime_info();
    return 0;
}
