/*2 – Crie, preencha e apresente uma matriz de 5 x 5
de inteiros com 0 em todos os campos, em seguida
altere os valores da diagonal secundária para 1
apresentando o resultado.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i, j, matriz[5][5];
	
	for(i=0; i<5; i++)
	{
		for(j=0; j<5; j++)
		{
			matriz[i][j] = 0;
			
			printf("%d\t", matriz[i][j]);
		}
		printf("\n\n");
	}
	
	printf("\n\n\n");
	
	for(i=0; i<5; i++)
	{
		for(j=0; j<5; j++)
		{
			if(i+j==4)
			{
				matriz[i][j] = 1;
			}
			printf("%d\t", matriz[i][j]);
		}
		printf("\n\n");
	}
	
	
	
	return 0;
}
