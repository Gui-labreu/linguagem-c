/*10 - A prefeitura de Contagem abriu uma linha de crédito para seus funcionários. O valor máximo
da prestação não poderá ultrapassar 30% do salário bruto. Fazer um programa que permita entrar
salário bruto e o valor da prestação, e informar se o empréstimo pode ou não ser concedido.*/

#include<stdio.h>

int main()
{
	float salario, prestacao;
	
	printf("Digite seu salario:\n");
	scanf("%f", &salario);
	printf("Digite o valor da prestacao:\n");
	scanf("%f", &prestacao);
	
	if(prestacao <= (salario*0.3))
	{
		printf("Aprovado");
	}
	else
	{
		printf("Negado");
	}
	return 0;
}
