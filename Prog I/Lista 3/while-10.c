/*10)Fa�a um programa que gere um n�mero inteiro positivo par N
menor que 100 e imprima todos os n�meros pares de 0 at� N em
ordem crescente.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	srand(time(NULL));
	
	int i = 0, aleatorio;
	aleatorio = (rand()%50)*2;
	printf("Numero gerado: %d\n", aleatorio);
	
	while(i <= aleatorio)
	{
		if(i % 2 == 0)
		{
			printf("%d\n", i);
		}
		
		i++;
	}
	
	return 0;
}
