/*3 - Elabore um programa que leia dois valores do usuário e a operação
que ele deseja executar (Operações: soma, subtração, divisão,
multiplicação). Execute a operação desejada e imprima na tela.*/

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


