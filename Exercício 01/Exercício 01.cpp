#include <iostream>
#include <cstdlib>
using namespace std;

/*Leia um  vetor de 12 posi��es e em seguida ler tamb�m dois valores X e Y quaisquer correspondentes a duas posi��es no vetor. Ao final seu programa dever� 
escrever a soma dos valores encontrados nas respectivas posi��es X e Y*/

int main ()
{
	int vetor[12];
	int x=0;
	int y=0;
	int resul=0;
	
	while (x < 12)
	{
		cout << "Insira o valor " << x << " de 11 do vetor: ";
		cin >> vetor[x];
		
		x++;
	}
	
	system ("cls");
	
	x=0;
	
	cout << "Insira a primeira posicao: ";
	cin >> x;
	cout << "Insira a segunda posicao: ";
	cin >> y;
	
	resul = vetor[x] + vetor[y];
	
	system ("cls");
	
	cout << "A soma dos valores das posicoes selecionadas e de: " << resul;
	
	return 0;
}
