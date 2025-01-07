/*8)Um hospital está fazendo um estudo referente um conjunto de 100 pacientes atendidos em sua 
emergência, para isso faça um programa que gere aleatoriamente o tipo de atendimento
(0– Clinica Geral ou 1 – Ortopedia) a origem (0 – Particular ou 1 – Plano de Saúde) e a idade dos 
pacientes(0- 90). Calcule o percentual de atendimentos de cada tipo, a média de idade dos 
pacientes de cada origem e o percentual de pacientes da Clínica geral com idade superior a 60 
anos.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct paciente{
	char tipo[20], origem[20];
	int idade;
};

int main(){
	srand(time(NULL));
	
	struct paciente pacientes[100];
	int i, tp, og;
	
	for(i=0; i<100; i++){
		tp = rand()%2;
		og = rand()%2;
		pacientes[i].idade = rand()%91;
		
		if(tp==0){
			sprintf(pacientes[i].tipo, "Clinica Geral");
		}
		if(tp==1){
			sprintf(pacientes[i].tipo, "Ortopedia    ");
		}
		
		if(og==0){
			sprintf(pacientes[i].origem, "Particular    ");
		}
		if(og==1){
			sprintf(pacientes[i].origem, "Plano de Saude");
		}
		
		printf("%s\t%s\t%d\n", pacientes[i].tipo, pacientes[i].origem, pacientes[i].idade);
		
	}
	
	return 0;
}
