#include "Aluno.h"
#include "Pessoa.h"

Aluno::Aluno(){

}

Aluno::Aluno(char* nome, int idade, float nota):Pessoa(nome, idade){
    this->nota = nota;
}

Aluno::~Aluno(){

}

void Aluno::setNota(float nota){
    this->nota = nota;
}

float Aluno::getNota(){
    return nota;
}

void Aluno::imprime_dados(){
    Pessoa::imprime_dados();
    cout << "Nota: " << nota << endl;
    cout << "\n" << endl;
}
