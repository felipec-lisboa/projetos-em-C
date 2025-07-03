#include <iostream>

using namespace std;

int parImpar(int num)
{

    if (num %2 == 0)
    {

        cout << "Seu numero e par: ";
    }
    else
    {
        cout << "Seu numero e impar: ";
    };

    return num;
}


int main()
{
    int numero;

    cout << "Digite um numero para saber se ele e par ou impar: " << endl;
    cin >> numero;
    cout << parImpar(numero) << endl;

    return 0;
}
