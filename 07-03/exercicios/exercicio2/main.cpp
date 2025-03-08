#include "Pessoa.cpp"

int main(){
    // string nome;

    // cout << "Digite seu nome: " << endl;
    // cin >> nome;

    // Pessoa pessoa;
    // Pessoa pessoa2("Joao", 20, 170, 2, "Sapucaia");

    // pessoa.setNome(nome);

    // cout << pessoa.getNome();

    // pessoa2.imprime_info();

    // cout << pessoa2.getNome();

    // pessoa2.is_filho_unico();

    // cout << pessoa2.getIdade();


    string nome, endereco;
    int idade, altura, qtdeIrmaos;

    cout << "Digite seu nome: \n";
    cin >> nome;
    cout << endl;

    cout << "Digite sua idade: \n";
    cin >> idade;
    cout << endl;

    cout << "Digite sua altura: \n";
    cin >> altura;
    cout << endl;

    cout << "Digite quantos irmaos voce tem: \n";
    cin >> qtdeIrmaos;
    cout << endl;
    
    cout << "Digite seu endereco: \n";
    cin >> endereco;
    cout << endl;

    Pessoa p;

    p.setNome(nome);
    p.setIdade(idade);
    p.setAltura(altura);
    p.setQtdeIrmaos(qtdeIrmaos);
    p.setEndereco(endereco);

    p.imprime_info();

    return 0;
}