/*5)Fazer um programa que apresente os N primeiros números da
série de Fibonacci (0-1-1-2-3-5…)*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i = 2, atual = 1, anterior = 0, proximo, qntd;
	
	printf("Digite quantos valores da sequencia de Fibonacci deseja:\n");
	scanf("%d", &qntd);
	printf("\n0\n1\n");
	
	while(i < qntd)
	{
		proximo = atual + anterior;
		anterior = atual;
		atual = proximo;
		
		printf("%d\n", atual);
		i++;
	}
	
	
	return 0;
}
