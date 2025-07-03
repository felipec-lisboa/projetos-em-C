#include <iostream>

using namespace std;

int main()
{
    int Numero1, Numero2;
    int Soma, Subtracao, multiplicacao, modulo;
    float divisao;
    cout << "Digite um numero: ";
    cin >> Numero1;
    cout << "Numero 1 = " << Numero1 << endl;
    cout << "Digite o segundo numero: ";
    cin >> Numero2;
    cout << "Numero 2 = " << Numero2 << endl;
    Soma = Numero1 + Numero2;
    cout << "A soma dos dois numeros e: " << Soma << endl;
    Subtracao = Numero1 - Numero2;
    cout << "A Subtracao dos dois numeros e: " << Subtracao << endl;
    multiplicacao = Numero1 * Numero2;
    cout << "A multiplicacao dos dois numeros e: " << multiplicacao << endl;
    divisao = Numero1 / Numero2;
    cout << "A divisao dos dois numeros e: " << divisao << endl;
    modulo = Numero1 % Numero2;
    cout << "O resto da divisao dos dois numeros e: " << modulo << endl;
    return 0;
}
