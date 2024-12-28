/*4 – Fazer Um programa que leia três valores verifique se estes podem ser os lados de um triângulo,
caso afirmativo, classifique o triângulo quanto ao seu tipo.*/

#include <stdio.h>

int main()
{
	int a, b, c;
	
	printf("Digite o valor do lado A\n");
	scanf("%d", &a);
	printf("Digite o valor do lado B\n");
	scanf("%d", &b);
	printf("Digite o valor do lado C\n");
	scanf("%d", &c);
	
	if(a < b + c && b < a + c && c < b + a)
	{
		if(a == b && a == c && b == c)
		{
			printf("Equilatero");
		}
		else if(a == b || b == c || a == c)
		{
			printf("Isoceles");
		}
		else
		{
			printf("Escaleno");
		}
	}
	else
	{
		printf("O triangulo nao e valido");
	}
	
	
	return 0;
}
