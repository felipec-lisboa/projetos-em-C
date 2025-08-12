#include <iostream>

using namespace std;
class Livro
{
protected:
    string titulo;
    string autor;
    float preco;
    int anoPublicacao;

public:
    Livro()
    {
        titulo = "Desconhecido";
        autor = "Desconhecido";
        preco = 0.0;
        anoPublicacao = 0;
    }
    Livro(string _titulo, string _autor, float _preco, int _anoPublicacao)
    {
        titulo = _titulo;
        autor = _autor;
        preco = _preco;
        anoPublicacao = _anoPublicacao;
    }

    void mostrar()
    {
        cout<<"Livro: " << titulo << "\n"
            <<"Autor: " << autor << "\n"
            <<"Ano: "<< anoPublicacao << "\n"
            <<"Preco: R$" << preco << endl;
    }

    void setPreco(float _preco);
    float getPreco();
    float getPrecoComDesconto(float percentual);

};

void Livro::setPreco(float _preco)
{

    preco = _preco;

}

float Livro::getPreco()
{

    return preco;

}

float Livro::getPrecoComDesconto(float percentual)
{
    float desconto = preco * (percentual / 100);
    float precoComDesconto = preco - desconto;
    return precoComDesconto;
}


class Ebook :public Livro{
private:
    float tamanhoMB;
    string formato;

public:
    Ebook()
    :Livro()
    {
    tamanhoMB = 0.0;
    formato = "Desconhecido";
    }
    Ebook(float _tamanhoMB, string _formato):Livro()
    {
    tamanhoMB = _tamanhoMB;
    formato = _formato;

    }

    void setTamanhoMB(float _tamanhoMB){
    tamanhoMB = _tamanhoMB;
    }
    float getTamanhoMB(){

        return tamanhoMB;

    }
    void setFormato(string _formato){
    formato = _formato;

    }
    string getFormato(){

        return formato;
    }

};




int main()
{
    Livro l1;
    Livro l2("Harry", "Felipe", 109.90,2025);
    Ebook e1;
    cout << "ebook: "<< e1.getFormato() << " " << e1.getTamanhoMB()<< endl;
    l1.mostrar();
    l2.mostrar();
    cout << "Preço de l2 com 10% de desconto: R$"
         << l2.getPrecoComDesconto(10.0f) << "\n";

    return 0;
}
