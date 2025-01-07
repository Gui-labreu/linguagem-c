/*1) Fazer um programa que gere aleatoriamente que leia a idade(17 a 45) e o sexo (1 - M ou 2 -F) de 20
indivíduos e calcule a média de idade de cada grupo.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	srand(time(NULL));
	
	int i = 0, idade, sexo, totMas = 0, totFem = 0;
	float somaIdaMas = 0, somaIdaFem = 0, mediaMas, mediaFem;
	
	while(i < 20)
	{
		idade = (rand()%28)+17;
		sexo = (rand()%2)+1;
		
		if(sexo == 1)
		{
			printf("M - %d\n", idade);
			totMas++;
			somaIdaMas += idade;
		}
		if(sexo == 2)
		{
			printf("F - %d\n", idade);
			totFem++;
			somaIdaFem += idade;
		}
		
		i++;
	}
	
		mediaMas = somaIdaMas/totMas;
		mediaFem = somaIdaFem/totFem;
		
		printf("Media de idade masc: %.1f\n", mediaMas);
		printf("Media de idade fem: %.1f\n", mediaFem);
	
	
	return 0;
}
