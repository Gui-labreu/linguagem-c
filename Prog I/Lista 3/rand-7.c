/*Dado o exercício 6 calcule a média de dias de atraso para as OS’s de cada tipo quando houver e o
percentual de OS’s independente do tipo entregues antes do prazo.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	srand(time(NULL));
	int i = 0, numeroOS, prazo, diasGastos, tipo, atraso, maiorAtraso = 0, maiorAtrasoOS;
	float tot1 = 0, tot2 = 0, totAtraso1 = 0, totAtraso2 = 0, percAtraso1, percAtraso2, medAtraso1 = 0, medAtraso2 = 0, diasAtraso1 = 0, diasAtraso2 = 0;
	float percNoPrazo, totNoPrazo = 0;
	while(i < 250)
	{
		
		numeroOS = 1354+i;
		prazo = (rand()%9)+7;
		diasGastos = (rand()%9)+7;
		tipo = (rand()%2)+1;
		
		printf("%d\tPrazo:%2.d\tTempo Gasto:%2.d\tTipo:%d\n", numeroOS, prazo, diasGastos, tipo);
		
		if(tipo == 1)
		{
			tot1++;
			if(diasGastos > prazo)
			{
				atraso = diasGastos - prazo;
				totAtraso1++;
				diasAtraso1 += atraso;
			}
		}
		if(tipo == 2)
		{
			tot2++;
			if(diasGastos > prazo)
			{
				atraso = diasGastos - prazo;
				totAtraso2++;
				diasAtraso2 += atraso;
			}
		}
		
		if(diasGastos > prazo)
		{
			atraso = diasGastos - prazo;
			
			if(atraso > maiorAtraso)
			{
				maiorAtraso = atraso;
				maiorAtrasoOS = numeroOS;
			}
		}
		
		if(prazo >= diasGastos)
		{
			totNoPrazo++;
		}
		i++;
	}
	percAtraso1 = (totAtraso1/tot1)*100;
	percAtraso2 = (totAtraso2/tot2)*100;
	medAtraso1 = diasAtraso1/totAtraso1;
	medAtraso2 = diasAtraso2/totAtraso2;
	percNoPrazo = (totNoPrazo/i)*100;
	
	printf("Percentual de atraso manut.: %.1f%%.\n", percAtraso1);
	printf("Percentual de atraso reparo.: %.1f%%.\n", percAtraso2);
	printf("A OS com maior atraso foi a: %d, com %d dias de atraso.\n", maiorAtrasoOS, maiorAtraso);
	printf("Media de atraso manut: %.1f.\n", medAtraso1);
	printf("Media de atraso reparo: %.1f.\n", medAtraso2);
	printf("Percentual de OS`s no prazo: %.1f%%.", percNoPrazo);
	
	
	
	return 0;
}
