#pragma once

#include <string>
#include <iostream>

using namespace std;

class Pais{

    public:
        Pais();
        Pais(char* iso, char* nome, float dimensao);

        char* getIso();
        void setIso(char* iso);

        char* getNome();
        void setNome(char* nome);

        int getPopulacao();
        void setPopulacao(int populacao);

        float getDimensao();
        void setDimensao(float dimensao);

        void adicionaFronteira(Pais& pais);

        bool verificaPaisesIguais(Pais& pais);

        bool verificaFronteira(Pais& pais);

        float getDensidade();

        void comparaFronteiras(Pais& pais);

        void imprimeInfo();

        void imprimeFronteiras();

    private:
        char* iso;
        char* nome;
        int populacao;
        float dimensao;
        Pais* fronteira[40];
        int quantidadeFronteira;
};
