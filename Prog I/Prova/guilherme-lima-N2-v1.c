#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

#define ARRAY_LENGTH 150

struct peca {
	int cod;
	char categoria[25];
	float peso;
	int quantidade;
};

void bubbleSort(struct peca array[], int length){
	struct peca aux[length];
	int i;
	int j;
	
	for(i=0;i<149;i++) {
		for(j=i+1;j<150;j++) {
			if(array[i].quantidade > array[j].quantidade) {
				aux[i] = array[j];
				array[j] = array[i];
				array[i] = aux[i];
			}
		}
	}
}




int main() {
	srand(time(NULL));
	setlocale(LC_ALL, "Portuguese");
	
	int i, j, ct;
	struct peca pecas[150];
	float medPeso, totPeso = 0;
	float medPesoAlta, totPesoAlta = 0, medPesoMod, totPesoMod = 0, medPesoBaixa, totPesoBaixa = 0;
	float totBaixa = 0, totMod = 0, totAlta = 0, percBaixa, percMod, percAlta, totAlta10 = 0, percAlta10;
	
	for(i=0;i<150;i++) {
		pecas[i].cod = 1001+i;
		ct = (rand()%3)+1;
		pecas[i].peso = (rand()%496)+5;
		pecas[i].peso /= 10;
		totPeso += pecas[i].peso;
		pecas[i].quantidade = rand()%101;
		
		if(ct==1) {
			sprintf(pecas[i].categoria, "Alta prioridade    ");
			totAlta++;
			totPesoAlta += pecas[i].peso;
			if(pecas[i].quantidade < 10) {
				totAlta10++;
			}
		}
		if(ct==2) {
			sprintf(pecas[i].categoria, "Prioridade moderada");
			totMod++;
			totPesoMod += pecas[i].peso;
		}
		if(ct==3) {
			sprintf(pecas[i].categoria, "Baixa prioridade   ");
			totBaixa++;
			totPesoBaixa += pecas[i].peso;
		}
		
		printf("%d\t%s\t%.1fkg\t%d\n", pecas[i].cod, pecas[i].categoria, pecas[i].peso, pecas[i].quantidade);
	}
	
	medPeso = totPeso/i;
	medPesoAlta = totPesoAlta/totAlta;
	medPesoMod = totPesoMod/totMod;
	medPesoBaixa = totPesoBaixa/totBaixa;
	percBaixa = (totBaixa/i)*100;
	percMod = (totMod/i)*100;
	percAlta = (totAlta/i)*100;
	percAlta10 = (totAlta10/totAlta)*100;
	
	printf("\n\n");
	printf("Média geral de peso: %.1fkg\n", medPeso);
	printf("Média de peso das peças de baixa prioridade: %.1fkg\n", medPesoBaixa);
	printf("Média de peso das peças de prioridade moderada: %.1fkg\n", medPesoMod);
	printf("Média de peso das peças de alta prioridade: %.1fkg\n", medPesoAlta);
	printf("Percentual de peças de baixa prioridade %.1f%%\n", percBaixa);
	printf("Percentual de peças de prioridade moderada %.1f%%\n", percMod);
	printf("Percentual de peças de alta prioridade %.1f%%\n", percAlta);
	printf("Percentual de peças de alta prioridade com menos de 10un: %.1f%%\n", percAlta10);
	
	/*for(i=0;i<149;i++) {
		for(j=i+1;j<150;j++) {
			if(pecas[i].quantidade > pecas[j].quantidade) {
				aux[i] = pecas[j];
				pecas[j] = pecas[i];
				pecas[i] = aux[i];
			}
		}
	}*/
	
	bubbleSort(pecas, ARRAY_LENGTH);
	
	printf("\n\n");
	printf("Vetor ordenado\n");
	printf("\n");
	
	for(i=0; i<150; i++) {
		printf("%d\t%s\t%.1fkg\t%d\n", pecas[i].cod, pecas[i].categoria, pecas[i].peso, pecas[i].quantidade);
	}
	
	return 0;
}
