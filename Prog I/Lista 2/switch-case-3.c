/*3 - Elabore um programa que leia dois valores do usu�rio e a opera��o
que ele deseja executar (Opera��es: soma, subtra��o, divis�o,
multiplica��o). Execute a opera��o desejada e imprima na tela.*/

#include <stdio.h>

int main()
{
	float a, b;
	char op;
	
	printf("Digite o primeiro valor:\n");
	scanf("%f", &a);
	printf("Digite o segundo valor:\n");
	scanf("%f", &b);
	printf("Escolha uma operacao (/, *, -, +)\n");
	scanf(" %c", &op);
	
	switch (op)
	{
		case '+':
			printf("%.2f\n", a + b);
			break;
			
		case '-':
			printf("%.2f\n", a - b);
			break;
			
		case '*':
			printf("%.2f\n", a * b);
			break;
		
		case '/':
			printf("%.2f\n", a / b);
			break;
			
		default:
			printf("Operador invalido");
			break;
	}
	
	
	return 0;
}


