#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

/*
class Pessoa
{
public:
    string nome;
    int idade;

    Pessoa()
    {
        nome = "Desconhecido";
        idade = 0;
        cout << "Construtor padrao"<< endl;
    }
    Pessoa(string n, int i){
    nome = n;
    idade = i;
    }

    void exibir(){

    cout << nome << "\ttem\t"<< idade<< "\tanos"<< endl;

    }

};
int main()
{
    Pessoa p1;
    Pessoa p2("Felipe", 18);
    p1.exibir();
    p2.exibir();
    return 0;
}

class Pokemom
{
public:
    string nome;
    int hp;
    int ataque;
    int defesa;
    int velocidade;

    Pokemom()
    {
        nome = "";
        hp = 0;
        ataque = 0;
        defesa = 0;
        velocidade = 0;
    }

    Pokemom(string n, int a, int d, int v, int vida)
    {
    nome = n;
    ataque = a;
    defesa = d;
    velocidade = v;
    hp = vida;
    }
    void mostrar_status(){
    cout << "Pokemon chama: " << nome<< ataque<< defesa<< velocidade<< hp;


    }
};
int main(){


Pokemom p1("Teste", 100, 50, 60,100);
Pokemom p2("et", 110, 20, 70,100);

p1.mostrar_status();
p2.mostrar_status();




    return 0;
}
*/

class Jogador
{
public:
    string nome;
    string time;
    int idade;
    int numero_camisa;
    float salario;


    Jogador(){
    nome = "";
    time = "";
    idade = 0;
    numero_camisa = 0;
    salario = 0.0;
    }

    Jogador(string n, string t, int i, int numero,float s){
    nome = n;
    time = t;
    idade = i;
    numero_camisa = numero;
    salario = s;
    }
    void exibir(){
    cout << "O seu jogador se chama: " << nome << "Joga no time: " << time << "tem" << idade << "anos" << "usa a camisa: " << numero_camisa<< "tem o salario de: " << salario << endl;
    }

};



int main()
{
    Jogador p1;
    Jogador p2("Felipe","Cruzeiro", 18, 11, 2000.00);

    p1.exibir();
    p2.exibir();

    return 0;
}
