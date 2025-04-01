#include <string>
#include <iostream>
#include "Fruta.h"

using namespace std;

class Melancia: public Fruta{

    public:

        Melancia();
        Melancia(float preco, float precoAdicional, bool epoca);

        void setPrecoAdicional(float precoAdicional);
        float getPrecoAdicional();

        void setEpoca(bool epoca);
        bool isEpoca();

        float calcula_preco_final();

    private:
        float precoAdicional;
        bool epoca;

};
