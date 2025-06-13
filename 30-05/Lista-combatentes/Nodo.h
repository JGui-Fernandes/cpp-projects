#ifndef NODO_H_INCLUDED
#define NODO_H_INCLUDED

class Nodo{

    public:
        Nodo();
        Nodo(int valor, char nome);

        void setNome(char nome);
        char getNome();

        void setValor(int valor);
        int getValor();

        void setProximo(Nodo* proximo);
        Nodo* getProximo();

        void setAnterior(Nodo* anterior);
        Nodo* getAnterior();

    private:
        char nome;
        int valor;
        Nodo* proximo;
        Nodo* anterior;
};

Nodo::Nodo(){
    proximo = nullptr;
    anterior = nullptr;
}

Nodo::Nodo(int valor, char nome){
    this->valor = valor;
    this->nome = nome;
    proximo = nullptr;
    anterior = nullptr;
}

void Nodo::setNome(char nome){
    this->nome = nome;
}

char Nodo::getNome(){
    return nome;
}

void Nodo::setValor(int valor){
    this->valor = valor;
}

int Nodo::getValor(){
    return valor;
}

void Nodo::setProximo(Nodo* proximo){
    this->proximo = proximo;
}

Nodo* Nodo::getProximo(){
    return proximo;
}

void Nodo::setAnterior(Nodo* anterior){
    this->anterior = anterior;
}

Nodo* Nodo::getAnterior(){
    return anterior;
}

#endif // NODO_H_INCLUDED
