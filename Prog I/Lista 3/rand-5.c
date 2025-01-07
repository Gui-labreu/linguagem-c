/*Dado o exercício 4 calcule o percentual de jovens de cada sexo em cada modalidade.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	srand(time(NULL));
	int i = 0, sexo, idade, esporte;
	float totMas = 0, totFem = 0, totBas = 0, totVol = 0, totFut = 0, idadeMas = 0, idadeFem = 0, idadeBas = 0, idadeFut = 0, idadeVol = 0, medMas, medFem, medBas, medFut, medVol;
	float totFemBas = 0, totMasBas = 0, totFemFut = 0, totMasFut = 0, totFemVol = 0, totMasVol = 0, percFemBas, percMasBas, percFemFut, percMasFut, percFemVol, percMasVol;
	
	while(i < 75)
	{
		sexo = rand()%2;
		idade = (rand()%6)+12;
		esporte = (rand()%3)+1;
		
		if(sexo == 0)
		{
			totFem++;
			idadeFem += idade;
			if(esporte == 1)
			{
				totFemBas++;
			}
			if(esporte == 2)
			{
				totFemFut++;
			}
			if(esporte == 3)
			{
				totFemVol++;
			}
		}
		
		if(sexo == 1)
		{
			totMas++;
			idadeMas += idade;
			if(esporte == 1)
			{
				totMasBas++;
			}
			if(esporte == 2)
			{
				totMasFut++;
			}
			if(esporte == 3)
			{
				totMasVol++;
			}
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
	
	percFemBas = (totFemBas/totBas)*100;
	percMasBas = (totMasBas/totBas)*100;
	percFemFut = (totFemFut/totFut)*100;
	percMasFut = (totMasFut/totFut)*100;
	percFemVol = (totFemVol/totVol)*100;
	percMasVol = (totMasVol/totVol)*100;
	
	printf("Media de idade masc: %.1f\n", medMas);
	printf("Media de idade fem: %.1f\n", medFem);
	printf("Media de idade basquete: %.1f\n", medBas);
	printf("Media de idade futebol: %.1f\n", medFut);
	printf("Media de idade volei: %.1f\n", medVol);
	
	printf("Percentual fem basquete: %.1f%%\n", percFemBas);
	printf("Percentual masc basquete: %.1f%%\n", percMasBas);
	printf("Percentual fem futebol: %.1f%%\n", percFemFut);
	printf("Percentual masc futebol: %.1f%%\n", percMasFut);
	printf("Percentual fem volei: %.1f%%\n", percFemVol);
	printf("Percentual masc volei: %.1f%%\n", percMasVol);
	
	return 0;
}
