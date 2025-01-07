/*A empresa Prog1 SA Servi�os Offshore est� fazendo um programa para analisar dados a respeito dos 130 
Ordens de Servi�o em suas unidades operacionais.
Parte 1 � Primeira Entrega
1 - Fa�a um programa para gerar e apresentar 130 Ordens de Servi�os contendo:
Os c�digos das OSs compostos de um sequencial de 1001 a 1130 e a Unidade (1- MAC ou 2-SAN),
Unidade de Servi�o (1 � Maca� ou 2 - Santos);
N�vel de Complexidade (1 � Baixa, 2 � M�dia ou 3 - Alta);
Tipo de Servi�o (1 � Caldeiraria ou 2 � Usinagem);
Quantidade de Horas Gastas (4 -120);
2 � Calcular Valor do servi�o que tamb�m dever� ser apresentado, baseado na seguinte f�rmula:
Valor = 1200 +( 200,00 por n�vel (ex: Nivel 1 200,00 � Nivel 2 400,00 e etc..) * NH)
Parte 2 � Segunda Entrega
3 - O percentual de servi�os de cada Unidade de cada tipo.
4 - O percentual de servi�os de Baixa Complexidade com dura��o maior que 20 horas.
5 � A m�dia de valor para os servi�os de cada tipo.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <locale.h>

int main()
{
	srand(time(NULL));
	setlocale(LC_ALL, "Portuguese");
	
	int i = 0, un, seq, nv, tp, horasGastas, valor, totMac = 0, totSan = 0, totBaixa = 0;
	char cod[10], local[10], nivel[15], tipo[15];
	float percCalMac, percCalSan, percUsiMac, percUsiSan, totUsiMac = 0, totUsiSan = 0, totCalMac = 0, totCalSan = 0; 
	float percBaixa20 = 0, totBaixa20 = 0, mediaValCal, mediaValUsi, totValCal = 0, totValUsi = 0, totCal = 0, totUsi = 0;
	
	while(i < 130)
	{
		i++;
		seq = 1000 + i;
		
		un = (rand()%2)+1;
		nv = (rand()%3)+1;
		tp = (rand()%2)+1;
		horasGastas = (rand()%117)+4;
		valor = 1200 + ((200*nv)*horasGastas);
		
		if(un == 1)
		{
			sprintf(cod, "%dMAC", seq);
			sprintf(local, "Maca� ");
			totMac++;
			if(tp == 1)
			{
				totCalMac++;
			}
			if(tp == 2)
			{
				totUsiMac++;
			}
		}
		if(un == 2)
		{
			sprintf(cod, "%dSAN", seq);
			sprintf(local, "Santos");
			totSan++;
			if(tp == 1)
			{
				totCalSan++;
			}
			if(tp == 2)
			{
				totUsiSan++;
			}
		}
		if(nv == 1)
		{
			sprintf(nivel, "Baixo");
			totBaixa++;
			if(horasGastas > 20)
			{
				totBaixa20++;
			}
		}
		if(nv == 2)
		{
			sprintf(nivel, "M�dio");
		}
		if(nv == 3)
		{
			sprintf(nivel, "Alto ");
		}
		if(tp == 1)
		{
			sprintf(tipo, "Caldeiraria");
			totCal++;
			totValCal += valor;
		}
		if(tp == 2)
		{
			sprintf(tipo, "Usinagem   ");
			totUsi++;
			totValUsi += valor;
		}
		
		printf("%s\t%s\t%s\t%s\t%3dh\t%5d R$\n", cod, local, nivel, tipo, horasGastas, valor);
	}
	
	percCalMac = (totCalMac/totMac)*100;
	percUsiMac = (totUsiMac/totMac)*100;
	percCalSan = (totCalSan/totSan)*100;
	percUsiSan = (totUsiSan/totSan)*100;
	percBaixa20 = (totBaixa20/totBaixa)*100;
	mediaValCal = totValCal/totCal;
	mediaValUsi = totValUsi/totUsi;

	printf("\nPecentual de caldeiraria em Maca�: %.1f%%\n", percCalMac);
	printf("Pecentual de usinagem em Maca�: %.1f%%\n", percUsiMac);
	printf("Percentual de caldeiraria em Santos: %.1f%%\n", percCalSan);
	printf("Percentual de usinagem em Santos: %.1f%%\n", percUsiSan);
	printf("Percentual de baixa complexidade que durou mais de 20h: %.1f%%\n", percBaixa20);
	printf("M�dia de valor da caldeiraria: %.2fR$\n", mediaValCal);
	printf("M�dia de valor da usinagem: %.2fR$\n", mediaValUsi);

	return 0;
}
