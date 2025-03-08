class Triangulo{

    public: 
        Triangulo();
        Triangulo(float base, float altura);

        void setBase(float base);
        void setAltura(float altura);

        float getBase();
        float getAltura();

        float getArea();
    private:
        float base;
        float altura;
};