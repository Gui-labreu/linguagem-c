/*4)	Faça um programa que gere aleatoriamente o sexo(1 - M ou 0 - F) a idade (12 a 17) e o 
esporte preferido (1 – Basquete, 2 – Futebol ou 3 – Vôlei) de um grupo de 75 jovens e calcule: 
a média de idade dos jovens que preferem cada esporte e a média das idades dos meninos e das 
meninas.*/

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

struct jovem{
	int idade;
	char esporte[20], sexo[15];
};

int main(){
	struct jovem jovens[75];
	int i, sx, esp, totBas = 0, totFut = 0, totVol = 0, totMas = 0, totFem = 0;
	float medIdaBas, medIdaFut, medIdaVol, totIdaBas = 0, totIdaFut = 0, totIdaVol = 0, totIdaMas = 0, totIdaFem = 0, medIdaMas, medIdaFem;
	
	srand(time(NULL));
	
	for(i=0;i<75;i++){
		sx = rand()%2;
		esp = (rand()%3)+1;
		jovens[i].idade = (rand()%6)+12;
		
		if(esp==1){
			sprintf(jovens[i].esporte, "Basquete");
			totBas++;
			totIdaBas += jovens[i].idade;
		}
		if(esp==2){
			sprintf(jovens[i].esporte, "Futebol ");
			totFut++;
			totIdaFut += jovens[i].idade;
		}
		if(esp==3){
			sprintf(jovens[i].esporte, "Volei   ");
			totVol++;
			totIdaVol += jovens[i].idade;
		}
		
		if(sx==0){
			sprintf(jovens[i].sexo, "Feminino ");
			totFem++;
			totIdaFem += jovens[i].idade;
		}
		
		if(sx==1){
			sprintf(jovens[i].sexo, "Masculino");
			totMas++;
			totIdaMas += jovens[i].idade;
		}
		
		printf("%s\t%d\t%s\n", jovens[i].sexo, jovens[i].idade, jovens[i].esporte);
	}
	
	printf("\n");
	
	medIdaBas = totIdaBas/totBas;
	medIdaFut = totIdaFut/totFut;
	medIdaVol = totIdaVol/totVol;
	medIdaMas = totIdaMas/totMas;
	medIdaFem = totIdaFem/totFem;
	
	printf("Media de idade basquete: %.1f\n", medIdaBas);
	printf("Media de idade futebol: %.1f\n", medIdaFut);
	printf("Media de idade volei: %.1f\n", medIdaVol);
	printf("Media de idade masculina: %.1f\n", medIdaMas);
	printf("Media de idade feminina: %.1f\n", medIdaFem);
	
	return 0;
}
