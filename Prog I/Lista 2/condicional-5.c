/*5 - Fazer Um programa que receba três valores A, B e C, os apresente em ordem crescente.*/

#include <stdio.h>

int main()
{
	int a, b, c;
	printf("Digite o primeiro valor:\n");
	scanf("%d", &a);
	printf("Digite o segundo valor:\n");
	scanf("%d", &b);
	printf("Digite o terceiro valor:\n");
	scanf("%d", &c);
	
	if(a <= b && a <= c && b <= c)
	{
		printf("%d, %d, %d\n", a, b, c);
	}
	else
	{
		if(a <= b && a <= c &&  b >= c)
		{
			printf("%d, %d, %d\n", a, c, b);
		}
		if(b <= a && b <= c && a <= c)
		{
			printf("%d, %d, %d\n", b, a, c);
		}
		if(b <= a && b <= c && a >= c)
		{
			printf("%d, %d, %d\n", b, c, a);
		}
		if(c <= a && c <= b && a <= b)
		{
			printf("%d, %d, %d\n", c, a, b);
		}
		if(c <= a && c <= b && a >= b)
		{
			printf("%d, %d, %d\n", c, b, a);
		}
	}
	
	
	return 0;
}
