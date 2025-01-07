/*3 - Fazer um programa em C utilizando o FOR para
receber os valores inicio e final apresentando a
sequência completa.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a, b, i;
	
	printf("Valor inicial: ");
	scanf("%d", &a);
	printf("Valor final: ");
	scanf("%d", &b);
	
	if(a<b)
	{
		for(i=a; i<=b; i++)
		{
			printf("%d\n", i);
		}
	}
	
	if(a>b)
	{
		for(i=a; i>=b; i--)
		{
			printf("%d\n", i);
		}
	}
	
	return 0;
}
