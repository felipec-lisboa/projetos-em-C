#include <iostream>
#include <tchar.h>
using namespace std;

int main()
{
    _tsetlocale(LC_ALL, _T("portuguese"));
    int NumVidas = 5;
    int Score = 1350;

    cout << "********INICIO DO JOGO********" << endl;
    cout << "Vidas Jogador: " << NumVidas <<  endl;
    cout << "Pontuação: " << Score << endl;
    cout << "Endereço que Numvidas ocupa na memória ram: " << &NumVidas << endl;
    cout << "Endereço que Score ocupa na memória ram: " << &Score << endl;
    cout << "******************************" << endl;

    cout << "********DURANTE O JOGO********" << endl;
    Score = Score + 150;
    NumVidas = NumVidas - 1;
    cout << "A pontuação agora é: " << Score << endl;
    cout << "O seu numero de vidas agora é: " << NumVidas << endl;
    cout << "******************************" << endl;




    return 0;
}
