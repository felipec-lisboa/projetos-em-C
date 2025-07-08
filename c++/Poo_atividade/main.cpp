#include <iostream>

using namespace std;

class Produtos
{
private:
    int codigo;
    string nome;
    double preco;

public:
    Produtos()
    {
        codigo = 0;
        nome = "Desconhecido";
        preco = 0.0;
    }

Produtos(int _codigo, string _nome, double _preco)
{
    codigo = _codigo;
    nome   = _nome;
    if (_preco < 0)
        preco = 0.0;
    else
        preco = _preco;
}


    void setCodigo(int _codigo);
    int getCodigo();

    void setNome(string _nome);
    string getNome();

    void setPreco(double _preco);
    double getPreco();

    void exibir();
};

void Produtos::exibir()
{

    cout << "Codigo: " << codigo << "\n"
         << "Nome: " << nome << "\n"
         << "Preco: " << preco << "\n";

}


void Produtos::setCodigo(int _codigo)
{
    codigo = _codigo;
}
int Produtos::getCodigo()
{

    return codigo;

}

void Produtos::setNome(string _nome)
{
    nome = _nome;
}

string Produtos:: getNome()
{
    return nome;


}

void Produtos::setPreco(double _preco)
{
    preco = _preco;
}



double Produtos::getPreco(){

    return preco;

}

int main()
{
    Produtos p1;
    p1.exibir();

    Produtos p2(1,"Caneta",-2.90);
    p2.exibir();

    return 0;
}
