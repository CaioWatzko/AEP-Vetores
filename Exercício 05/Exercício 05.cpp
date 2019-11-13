#include <iostream>
#include <cstdlib>
using namespace std;

//Leia um vetor de 40 posições. Contar e escrever quantos valores pares ele possui

int main ()
{
	int vetor[40];
	int pares=0;
	int x=0;
	
	while (x < 40)
	{
		cout << "Insira o valor " << x << " de 39 do vetor: ";
		cin >> vetor[x];
		
		x++;
	}
	
	system ("cls");
	
	for (x=0; x<40; x++)
	{
		if (x % 2 == 0)
		{
			pares++;
		}
	}
	
	cout << "Foram encontrados " << pares << " numeros pares no vetor";
	
	return 0;
}
