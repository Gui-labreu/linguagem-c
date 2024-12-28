/*1 - Fazer um programa em C que gere os múltiplos
de 2 de 10 até 50*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i;
	
	for(i=0; i<=50; i++)
	{
		if((i%2==0)&&(i>=10))
		{
			printf("%d\n", i);
		}
	}
	
	return 0;
}
