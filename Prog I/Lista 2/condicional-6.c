/*6 - Fazer Um programa que receba três valores A, B , C e OP, quando OP=1 apresente em ordem
crescente caso contrário os números devem ser apresentados em ordem decrescente.*/

#include <stdio.h>

int main()
{
	int a, b, c, op;
	
	printf("Primeiro valor:\n");
	scanf("%d", &a);
	printf("Segundo valor:\n");
	scanf("%d", &b);
	printf("Terceiro valor:\n");
	scanf("%d", &c);
	printf("Operador:\n");
	scanf("%d", &op);
	
	if(op == 1)
	{
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
	}
	else
	{
		if(a <= b && a <= c && b <= c)
		{
			printf("%d, %d, %d\n", c, b, a);
		}
		else
		{
			if(a <= b && a <= c &&  b >= c)
			{
				printf("%d, %d, %d\n", b, c, a);
			}
			if(b <= a && b <= c && a <= c)
			{
				printf("%d, %d, %d\n", c, a, b);
			}
			if(b <= a && b <= c && a >= c)
			{
				printf("%d, %d, %d\n", a, c, b);
			}
			if(c <= a && c <= b && a <= b)
			{
				printf("%d, %d, %d\n", b, a, c);
			}
			if(c <= a && c <= b && a >= b)
			{
				printf("%d, %d, %d\n", a, b, c);
			}
		}
	}
}
