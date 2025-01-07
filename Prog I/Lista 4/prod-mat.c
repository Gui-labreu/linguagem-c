/*Multipllicacao de matrizes*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	srand(time(NULL));
	
	int mat1[4][4], mat2[4][4], prod[4][4], i, j;
	
	for(i=0; i<4; i++)
	{
		for(j=0; j<4; j++)
		{
			mat1[i][j] = rand()%10;
			printf("%d\t", mat1[i][j]);
		}
		printf("\n");
	}
	
	printf("\n\n");
	
	for(i=0; i<4; i++)
	{
		for(j=0; j<4; j++)
		{
			mat2[i][j] = rand()%10;
			printf("%d\t", mat2[i][j]);
		}
		printf("\n");
	}
	
	printf("\n\n");
	
	
}
