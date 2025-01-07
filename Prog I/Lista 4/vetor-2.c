/*2 - Fazer um programa em C que crie, preencha e apresente
um vetor de 10 posições de inteiros entre 50 e 150.
Em seguida calcule e apresente a média dos valores.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
	srand(time(NULL));
	
	int i, vet[10];
	float total = 0, media;
	
	for(i=0; i<10; i++)
	{
		vet[i] = (rand()%101)+50;
		printf("%d\n", vet[i]);
		
		total += vet[i];
		
	}
	
	media = total/i;
	
	printf("\nA media e: %.2f\n", media);
	
	return 0;
}
