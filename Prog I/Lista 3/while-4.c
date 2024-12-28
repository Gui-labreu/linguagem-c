/*4)Fazer um programa que receba o intervalo (a, b) e um número c,
apresente quantos são os múltiplos de c no intervalo.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a, b, c;
	
	printf("Digite o primeiro valor do intervalo:\n");
	scanf("%d", &a);
	printf("Digite o segundo valor do intervalo:\n");
	scanf("%d", &b);
	printf("Digite multiplo comum:\n");
	scanf("%d", &c);
	
	while(a <= b)
	{
		if(a % c == 0)
		{	
			printf("%d\n", a);
		}
		
		a++;
	}
	
	
	return 0;
}
