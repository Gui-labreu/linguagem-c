/*2)Fazer um programa que apresente todos os múltiplos de 4 entre 1 e 100 inclusive.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i = 1;
	
	while(i <= 100)
	{
		if(i % 4 == 0)
		{
			printf("%d\n", i);
		}
		
		i++;
	}
	
	return 0;
}
