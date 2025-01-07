/*6)Uma empresa de manuten��o de equipamentos deseja fazer um estudo em rela��o um conjunto de 
250 Ordens de Servi�o executadas, para isso ofereceu um arquivo contendo  o N�mero da OS
(1354- 1603) a quantidade de dias previstos par a entrega, a quantidade de dias gastos e o tipo 
do servi�o (1 � Manuten��o ou 2 � Reparo) . Fa�a um programa que gere aleatoriamente as 
informa��es e calcule: O percentual de ordens de servi�o de cada tipo entregue fora do prazo e 
on�mero da OS com maior atraso.*/

#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <locale.h>

struct ordem{
	int numero, QDP, QDG, att;
	char tipo[20];
};

int main(){
	srand(time(NULL));
	setlocale(LC_ALL, "Portuguese");
	
	struct ordem os[250];
	int i, tp, totMan = 0, totRep = 0, maiorAtt = 0;
	float totAttMan = 0, totAttRep = 0, percAttMan, percAttRep;
	
	for(i=0;i<250;i++){
		os[i].numero = 1354+i;
		os[i].QDG = (rand()%10)+1;
		os[i].QDP = (rand()%10)+1;
		tp = (rand()%2)+1;
		
		if(tp==1){
			sprintf(os[i].tipo, "Manuten��o");
			totMan++;
		}
		if(tp==2){
			sprintf(os[i].tipo, "Reparo    ");
			totRep++;
		}
		
		printf("%d\t%d\t%d\t%s\n", os[i].numero, os[i].QDP, os[i].QDG, os[i].tipo);
		
		if(os[i].QDG>os[i].QDP){
			os[i].att = os[i].QDG-os[i].QDP;
			if(os[i].att > os[maiorAtt].att){
				maiorAtt = i;
			}
			if(tp==1){
				totAttMan++;
			}
			if(tp==2){
				totAttRep++;
			}
		}
	}
	
	printf("\n");
	
	percAttMan = totAttMan/totMan*100;
	percAttRep = totAttRep/totRep*100;
	
	printf("Percentual atraso manuten��o: %.1f\n", percAttMan);
	printf("Percentual atraso reparo: %.1f\n", percAttRep);
	printf("OS de maior atraso: %d, %d dias atrasados\n", os[maiorAtt].numero, os[maiorAtt].att);
	
	
	return 0;
}
