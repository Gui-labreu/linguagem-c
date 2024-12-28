/*6)Faça um programa que gere aleatoriamente dez números entre
20 e 50 e apresente a soma destes números.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	
	srand(time(NULL));
	
	int i, a, soma = 0;
	
	while(i < 10)
	{
		a = (rand()%31)+20;
		printf("%d\n", a);
		soma += a;
		i++;
	}
	
	printf("A soma e igual a: %d", soma);
	
	return 0;
}


