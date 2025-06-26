#include <iostream>
#include <locale.h>
void ExibirMenu();
int RetornarEscolha();
void ProcessarEscolha(int TipoEscolha);


int main()
{
    ExibirMenu();
    return 0;
}
void ExibirMenu()
{
    setlocale(LC_ALL, "portuguese");

    do
    {
        std::cout << "****Tickets Cinema****" << std::endl;
        std::cout << "\n1 - Para Meia Entrada\n";
        std::cout << "\n2 - Para Inteira\n";
        std::cout << "\n3 - Sair";

    }
    while (RetornarEscolha() != 3);
}

int RetornarEscolha()
{
    int escolha = 0;
    std::cout << "\nEscolha sua opção: ";
    std::cin >> escolha;
    ProcessarEscolha(escolha);
    return escolha;
}

void ProcessarEscolha(int TipoEscolha)
{
    switch (TipoEscolha)
    {
    case 1:
        std::cout << "\nTicket Meia Entrada Comprada\n";
        break;
    case 2:
        std::cout << "\nTicket Inteira Comprado\n";
        break;
    case 3:
        std::cout << "\nSaindo Menu Tickets...\n";
        break;
    default:
        std::cout << "\nOpção Inválida!!!\n";
    }

}
