/*Uma empresa de manuten��o de equipamentos deseja fazer um estudo em rela��o um conjunto de
250 Ordens de Servi�o executadas, para isso ofereceu um arquivo contendo o N�mero da OS(1354-
1603) a quantidade de dias previstos par a entrega, a quantidade de dias gastos e o tipo do servi�o (1 �
Manuten��o ou 2 � Reparo) . Fa�a um programa que gere aleatoriamente as informa��es e calcule: O
percentual de ordens de servi�o de cada tipo entregue fora do prazo e o n�mero da OS com maior
atraso.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	srand(time(NULL));
	int i = 0, numeroOS, prazo, diasGastos, tipo, atraso, maiorAtraso = 0, maiorAtrasoOS;
	float tot1 = 0, tot2 = 0, totAtraso1 = 0, totAtraso2 = 0, percAtraso1, percAtraso2;
	
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
				totAtraso1++;
			}
		}
		if(tipo == 2)
		{
			tot2++;
			if(diasGastos > prazo)
			{
				totAtraso2++;
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
		i++;
	}
	percAtraso1 = (totAtraso1/tot1)*100;
	percAtraso2 = (totAtraso2/tot2)*100;
	
	printf("Percentual de atraso manut.: %.1f%%.\n", percAtraso1);
	printf("Percentual de atraso reparo.: %.1f%%.\n", percAtraso2);
	printf("A OS com maior atraso foi a: %d, com %d dias de atraso.\n", maiorAtrasoOS, maiorAtraso);
	
	
	
	return 0;
}
