#include <iostream>
#include <cstdlib>
using namespace std;

/*Leia dos vetores de 20 posições e calcule um outro vetor contendo, nas posições pares os valores do primeiro e nas posições impares os 
valores do segundo*/

int main ()
{
	int vetor[20];
	int vetor2[20];
	int vetorFinal[20];
	int x=0;
	int y=0;
	
	//Inserção no primeiro vetor
	while (x < 20)
	{
		cout << "Insira o valor " << x << " de 19 do vetor: ";
		cin >> vetor[x];
		
		x++;
	}
	
	system ("cls");
	//Inserção no segundo vetor
	x=0;
	while (x < 20)
	{
		cout << "Insira o valor " << x << " de 19 do segundo vetor: ";
		cin >> vetor2[x];
		
		x++;
	}
	
	system ("cls");
	
	cout << "O vetor final e: \n\n";
	
	for (x=0; x<20; x++)
	{
		if (vetorFinal[x] % 2 == 0)
		{
			vetorFinal[y]=vetor[x];
			cout << vetorFinal[y] << ", ";
			
		}else (vetorFinal[x] % 2 == 1);
		{
			vetorFinal[y]=vetor2[x];
			cout << vetorFinal[y] << ", ";
		}
		
		y++;
	}
	
	return 0;
}
