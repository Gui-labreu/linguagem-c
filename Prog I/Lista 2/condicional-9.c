/*9 – Escreva um programa que leia um número e informe se ele é divisível por 3 e por 7.*/

#include <stdio.h>

int main()
{
	int a;
	
	printf("Digite um valor:\n");
	scanf("%d", &a);
	
	if((a % 3 == 0) && (a % 7 == 0))
	{
		printf("Divisivel por 3 e por 7");
	}
	else
	{
		if(a % 3 == 0)
		{
			printf("Divisivel por 3 apenas");
		}
		else 
		{
			if(a % 7 == 0)
			{
				printf("Divisivel por 7 apenas");
			}
			else
			{
				printf("N e divisivel por nenhum dos 2");
			}
		}	
	}
	
	
	return 0;
}
