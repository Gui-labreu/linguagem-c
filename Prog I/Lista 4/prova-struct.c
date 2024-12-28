/*1. Uma empresa de transporte aéreo possui dois tipos de aeronaves S92A e AW101 para transporte
de passageiros com capacidade para 19 e 25 passageiros respectivamente.
No último mês foram feitas 85 viagens. Cada viagem tem entre 2 e 5 trechos e um total 
de 100 até 650 km em 4 horas (tempo estimado para os 650 KM de autonomia da aeronave)
gastando 200 litros de querosene por hora(supostamente).
Fazer um programa em C para gerar aleatoriamente os dados das 85 viagens contendo:
Código da Viagem formado pelo tipo da aeronave mais um sequencial a partir de 4001.
O número de trechos planejados.
O total de KM planejados para o percurso.
A Quantidade da passageiros de acordo com o tipo da aeronave sabendo que cada Voo deve utilizar 
no mínimo 60% da capacidade da Aeronave.   
Calcule:
2. A quantidade de litros de querosene gasta em cada viagem aproximadamente.
3. A média de trechos e KMs por viagem.
4. O percentual de viagens com mais de 90% de ocupação.
5. O percentual de voos por tipo de Helicóptero.
6. A taxa média de ocupação por tipo de aeronave.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

struct viagens{
	char codigo[10];
	int trecho, distancia, qntdPass;
	float querosene;
};

int main(){
	srand(time(NULL));
	setlocale(LC_ALL, "Portuguese");
	
	int i, tp;
	float mediaTrechos, mediaKM, totalTrechos = 0, totalKM = 0, perc90, tot90 = 0, percS92A, percAW101, totS92A = 0, totAW101 = 0, txOcup, totOcupS92A = 0, totOcupAW101 = 0, txOcupS92A, txOcupAW101, maxPass;
	struct viagens viagem[85];
	
	for(i=0; i<85; i++){
		tp = rand()%2;
		viagem[i].trecho = (rand()%4)+2;
		viagem[i].distancia = (rand()%551)+100;
		viagem[i].querosene = viagem[i].distancia*1.23;
		totalTrechos += viagem[i].trecho;
		totalKM += viagem[i].distancia;
		
		if(tp==0){
			sprintf(viagem[i].codigo, "S92A-%d", i+4001);
			viagem[i].qntdPass = (rand()%8)+12;
			maxPass = 19;
			totS92A++;
			txOcup = viagem[i].qntdPass/maxPass*100;
			totOcupS92A += txOcup;
				
		}
		if(tp==1){
			sprintf(viagem[i].codigo, "AW101-%d", i+4001);
			viagem[i].qntdPass = (rand()%11)+15;
			maxPass = 25;
			totAW101++;
			txOcup = viagem[i].qntdPass/maxPass*100;
			totOcupAW101 += txOcup;
		}
		
		if(txOcup > 90){
			tot90++;
		} 
		
		
		printf("%s\t%d trechos\t%dkm\t%d\t%.1f l\t%.1f%%\n", viagem[i].codigo, viagem[i].trecho, viagem[i].distancia, viagem[i].qntdPass, viagem[i].querosene, txOcup);
	}
	printf("\n");
	mediaTrechos = totalTrechos/i;
	mediaKM = totalKM/i;
	perc90 = (tot90/i)*100;
	percS92A = (totS92A/i)*100;
	percAW101 = (totAW101/i)*100;
	txOcupS92A = totOcupS92A/totS92A;
	txOcupAW101 = totOcupAW101/totAW101;
	
	
	printf("Média de trechos: %.1f\n", mediaTrechos);
	printf("Média de km: %.1f\n", mediaKM);
	printf("Percentual 90%% de ocupação: %.1f\n%%", perc90);
	printf("Percentual S92A: %.1f%%\n", percS92A);
	printf("Percentual AW101: %.1f%%\n", percAW101);
	printf("Taxa de ocupação S92A: %.1f\n", txOcupS92A);
	printf("Taxa de ocupação AW101: %.1f\n", txOcupAW101);
	
	
	return 0;
}

