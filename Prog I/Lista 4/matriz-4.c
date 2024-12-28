/*4 – Crie preencha e apresente uma matriz de 4 x 10
Onde as duas primeiras colunas são N1 e N2 ( 4,0 a
10,0), a terceira coluna com a frequência(60 a 100)
e a quarta coluna com a média de N1 e N2.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i, j;
	float matriz[10][4];
	
	for(i=0; i<10; i++)
	{
		for(j=0; j<4; j++)
		{
			if(j<2)
			{
				matriz[i][j] = (rand()%61)+40;
				matriz[i][j] /= 10;
				
				printf("%.1f\t", matriz[i][j]);
			}
			
			if(j==2)
			{
				matriz[i][j] = (rand()%41)+60;
				printf("%.f\t", matriz[i][j]);
			}
			
			if(j==3)
			{
				matriz[i][j] = (matriz[i][0] + matriz[i][1])/2;
				printf("%.1f\t", matriz[i][j]);
			}
			
		}
		
		printf("\n\n");
	}
}
