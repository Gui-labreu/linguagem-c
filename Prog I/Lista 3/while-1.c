/*1) Fazer um programa que apresente uma sequencia de números
entre 20 e 50 inclusive.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i = 0;
	
	while(i <= 50)
	{
		if(i >= 20 && i<= 50)
		{
			printf("%d\n", i);
		}
		
		i++;
	}
	
	
	return 0;
}
