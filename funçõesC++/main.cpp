#include <iostream>

using namespace std;

int SomaNumeros(int X, int Y){

    return  X + Y;;


}



int main()
{
    int Numero, x;
    cout << "Digite um numero: " << endl;
    cin >> Numero;
    cout  << "Digite numero que deseja somar: " << endl;
    cin >> x;
    cout <<"A soma deste numero : " << Numero << " " <<"Com o numero " << x << " "<< "Sera: "<<SomaNumeros(Numero, x) << endl;

    return 0;
}
