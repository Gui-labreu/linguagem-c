/*10 - A prefeitura de Contagem abriu uma linha de cr�dito para seus funcion�rios. O valor m�ximo
da presta��o n�o poder� ultrapassar 30% do sal�rio bruto. Fazer um programa que permita entrar
sal�rio bruto e o valor da presta��o, e informar se o empr�stimo pode ou n�o ser concedido.*/

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
