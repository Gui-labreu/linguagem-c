/*10)Faça um programa que gere um número inteiro positivo par N
menor que 100 e imprima todos os números pares de 0 até N em
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
