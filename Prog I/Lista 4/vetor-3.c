/*3 - Fazer um programa em C que crie, preencha e apresente
um vetor de 15 posições de reais entre 0 e 10,0.
Apresente a frente de cada valor a mensagem aprovado para
valores acima de 5,9 e reprovado para os demais valores.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
	srand(time(NULL));
	
	int i;
	float vet[15];
	
	for(i=0; i<15; i++)
	{
		vet[i] = rand()%101;
		vet[i] /= 10;
		
		printf("%.1f-", vet[i]);
		
		if(vet[i] >= 6)
		{
			printf("Aprovado\n");
		}
		else
		{
			printf("Reprovado\n");
		}
	}
	
	
	return 0;
}
