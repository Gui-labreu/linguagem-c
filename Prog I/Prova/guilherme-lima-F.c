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
	float taxaMedS92, taxaMedAW, totalPercS92, totalPercAW;
	char cod[10];
	
	printf("COD\t\tTRECHOS\t\tDISTANCIA\tPASSAGEIROS\tGASTO QUEROSENE\n\n");
	
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
				percPass = numPass/maxPass*100;
				totalPercS92 += percPass;
				break;
			
			case 2:
				sprintf(cod, "AW101-%d", i+4000);
				//max de passageiros 25, 60% = 15
				numPass = (rand()%11)+15;
				maxPass = 25;
				totAW++;
				percPass = numPass/maxPass*100;
				totalPercAW += percPass;
				break;
				
			default:
				sprintf(cod, "ERRO");
				break;	
		}
		
		if(percPass > 90)
		{
			tot90perc++;
		}
		
		
		printf("%s\t%d\t\t%d km\t\t%d\t\t%.0f litros\n", cod, numTrechos, KMViagem, numPass, ltQuerosene);
	}
	
	mediaKM = totalKM/i;
	mediaTrechos = totalTrechos/i;
	perc90 = (tot90perc/i)*100;
	percS92 = (totS92/i)*100;
	percAW = (totAW/i)*100;
	taxaMedS92 = (totalPercS92/totS92);
	taxaMedAW = (totalPercAW/totAW);
	
	printf("\nM�dia de KM por viagem: %.1f km\n", mediaKM);
	printf("M�dia de trechos por viagem: %.1f\n", mediaTrechos);
	printf("Perentual de viagens com mais de 90%% de ocupa��o: %.0f%%\n", perc90);	
	printf("Percentual de voos do S92A: %.1f%%\n", percS92);
	printf("Percentual de voos do AW101: %.1f%%\n", percAW);
	printf("Taxa m�dia de ocupa��o do S92A: %.1f%%\n", taxaMedS92);
	printf("Taxa m�dia de ocupa��o do AW101: %.1f%%\n", taxaMedAW);
	
	
	
	return 0;
}
