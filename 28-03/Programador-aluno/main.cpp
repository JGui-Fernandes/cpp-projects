#include <iostream>
#include "Pessoa.h"
#include "Aluno.h"
#include "Programador.h"

using namespace std;

int main()
{
    char nome[40], linguagem[20];
    Pessoa *p;
    int n, idade, escolha;
    float nota;

    cout << "Digite o numero de pessoas desejado: " << endl;
    cin >> n;
    setbuf(stdin, NULL);

    for(int i = 0; i < n; i++){

        cout << "Digite o nome: " << endl;
        cin.getline(nome, 40);
        setbuf(stdin, NULL);

        cout << "Digite a idade: " << endl;
        cin >> idade;
        setbuf(stdin, NULL);

        cout << "Qual o tipo de usuario? (1 - Programador | 2 - Aluno): " << endl;
        cin >> escolha;
        setbuf(stdin, NULL);

        if(escolha == 1){
            cout << "Qual a linguagem? " << endl;
            cin.getline(linguagem, 20);
            setbuf(stdin, NULL);

            p = new Programador(nome, idade, linguagem);
        }
        else{
            cout << "Qual a nota?" << endl;
            cin >> nota;
            setbuf(stdin, NULL);

            p = new Aluno(nome, idade, nota);
        }

        p->imprime_dados();

    }

    return 0;
}
