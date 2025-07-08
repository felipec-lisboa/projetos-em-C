#include <iostream>
#include <string>
using namespace std;

class Pessoa
{
private:
    int id;
    string nome;
    int idade;

public:

    Pessoa()
    {
        nome = "Desconhecido";
        id = 0;
        idade = 0;
    }
    Pessoa(int _idade, string _nome, int _id)
    {
        idade = _idade;
        nome = _nome;
        id = _id;

    }

    ~Pessoa(){

    cout << "Classe Destruida"<< endl;

    }

    void exibir();
    void setNome(string _nome);
    string getNome();

    void setId(int _id);
    int getId();

    void setIdade(int _idade);
    int getIdade();
};

void Pessoa::exibir()
{

    cout<< "Nome "<< nome << "\n"<< "Idade "<< idade << "\n"<< "Id "<< id<< "\n";

}

void Pessoa::setIdade(int _idade)
{
    idade = _idade;
}

int Pessoa::getIdade()
{

    return idade;
}

void Pessoa::setId(int _id)
{
    id = _id;
}

int Pessoa::getId()
{
    return id;
}

string Pessoa::getNome()
{
    return nome;
}

void Pessoa::setNome(string _nome)
{
    nome = _nome;
}


int main()
{
    Pessoa amigo;

    amigo.setId(15);
    cout<< "Id: "<< amigo.getId()<<endl;

    amigo.setNome("Felipe");
    cout<< "Nome: "<< amigo.getNome()  << endl;

    amigo.setIdade(20);
    cout<< "Idade: "<< amigo.getIdade()<<endl;

    Pessoa p2(10,"Felipe",1);
    p2.exibir();

    Pessoa p3;
    p3.exibir();
    p3.~Pessoa();
    return 0;
}
