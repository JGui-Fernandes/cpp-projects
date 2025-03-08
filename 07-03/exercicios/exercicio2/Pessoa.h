#include <string>
#include <iostream>

using namespace std;

class Pessoa{

    public:

        Pessoa();
        Pessoa(string novoNome, int novaIdade, int novaAltura, int novaQtdeIrmaos, string novoEndereco);
        Pessoa(string novoNome);

        void imprime_info();
        
        bool is_filho_unico();
        
        string getNome();
        int getIdade();
        int getAltura();
        int getQtdeIrmaos();
        string getEndereco();

        void setNome(string novoNome);
        void setIdade(int novaIdade);
        void setAltura(int novaAltura);
        void setQtdeIrmaos(int novaQtdeIrmaos);
        void setEndereco(string novoEndereco);

    private:
        string nome;
        int idade;
        int altura;
        int qtdeIrmaos;
        string endereco;

};