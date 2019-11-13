#include <iostream>
#include <cstdlib>
using namespace std;

//Leia um vetor de 40 posições e atribua valor 0 para todos os elementos que possuírem valores negativos

int main ()
{
	int vetor[40];
	int x=0;
	
	while (x < 40)
	{
		cout << "Insira o valor " << x << " de 39 do vetor: ";
		cin >> vetor[x];
		
		x++;
	}
	
	for (x=0; x<40; x++)
	{
		if (vetor[x] < 0)
		{
			vetor[x] = 0;
		}
	}
	
	system ("cls");
	
	cout << "Apos as mudancas, o vetor e: \n\n";
	
	x=0;
	
	do
	{
		cout << vetor[x]<< ", ";
		x++;
	}
	while (x < 40);
	
	return 0;
}
