/*7)Dado o exercício 6 calcule a média de dias de atraso para as OS’s de cada tipo quando houver 
e o percentual de OS’s  independente do tipo entregues antes do prazo.*/

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
	int i, tp, totMan = 0, totRep = 0, maiorAtt = 0, totAtt = 0;
	float totAttMan = 0, totAttRep = 0, percAttMan, percAttRep, totSomaAtt = 0, mediaAtt, percDP, totDP;
	
	for(i=0;i<250;i++){
		os[i].numero = 1354+i;
		os[i].QDG = (rand()%10)+1;
		os[i].QDP = (rand()%10)+1;
		tp = (rand()%2)+1;
		
		if(tp==1){
			sprintf(os[i].tipo, "Manutenção");
			totMan++;
		}
		if(tp==2){
			sprintf(os[i].tipo, "Reparo    ");
			totRep++;
		}
		
		printf("%d\t%d\t%d\t%s\n", os[i].numero, os[i].QDP, os[i].QDG, os[i].tipo);
		
		if(os[i].QDG>os[i].QDP){
			os[i].att = os[i].QDG-os[i].QDP;
			totAtt++;
			totSomaAtt += os[i].att;
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
		else{
			totDP++;
		}
	}
	
	printf("\n");
	
	percAttMan = totAttMan/totMan*100;
	percAttRep = totAttRep/totRep*100;
	mediaAtt = totSomaAtt/totAtt;
	percDP = totDP/i*100;
	
	printf("Percentual atraso manutenção: %.1f\n%%", percAttMan);
	printf("Percentual atraso reparo: %.1f\n%%", percAttRep);
	printf("OS de maior atraso: %d, %d dias atrasados\n", os[maiorAtt].numero, os[maiorAtt].att);
	printf("Media de dias de atraso: %.1f\n", mediaAtt);
	printf("Percentual dentro do prazo: %.1f%%\n", percDP);
	
	
	return 0;
}
