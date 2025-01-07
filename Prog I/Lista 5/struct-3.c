/*3)	Dado o exercício 2 faça outro algoritmo que calcule o percentual de operários de cada 
linha de produção e o percentual de operários que produziram  mais de 300 peças.*/

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

struct op{
	int linha, producao;
};

int main(){
	srand(time(NULL));
	
	struct op operario[50];
	int i;
	float totProd1 = 0, totProd2 = 0, med1, med2, tot1 = 0, tot2 = 0, perc1, perc2, tot300, perc300;
	
	for(i=0; i<50; i++){
		operario[i].linha = (rand()%2)+1;
		operario[i].producao = (rand()%231)+120;
		
		if(operario[i].producao>300){
			tot300++;
		}
		
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
	perc1 = (tot1/i)*100;
	perc2 = (tot2/i)*100;
	perc300 = (tot300/i)*100;
	
	printf("Media de producao linha 1: %.1f\n", med1);
	printf("Media de producao linha 2: %.1f\n", med2);
	printf("Percentual de operarios linha 1: %.1f%%\n", perc1);
	printf("Percentual de operarios linha 2: %.1f%%\n", perc2);
	printf("Percentual de operarios com producao > 300: %.1f%%\n", perc300);
	
	return 0;
}
