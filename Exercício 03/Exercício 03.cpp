#include <iostream>
#include <cstdlib>
using namespace std;

//Leia um vetor de 16 posi��es e troque os 8 primeiros valores pelos 8 �ltimos e vice-e-versa. Escreva ao final o vetor obtido

int main ()
{
	int vetor[16];
	int x=0;
	int y=15;
	int reserva=0;
	
	while (x < 16)
	{
		cout << "Insira o valor " << x << " de 15 do vetor: ";
		cin >> vetor[x];
		
		x++;
	}
	
	for (x=0; x<8; x++)
	{
		reserva = vetor[y];
		//Como Y = 15, ou seja, a �ltima posi��o do vetor, "reserva" recebe o �ltimo valor do vetor
		vetor[y] = vetor[x];
		//O vetor na posi��o Y, ou seja, 15, recebe o valor do vetor na posi��o X, ou 0
		vetor[x] = reserva;
		/*Por fim, o vetor na posi��o X, ou seja, 0, recebe o valor de "reserva", que � o mesmo valor de Y, ou seja, vetor[15]
		e assim se repetir� at� todas as posi��es trocarem de lugar*/
		
		y--;
		//No fim do loop, X que era 0 vira 1, e Y que era 15 vira 14, trocando as pr�ximas posi��es
	}
	
	x=0;
	
	system ("cls");
	
	cout << "O vetor com suas posi��es invertida fica: \n\n";
	
	do
	{
		cout << vetor[x] << ", ";
		
		x++;
	}
	while (x < 16);
	
	return 0;
}
