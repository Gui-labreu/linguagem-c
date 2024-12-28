/*8 - Escreva um programa que receba um número e imprima uma das mensagens: “é múltiplo de 3”
ou “não é múltiplo de 3”. Sabendo que na expressão (A= B%3) A receberá o resto da divisão de B por 3*/

#include <stdio.h>

int main()
{
	int valor;
	
	printf("Digite um numero:\n");
	scanf("%d", &valor);
	
	if(valor % 3 == 0)
	{
		printf("Divisivel por 3");
	}
	else
	{
		printf("N divisivel por 3");
	}
	
	return 0;
}
