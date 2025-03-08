#include <ContaBancaria.h>

ContaBancaria::ContaBancaria(){
    ativa = true;
    limite = 1000;
}
void ContaBancaria::Depositar (float valor){
    saldo += valor;
}

void ContaBancaria::Sacar (float valor){
    saldo -= valor;
}

void ContaBancaria::Transferencia(transacao transacao){
//    ContaBancaria de = BuscarContaPorNumero(transacao.*de);
}

void ContaBancaria::Abrir (int numeroConta, int numeroAgencia, char *nome, int tipo){
    numeroDaConta = numeroConta;
    numeroDaAgencia = numeroAgencia;
    *nomeCliente = *nome;
    tipoDaConta = tipo;
}

ContaBancaria ContaBancaria::BuscarContaPorNumero(ContaBancaria contas[], int numeroConta){
    int cont = 0;
    while(contas[cont].ativa){
        if(contas[cont].numeroDaConta == numeroConta){
            return contas[cont];
        }
    }
}