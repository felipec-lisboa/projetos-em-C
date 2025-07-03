#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int Numero;
    float Numero2;
    double Numero3 = 45345.90455;
    char Caractere = '3';
    char Caractere2 = 'k';
    Numero = 45;
    Numero2 = 55.56f;

    cout << "Valor Numero: " << Numero << endl;
    cout << "Tamanho da variavel: " << sizeof(Numero) << endl;
    cout << "Endereco na memoria: " << &Numero << endl;

    cout << "Valor Numero2: " << Numero2 << endl;
    cout << "Tamanho da variavel: " << sizeof(Numero2) << endl;
    cout << "Endereco de memoria: " << &Numero2 << endl;

    cout << "Valor Numero3: " << setprecision(12) << Numero3 << endl;
    cout << "Tamanho da variavel: " << sizeof(Numero3) << endl;
    cout << "Endereco de memoria: " << &Numero3 << endl;

    cout << "Valor Caractere: " << Caractere << endl;
    cout << "Tamanho da variavel: " << sizeof(Caractere) << endl;
    cout << "Endereco de memoria: " << (void *)&Caractere << endl;

    cout << "Valor Caractere2: " << Caractere2 << endl;
    cout << "Tamanho da variavel: " << sizeof(Caractere2) << endl;
    cout << "Endereco de memoria: " << (void *)&Caractere2 << endl;


    return 0;
}
