#include <iostream>

using namespace std;

int main()
{
    int Numero1, Numero2;
    cout << "Digite um numero: ";
    cin >> Numero1;
    cout << "Numero 1 = " << Numero1 << endl;
    cout << "Digite o segundo numero: ";
    cin >> Numero2;
    cout << "Numero 2 = " << Numero2;

    cout << "Digite dois numeros separados por espaco e aperte enter: ";
    cin >> Numero1 >> Numero2;
    cout << "Soma = " << (Numero1 + Numero2);

    return 0;
}
