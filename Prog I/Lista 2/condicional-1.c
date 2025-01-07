/*1 - Fazer um programa que receba três valores e verifique se estes podem ser os lados de um triângulo.*/


#include <stdio.h>

int main()
{
	int ladoA, ladoB, ladoC;
	
	printf("Digite o valor do lado A\n");
	scanf("%d", &ladoA);
	printf("Digite o valor do lado B\n");
	scanf("%d", &ladoB);
	printf("Digite o valor do lado C\n");
	scanf("%d", &ladoC);
	
	if(ladoA < ladoB + ladoC && ladoB < ladoA + ladoC && ladoC < ladoB + ladoA)
	{
		printf("O triangulo e valido");
	}
	else
	{
		printf("O triangulo nao e valido");
	}
	
	
	return 0;
}
