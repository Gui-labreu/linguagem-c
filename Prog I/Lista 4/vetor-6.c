/*6 - Fazer um programa em C que crie, preencha e apresente
um vetor de 10 posições de notas entre 4,0 e 10,0 e um
segundo vetor numerado de 1001 a 1010 .
Em seguida ordene os vetores pelas notas em ordem
decrescente.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
	srand(time(NULL));
	
	int i, j, pos[10], auxpos;
	float vet[10], auxvet;
	 
	for(i=0; i<10; i++)
	{
		pos[i] = 1001+i;
		vet[i] = (rand()%61)+40;
		vet[i] /= 10;
	 	
		printf("%d-%.1f\n", pos[i], vet[i]);
	}
	
	printf("\n");
	
	for(i=0; i<9; i++)
	{
		for(j=i+1; j<10; j++)
		{
			if(vet[i]<vet[j])
			{
				auxvet = vet[i];
				vet[i] = vet[j];
				vet[j] = auxvet;
				
				auxpos = pos[i];
				pos[i] = pos[j];
				pos[j] = auxpos;
			}
			
				
		}
		
		printf("%d\t%.1f\n", pos[i], vet[i]);	
	}
	
	
	
	return 0;
}
