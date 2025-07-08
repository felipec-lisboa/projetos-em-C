#include <iostream>

using namespace std;

class Pessoa
{
protected:
    string nome;
    int idade;
public:
    Pessoa(string _nome, int _idade)
    {
        nome = _nome;
        idade = _idade;
    }
    ~Pessoa();
    void mostraPessoa();
};
Pessoa::~Pessoa()
{
    cout << "Classe destruida"<<endl;
}
void Pessoa::mostraPessoa()
{

    cout << "Nome: "<< nome<< "\n"<< "Idade: "<< idade<< endl;
}


class Cliente: public Pessoa
{
private:
    double salario;
public:
    Cliente(string _nome, int _idade, double _salario) : Pessoa(_nome,_idade)
    {
        salario = _salario;
    }
    void mostraCliente()
    {
        cout << "Nome: "<< nome<< "\n"<< "Idade: "<< idade<< "\n"<<"Salario: " << salario <<endl;

    }

};


int main()
{

    Pessoa p1("Felipe", 18);
    Pessoa p2("Maria", 68);
    Cliente c1("Julia",15,1000.52);
    p1.mostraPessoa();
    p2.mostraPessoa();
    c1.mostraCliente();

    return 0;
}
