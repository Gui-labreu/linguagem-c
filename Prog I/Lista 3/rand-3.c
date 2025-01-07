/*Dado o exercício 2 faça outro algoritmo que calcule o percentual de operários de cada linha de
produção e o percentual de operários que produziram mais de 300 peças.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	srand(time(NULL));
	
	int i = 0, prod, linha;
	float tot1 = 0, tot2 = 0, totProd1 = 0, totProd2 = 0, mediaProd1, mediaProd2, perc1, perc2, perc300, tot300;
	
	while(i < 50)
	{
		prod = (rand()%231)+120;
		linha = (rand()%2)+1;
		
		if(prod > 300)
		{
			tot300++;
		}
		
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
	
	perc1 = (tot1/i)*100;
	perc2 = (tot2/i)*100;
	
	perc300 = (tot300/i)*100;
	
	printf("Media de producao da linha 1: %.1f\n", mediaProd1);
	printf("Media de producao da linha 2: %.1f\n", mediaProd2);
	printf("Percentual de funcionarios da linha 1: %.1f%%\n", perc1);
	printf("Percentual de funcionarios da linha 2: %.1f%%\n", perc2);
	printf("Percentual de funcionarios com prod > 300: %.1f%%\n", perc300);
	
	return 0;
}
