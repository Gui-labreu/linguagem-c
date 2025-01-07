/*13 - A confederação brasileira de natação fará o cadastro de atletas por categoria. Fazer um
programa que receba a idade de um nadador e apresente a sua categoria segundo as seguintes faixas:
Infantil A 5 – 7 anos -- Infantil B 8 – 10 anos -- Juvenil A 11 – 13 anos -- Juvenil B 14 – 17 anos.*/

#include <stdio.h>

int main()
{
	int idade;
	
	printf("Digite a idade:\n");
	scanf("%d", &idade);
	
	if(idade < 5 || idade > 17)
	{
		printf("Invalido\n");
	}
	else
	{
		if(idade >=5 && idade <=7)
		{
			printf("Infantil A\n");
		}
		if(idade >=8 && idade <=10)
		{
			printf("Infantil B\n");
		}
		if(idade >=11 && idade <=13)
		{
			printf("Juvenil A\n");
		}
		if(idade >=14 && idade <=17)
		{
			printf("Infantil B\n");
		}
	}
	return 0;
}
