/*3 – Dado o exercício 2 preencha os elementos
abaixo da diagonal secundária com 3 e acima dela
com 2.*/

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
			
			if(i+j==3)
			{
				matriz[i][j] = 2;
			}
			
			if(i+j==5)
			{
				matriz[i][j] = 3;
			}
			
			printf("%d\t", matriz[i][j]);
		}
		printf("\n\n");
	}
	
	
	
	return 0;
}

