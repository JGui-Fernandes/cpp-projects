#include <iostream>
#include <stdio.h>

#include "Atleta.h"
#include "Data.h"
#include "Nadador.h"
#include "Competicao.h"
#include "Corredor.h"
#include "InformacoesAtleta.h"


using namespace std;

int main()
{
    InformacoesAtleta infos;

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

    Nadador *nadador = new Nadador(nome, idade, categoria);

    Data data(25, 06, 2004);
    Competicao competicao("JEMUSA", data);
    Corredor *corredor = new Corredor("Nadador profissional", 20, 75, competicao);

    infos.imprime_exclusivos_atleta(corredor);
    infos.imprime_informacoes_atleta(corredor);


    return 0;
}
