#include "Nadador.h"

Nadador::Nadador(){

}

Nadador::Nadador(char* nome, int idade, char* categoria): Atleta(nome, idade){
    this -> categoria = categoria;
}

char* Nadador::getCategoria(){
    return categoria;
}

void Nadador::setCategoria(char* categoria){
    this -> categoria = categoria;
}

void Nadador::imprime_info(){
    Atleta::imprime_info();
    cout << "Categoria: " << categoria << endl;
}
