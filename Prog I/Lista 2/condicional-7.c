/*7 - Fazer um programa leia dois n�meros e efetue a sua adi��o. Caso o valor encontrado seja maior
que 20, este dever� ser apresentado somando-se a ele mais 8; caso o valor somado seja menor ou
igual a 20, este dever� ser apresentado subtraindo-se 5.*/

#include <stdio.h>

int main()
{
	int a, b, soma;
	
	printf("Digite o primeiro valor:\n");
	scanf("%d", &a);
	printf("Digite o segundo valor:\n");
	scanf("%d", &b);
	
	soma = a + b;
	
	if(soma < 20)
	{
		printf("%d", soma - 5);
	}
	else
	{
		printf("%d", soma + 8);
	}	
}
