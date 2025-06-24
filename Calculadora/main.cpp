#include <iostream>

using namespace std;

float soma(float num1, float num2);
float subtracao(float num1, float num2);
float multiplicacao(float num1, float num2);
float divisao(float num1, float num2);

int main()
{
    float num1, num2;
    cout << "Digite um numero: " << endl;
    cin >> num1;
    cout << "Digite outro numero: " << endl;
    cin >> num2;


    cout << "Resultado das operacaoes: \n"<< "Soma: " << soma(num1, num2) << endl << "Subtracao: " << subtracao(num1, num2) << endl << "Multiplicacao: "
    << multiplicacao(num1,num2) << endl << "Divisao: " << divisao(num1,num2);
    return 0;
}

float soma(float num1, float num2)
{
    return num1 + num2;
}

float subtracao(float num1, float num2)
{
    return num1 - num2;
}

float multiplicacao(float num1, float num2)
{
    return num1 * num2;
}
float divisao(float num1, float num2)
{
    return num1 / num2;
}
