#include <iostream>

using namespace std;

int main()
{
    float num1,num2, num3;
    float media = 0;

    cout << "Digite tres numeros,de espaco entre cada um e aperte enter: ";
    cin >> num1 >> num2 >> num3;
    cout << "Os numeros digitados foram: " << num1 << " " <<  num2  << " " <<  num3  << endl;
    media = (num1 + num2 + num3)/3 ;
    cout << "A media desses valores e: " << media;
    return 0;
}
