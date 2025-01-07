/*1 – Crie, preencha e apresente uma matriz de 6x6 de
inteiros com valores aleatórios entre 1 e 9 em
seguida altere os valores da diagonal principal para
0 apresentando o resultado.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i, j, matriz[6][6];
	
	for(i=0; i<6; i++)
	{
		for(j=0; j<6; j++)
		{
			matriz[i][j] = (rand()%8)+1;
			printf("%d\t", matriz[i][j]);
		}
		printf("\n\n");
	}
	
	printf("\n\n\n");
	
	for(i=0; i<6; i++)
	{
		for(j=0; j<6; j++)
		{
			if(i==j)
			{
				matriz[i][j] = 0;
			}
			printf("%d\t", matriz[i][j]);
		}
		printf("\n\n");
	}
	
	

}
