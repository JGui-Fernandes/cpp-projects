#include <string>

using namespace std;

class Pessoa {
public:
    Pessoa();
    ~Pessoa();
    void retorna_idade(int ano);
private:
    string nome;
    int ano_nascimento;
};
