#ifndef CALCULADORA_H_INCLUDED
#define CALCULADORA_H_INCLUDED

template <class C, class C2>
class Calculadora{

    public:

        C soma(C valor1, C valor2);

        C subtracao(C valor1, C valor2);

        C multiplica(C valor1, C valor2);

        C divide(C valor1, C valor2);

        C2 soma(C2 valor1, C2 valor2);

        C2 subtracao(C2 valor1, C2 valor2);

        C2 multiplica(C2 valor1, C2 valor2);

        C2 divide(C2 valor1, C2 valor2);

};

template <class C, class C2>
C Calculadora<C, C2>::soma(C valor1, C valor2){
    return valor1 + valor2;
}

template <class C, class C2>
C Calculadora<C, C2>::subtracao(C valor1, C valor2){
    return valor1 - valor2;
}

template <class C, class C2>
C Calculadora<C, C2>::multiplica(C valor1, C valor2){
    return valor1 * valor2;
}

template <class C, class C2>
C Calculadora<C, C2>::divide(C valor1, C valor2){
    return valor1 / valor2;
}

template <class C, class C2>
C2 Calculadora<C, C2>::soma(C2 valor1, C2 valor2){
    return valor1 + valor2;
}

template <class C, class C2>
C2 Calculadora<C, C2>::subtracao(C2 valor1, C2 valor2){
    return valor1 - valor2;
}

template <class C, class C2>
C2 Calculadora<C, C2>::multiplica(C2 valor1, C2 valor2){
    return valor1 * valor2;
}

template <class C, class C2>
C2 Calculadora<C, C2>::divide(C2 valor1, C2 valor2){
    return valor1 / valor2;
}

#endif // CALCULADORA_H_INCLUDED


