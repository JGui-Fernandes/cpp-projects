#include <iostream>
#include "Pais.h"

using namespace std;

int main()
{

    Pais *brasil = new Pais("BRA", "Brasil", 8515767);
    brasil->setPopulacao(214000000);

    Pais *argentina = new Pais("ARG", "Argentina", 2780400);
    argentina->setPopulacao(45000000);

    Pais *colombia = new Pais("COL", "Colombia", 1141748);
    colombia->setPopulacao(51000000);

    Pais *chile = new Pais("CHL", "Chile", 756102);
    chile->setPopulacao(19000000);

    Pais *peru = new Pais("PER", "Peru", 1285216);
    peru->setPopulacao(33000000);

    Pais *alemanha = new Pais("DEU", "Alemanha", 357022);
    alemanha->setPopulacao(83000000);

    Pais *franca = new Pais("FRA", "França", 551695);
    franca->setPopulacao(67000000);

    Pais *espanha = new Pais("ESP", "Espanha", 505990);
    espanha->setPopulacao(47000000);

    Pais *italia = new Pais("ITA", "Italia", 301340);
    italia->setPopulacao(59000000);

    Pais *portugal = new Pais("PRT", "Portugal", 92212);
    portugal->setPopulacao(10300000);


    brasil->adicionaFronteira(*colombia);
    brasil->adicionaFronteira(*chile);

    argentina->adicionaFronteira(*peru);
    argentina->adicionaFronteira(*colombia);
    argentina->adicionaFronteira(*chile);

    brasil->comparaFronteiras(*argentina);


    return 0;
}
