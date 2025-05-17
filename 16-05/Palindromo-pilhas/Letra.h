#ifndef LETRA_H_INCLUDED
#define LETRA_H_INCLUDED

class Nodo{

    public:
        Nodo();
        Nodo(Nodo* anterior, char elemento);
        Nodo(Nodo* nodo);
        Nodo(char elemento);
        Nodo* getProximo();
        Nodo* getAnterior();
        char getElemento();

        void setProximo(Nodo*);
        void setAnterior(Nodo*);
        void setElemento(char);

    private:
        Nodo* proximo;
        Nodo* anterior;
        char elemento;
};

#endif // LETRA_H_INCLUDED
