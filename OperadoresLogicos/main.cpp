#include <iostream>

using namespace std;

int main()
{
    int numero;
    bool ResultadoLogico, ResultadoLogico2;
    cout << "Digite um numero" << endl;
    cin >> numero;
    cout << "True = 1 e False = 0" << endl;
    ResultadoLogico = ((numero > 100) && (numero != 0));
    ResultadoLogico2 = ((numero == 100 ) || (numero > 200)) && (numero < 1000);
    cout << ResultadoLogico << endl;
    cout << ResultadoLogico2 << endl;
    return 0;
}
