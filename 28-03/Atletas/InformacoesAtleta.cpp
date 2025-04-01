#include "InformacoesAtleta.h"
#include "Atleta.h"
#include "Nadador.h"
#include "Corredor.h"

void InformacoesAtleta::imprime_exclusivos_atleta(Atleta* atleta) {
    if(Nadador* n = dynamic_cast<Nadador*>(atleta)) {
        cout << "Eh um nadador, e sua categoria eh: " << n->getCategoria() << endl;
    }
    else if(Corredor* c = dynamic_cast<Corredor*>(atleta)) {
        cout << "Eh um corredor, e o peso deste corredor eh: " << c->getPeso() << endl;
    }
}

void InformacoesAtleta::imprime_informacoes_atleta(Atleta* atleta) {
    if(Nadador* n = dynamic_cast<Nadador*>(atleta)) {
        n->imprime_info();
    }
    else if(Corredor* c = dynamic_cast<Corredor*>(atleta)) {
        c->imprime_info();
    }
}
