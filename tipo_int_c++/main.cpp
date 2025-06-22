#include <iostream>

using namespace std;

int main()
{
    int Numero;
    Numero = 45;
    cout << "Numero: " << Numero << endl;
    cout << "Tamanho da variavel Numero: " << sizeof(Numero) << "Bytes" << endl;
    cout << "Endereco carregado na memoria: " << &Numero << endl;


    return 0;
}
