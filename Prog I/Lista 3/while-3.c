/*3)Fazer um programa que apresente quantos números são
múltiplos de 7 entre 100 e 500.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i = 100;
	
	while(i <= 500)
	{
		if(i % 7 == 0)
		{
			printf("%d\n", i);
		}
		
		i++;
	}
	
	return 0;
}
