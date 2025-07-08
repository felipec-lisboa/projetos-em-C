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
    virtual void mostra();
};
Pessoa::~Pessoa()
{
    cout << "Classe destruida"<<endl;
}
void Pessoa::mostra()
{
    cout<<"pessoa mostra"<< endl;
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
    void mostra()
    {
        cout<<"Cliente mostra"<< endl;
        cout << "Nome: "<< nome<< "\n"<< "Idade: "<< idade<< "\n"<<"Salario: " << salario <<endl;

    }

};


int main()
{

  //  Pessoa p1("Felipe", 18);
//    Pessoa p2("Maria", 68);
    Cliente c1("Julia",15,1000.52);
//    p1.mostra();
  //  p2.mostra();
    c1.mostra();

    return 0;
}
