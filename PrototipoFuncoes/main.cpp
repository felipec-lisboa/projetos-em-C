#include <iostream>

//Podemos informar ao compilador que a fun��o existe
//e que iremos declarar ela posteriormente
// isso � feito atrav�s dos pr�tipos das fun��es
//Coloque apenas o cabe�alho da fun��o terminado com ;
float soma(float num1, float num2);

//main j� � uma fun��o
//observe o tipo de retorno int
// o nome � main e ela n�o recebe par�metos neste exemplo (podem existir argumentos de linha de comando que ser�o enviados a dois par�metros da fun��o main

int main()
{
	//a execu��o do programa � realizada de cima para baixo, desta forma o compilador ainda n�o sabe da exist�ncia da fun��o soma. Antes a declara��o da fun��o estava em cima e assim o compilador j� sabia onde estava a decla��o da fun��o
	//Agora a declara��o est� embaixo e ocorre erro, pois o compilador n�o sabe ainda quem � e onde est� declarada a fun��o soma.
	//tudo isso porque � TOP-DOWN
	std::cout << soma(100, 500) << "\n";
 	return 0;
}

float soma(float num1, float num2)
{
	return (num1 + num2);
}
