/*5 - Dados dois vetores de 5 posições, preencha um terceiro
vetor de 10 posições concatenando os elementos de vet1 e vet2*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
	srand(time(NULL));
	
	int i, vet1[5], vet2[5], vet3[10];
	
	for(i=0; i<5; i++)
	{
		vet1[i]=rand()%51;
		vet2[i]=rand()%51;
		
		
		printf("%d\t%d\n", vet1[i], vet2[i]);
		
		vet3[2*i]=vet1[i];
		vet3[(2*i)+1]=vet2[i];
	}
	
	printf("\n");
	
	for(i=0; i<10; i++)
	{
		printf("%d\t", vet3[i]);
	}
	
	
	return 0;
}
