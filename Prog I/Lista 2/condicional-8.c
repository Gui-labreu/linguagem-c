/*8 - Escreva um programa que receba um n�mero e imprima uma das mensagens: �� m�ltiplo de 3�
ou �n�o � m�ltiplo de 3�. Sabendo que na express�o (A= B%3) A receber� o resto da divis�o de B por 3*/

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
