/*Faça um programa que gere aleatoriamente o sexo (1 - M ou 0 - F) a idade (12 a 17)e o esporte preferido
(1 – Basquete, 2 – Futebol ou 3 – Vôlei) de um grupo de 75 jovens e calcule: a média de idade dos
jovens que preferem cada esporte e a média das idades dos meninos e das meninas.*/

#include <stdio.h>0
#include <stdlib.h>
#include <time.h>

int main()
{
	srand(time(NULL));
	int i = 0, sexo, idade, esporte;
	float totMas, totFem, totBas, totVol, totFut, idadeMas, idadeFem, idadeBas, idadeFut, idadeVol, medMas, medFem, medBas, medFut, medVol;
	
	while(i < 75)
	{
		sexo = rand()%2;
		idade = (rand()%6)+12;
		esporte = (rand()%3)+1;
		
		if(sexo == 0)
		{
			totFem++;
			idadeFem += idade;
		}
		
		if(sexo == 1)
		{
			totMas++;
			idadeMas += idade;
		}
		
		if(esporte == 1)
		{
			totBas++;
			idadeBas += idade;
		}
		
		if(esporte == 2)
		{
			totFut++;
			idadeFut += idade;
		}
		
		if(esporte == 3)
		{
			totVol++;
			idadeVol += idade;
		
		
		
		i++;
		}
	}
	
	medMas = idadeMas/totMas;
	medFem = idadeFem/totFem;
	medBas = idadeBas/totBas;
	medFut = idadeFut/totFut;
	medVol = idadeVol/totVol;
	
	printf("Media de idade masc: %.1f\n", medMas);
	printf("Media de idade fem: %.1f\n", medFem);
	printf("Media de idade basquete: %.1f\n", medBas);
	printf("Media de idade futebol: %.1f\n", medFut);
	printf("Media de idade volei: %.1f\n", medVol);
	
	return 0;
}
