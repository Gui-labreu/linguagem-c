/*Fazer um programa que gere aleatoriamente a produção (120 a 350) e a linha de produção (1 ou 2) de
50 operários a calcule a média de produção geral e de cada linha.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	srand(time(NULL));
	
	int i = 0, prod, linha;
	float tot1 = 0, tot2 = 0, totProd1 = 0, totProd2 = 0, mediaProd1, mediaProd2;
	
	while(i < 50)
	{
		prod = (rand()%231)+120;
		linha = (rand()%2)+1;
		
		if(linha == 1)
		{
			printf("1 - %d\n", prod);
			tot1++;
			totProd1 += prod;
		}
		if(linha == 2)
		{
			printf("2 - %d\n", prod);
			tot2++;
			totProd2 += prod;
		}
		
		i++;
	}
	
	mediaProd1 = totProd1/tot1;
	mediaProd2 = totProd2/tot2;
	
	printf("Media de producao da linha 1: %.1f\n", mediaProd1);
	printf("Media de producao da linha 2: %.1f\n", mediaProd2);
	
	
	return 0;
}
