#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>




int main()
{
	srand(time(NULL));
	setlocale(LC_ALL, "Portuguese");
	
	int i = 0, av, numTrechos, KMViagem, numPass;
	float ltQuerosene, totalTrechos, totalKM, mediaTrechos, mediaKM, maxPass, percPass, tot90perc, perc90, percS92, percAW, totS92, totAW;
	char cod[10];
	
	while(i < 85)
	{
		i++;
		av = (rand()%2)+1;
		numTrechos = (rand()%4)+2;
		KMViagem = (rand()%551)+100;
		totalKM += KMViagem;
		totalTrechos += numTrechos;
		
		//taxa de consumo de querosene = (16/13) litros/km
		
		ltQuerosene = KMViagem*16/13;
		
		switch(av)
		{
			case 1:
				sprintf(cod, "S92-A%d ", i+4000);
				//max de passageiros 19, 60% = 11,4, arrredondando = 12
				numPass = (rand()%8)+12;
				maxPass = 19;
				totS92++;
				break;
			
			case 2:
				sprintf(cod, "AW101-%d", i+4000);
				//max de passageiros 25, 60% = 15
				numPass = (rand()%11)+15;
				maxPass = 25;
				totAW++;
				break;
				
			default:
				sprintf(cod, "ERRO");
				break;	
		}
		percPass = numPass/maxPass*100;
		
		if(percPass > 90)
		{
			tot90perc++;
		}
		
		
		
		
		printf("%s\t%d\t%d km\t%d\t%.0f\n", cod, numTrechos, KMViagem, numPass, ltQuerosene);
	}
	
	mediaKM = totalKM/i;
	mediaTrechos = totalTrechos/i;
	perc90 = (tot90perc/i)*100;
	percS92 = (totS92/i)*100;
	percAW = (totAW/i)*100;
	
	printf("\nMédia de KM por viagem: %.1f km\n", mediaKM);
	printf("Média de trechos por viagem: %.0f\n", mediaTrechos);
	printf("Perentual de viagens com mais de 90%% de ocupação: %.0f%%\n", perc90);	
	printf("Percentual de voos do S92A: %.1f%%\n", percS92);
	printf("Percentual de voos do AW101: %.1f%%\n", percAW);
	
	
	
	return 0;
}
