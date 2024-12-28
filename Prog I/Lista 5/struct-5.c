/*5)Dado o exercício 4 calcule o percentual de jovens de cada sexo em cada modalidade.*/

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
	float percMasBas, percMasFut, percMasVol, percFemBas, percFemFut, percFemVol, totMasBas = 0, totMasFut = 0, totMasVol = 0, totFemBas = 0, totFemFut = 0, totFemVol = 0;
	srand(time(NULL));
	
	for(i=0;i<75;i++){
		sx = rand()%2;
		esp = (rand()%3)+1;
		jovens[i].idade = (rand()%6)+12;
		
		if(esp==1){
			sprintf(jovens[i].esporte, "Basquete");
			totBas++;
			totIdaBas += jovens[i].idade;
			if(sx==0){
				totFemBas++;
			}
			if(sx==1){
				totMasBas++;
			}
		}
		if(esp==2){
			sprintf(jovens[i].esporte, "Futebol ");
			totFut++;
			totIdaFut += jovens[i].idade;
			if(sx==0){
				totFemFut++;
			}
			if(sx==1){
				totMasFut++;
			}
		}
		if(esp==3){
			sprintf(jovens[i].esporte, "Volei   ");
			totVol++;
			totIdaVol += jovens[i].idade;
			if(sx==0){
				totFemVol++;
			}
			if(sx==1){
				totMasVol++;
			}
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
	
	percMasBas = (totMasBas/totBas)*100;
	percFemBas = (totFemBas/totBas)*100;
	percMasFut = totMasFut/totFut*100;
	percFemFut = totFemFut/totFut*100;
	percMasVol = totMasVol/totVol*100;
	percFemVol = totFemVol/totVol*100;
	
	printf("Media de idade basquete: %.1f\n", medIdaBas);
	printf("Media de idade futebol: %.1f\n", medIdaFut);
	printf("Media de idade volei: %.1f\n", medIdaVol);
	printf("Media de idade masculina: %.1f\n", medIdaMas);
	printf("Media de idade feminina: %.1f\n", medIdaFem);
	printf("Percentual masculino basquete: %.1f%%\n", percMasBas);
	printf("Percentual feminino basquete: %.1f%%\n", percFemBas);
	printf("Percentual masculino futebol: %.1f%%\n", percMasFut);
	printf("Percentual feminino futebol: %.1f%%\n", percFemFut);
	printf("Percentual masculino volei: %.1f%%\n", percMasVol);
	printf("Percentual feminino volei: %.1f%%\n", percFemVol);
	
	return 0;
}
