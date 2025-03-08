#pragma once
#include <string>
#include <iostream>

using namespace std;

enum tipoDeConta{ contaCorrente, contaConjunta, contaJuridica, poupanca };

class ContaBancaria{

    public:
        //Construtor padrão
        ContaBancaria();
        //Destrutor
        ~ContaBancaria();
        
        //Métodos
        void Abrir (int numeroConta, int numeroAgencia, char *nome, int tipo);
        void AlteraSenha (char *senha);
        void Depositar (float valor);
        void Sacar (float valor);
        float Consultar();
        void Fechar();
        void Transferencia(transacao transacao);
        ContaBancaria BuscarContaPorNumero(ContaBancaria contas[], int numeroConta);
    private:
        int numeroDaConta;
        int numeroDaAgencia;
        char*nomeCliente;
        char*senha;
        int tipoDaConta;
        float saldo;
        bool ativa;
        int limite;
};

struct transacao {
    int tipo;
    float valor;
    char *data;
    int *de, *para;
};