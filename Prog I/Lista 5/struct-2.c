/*2)Fazer um programa que gere aleatoriamente a produção (120 a 350) e a linha de produção 
(1 ou 2) de 50 operários a calcule a média de produção geral e de cada linha.*/

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

struct op{
	int linha, producao;
};

int main(){
	srand(time(NULL));
	
	struct op operario[50];
	int i, tot1 = 0, tot2 = 0;
	float totProd1 = 0, totProd2 = 0, med1, med2;
	
	for(i=0; i<50; i++){
		operario[i].linha = (rand()%2)+1;
		operario[i].producao = (rand()%231)+120;
		
		if(operario[i].linha==1){
			tot1++;
			totProd1 += operario[i].producao;
		}
		if(operario[i].linha==2){
			tot2++;
			totProd2 += operario[i].producao;
		}
		
		printf("%d\t%d\n", operario[i].linha, operario[i].producao);
	}
	
	printf("\n");
	
	med1 = totProd1/tot1;
	med2 = totProd2/tot2;
	
	printf("Media de producao linha 1: %.1f\n", med1);
	printf("Media de producao linha 2: %.1f\n", med2);
	
	return 0;
}
