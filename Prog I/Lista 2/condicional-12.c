/*12 - A CEF conceder� um cr�dito especial com juros de 2% aos seus clientes de acordo com o saldo
m�dio no �ltimo ano. Fazer um programa que leia o saldo m�dio de um cliente e calcule o valor do
cr�dito de acordo com a tabela a seguir. Imprimir uma mensagem informando o saldo m�dio e o valor
de cr�dito. De 0 a 500 Nenhum cr�dito - De 501 a 1000 30% do valor do saldo m�dio - De 1001 a
3000 40% do valor do saldo m�dio - Acima de 3001 50% do valor do saldo m�dio*/

#include <stdio.h>

int main()
{
	float saldo, credito;
	
	printf("Digite seu saldo medio:\n");
	scanf("%f", &saldo);
	
	if(saldo <= 500)
	{
		printf("Seu saldo e de %.2f e nao possui credito\n", saldo);
	}
	else
	{
		if(saldo > 500 && saldo <=1000)
		{
			credito = (saldo*0.3)*1.02;
			printf("Seu saldo e %.2f e seu credito e de %.2f\n", saldo, credito);
		}
		if(saldo > 1000 && saldo <=3000)
		{
			credito = (saldo*0.4)*1.02;
			printf("Seu saldo e %.2f e seu credito e de %.2f\n", saldo, credito);
		}
		if(saldo > 3000)
		{
			credito = (saldo*0.5)*1.02;
			printf("Seu saldo e %.2f e seu credito e de %.2f\n", saldo, credito);
		}
	}
	
	return 0;
}
