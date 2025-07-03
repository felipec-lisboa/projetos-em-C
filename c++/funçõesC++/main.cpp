#include <iostream>

using namespace std;

int SomaNumeros(int X, int Y){

    return  X + Y;;


}


void Mensagem(){


    cout << "Mensagem de Marte... Chegamos bem...\n";

}


int main()
{
    int Numero, x, RetornoDaFuncao;
    Mensagem();
    cout << "Digite um numero: " << endl;
    cin >> Numero;
    cout  << "Digite numero que deseja somar: " << endl;
    cin >> x;
    cout <<"A soma deste numero : " << Numero << " " <<"Com o numero " << x << " "<< "Sera: "<<SomaNumeros(Numero, x) << endl;

    RetornoDaFuncao = SomaNumeros(200, -300);
    cout << RetornoDaFuncao << endl;
    cout << SomaNumeros(Numero, SomaNumeros(150,1400));




    return 0;
}
