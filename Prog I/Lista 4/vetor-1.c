/*1 - Fazer um programa em C que crie, preencha e apresente
um vetor de 10 posições de inteiros entre 0 e 49. Em seguida
apresente o maior valor e sua posição ou índice.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
	srand(time(NULL));
	
	int i, vet[10], maior = 0;
	
	for(i=0; i<10; i++)
	{
		vet[i] = rand()%50;
		
		if(vet[i] > vet[maior])
		{
			maior = i;
		}
		printf("%d\t%d\n", i, vet[i]);
		
	}
	printf("Maior valor: %d-%d\n", maior, vet[maior]);
	
	
	return 0;
}
