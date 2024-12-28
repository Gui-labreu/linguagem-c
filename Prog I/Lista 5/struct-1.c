/*1)Fazer um programa que gere aleatoriamente a idade(17 a 45) e o sexo (1 - M ou 2 -F) de 20 
indivíduos e calcule a média de idade de cada grupo.*/

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

struct pessoa{
	int idade;
	char sexo[20];
};

int main(){	
	
	struct pessoa grupo[20];
	int i, sx, totMas = 0, totFem = 0;
	float totIdaMas = 0, totIdaFem = 0, mediaMas, mediaFem;
	
	srand(time(NULL));
	
	for(i=0;i<20;i++){
		grupo[i].idade = (rand()%29)+17;
		sx = (rand()%2)+1;
		
		if(sx==1){
			sprintf(grupo[i].sexo, "Masculino");
			totMas++;
			totIdaMas += grupo[i].idade;
		}
		if(sx==2){
			sprintf(grupo[i].sexo, "Feminino ");
			totFem++;
			totIdaFem += grupo[i].idade;
		}
		printf("%d\t%s\n", grupo[i].idade, grupo[i].sexo);
	}
	printf("\n");
	
	mediaMas = totIdaMas/totMas;
	mediaFem = totIdaFem/totFem;
	
	printf("Media de idade masculina: %.1f\n", mediaMas);
	printf("Media de idade feminina: %.1f\n", mediaFem);
	
	
	return 0;
}
