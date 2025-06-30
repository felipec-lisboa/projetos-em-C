#include <iostream>

using namespace std;

class Casa
{
private:
    int NumQuartos{ 4 };
    float Tamanho{ 90.0f };
    bool BTemSuite{ true };

public:
    void MostrarTamanho();
    int ObtenhaNumeroDeQuartos();
    bool TemSuite();
    void SetNumQuartos(int Num);
};
int main()
{
    Casa CasaDePraia;
    CasaDePraia.MostrarTamanho();
    cout << "\n Numero de quartos: " <<CasaDePraia.ObtenhaNumeroDeQuartos();
    cout << "\n Tem suite: "<<CasaDePraia.TemSuite();

    return 0;
}

void Casa::MostrarTamanho()
{
    cout << "\nTamanho: " << Tamanho;
}

int Casa::ObtenhaNumeroDeQuartos()
{

    return NumQuartos;

}

bool Casa::TemSuite()
{

    return BTemSuite;

}

void Casa::SetNumQuartos(int Num)
{

    if((Num <=6) && (Num >=0))
    {

        NumQuartos = Num;
    }
    else
    {
        cout << "\nNumero de Quartos Invalidos\n";
    }


}
