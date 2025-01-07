/*9)Escreva um programa que gere 10 números inteiros entre 0 e 100
e escreva o menor e o maior valor*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	srand(time(NULL));
		
	int i, aleatorio, maior = 0, menor = 100;
	
	while(i < 10)
	{
		aleatorio = rand()%101;
		printf("%d\n", aleatorio);
		
		if(aleatorio < menor)
		{
			menor = aleatorio;
		}
		
		if(aleatorio > maior)
		{
			maior = aleatorio;
		}
		
		
		i++;
	}
	
	printf("Maior: %d\n", maior);
	printf("Menor: %d\n", menor);
	
	return 0;
}
