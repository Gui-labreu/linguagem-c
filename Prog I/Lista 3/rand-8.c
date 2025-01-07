/*Um hospital está fazendo um estudo referente um conjunto de 100 pacientes atendidos em sua
emergência, para isso faça um programa que gere aleatoriamente o tipo de atendimento(0– Clinica
Geral ou 1 – Ortopedia) a origem (0 – Particular ou 1 – Plano de Saúde) e a idade dos pacientes(0- 90).
Calcule o percentual de atendimentos de cada tipo, a média de idade dos pacientes de cada origem e o
percentual de pacientes da Clínica geral com idade superior a 60 ano*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int main()
{
	srand(time(NULL));
	
	int i = 0, randtipo, randorigem, idade, totPart = 0, totPlano = 0;
	char tipo[20], origem[20];
	float percGeral, percOrto, totGeral = 0, totOrto = 0, medPart, medPlano, idadePart = 0, idadePlano = 0, percGeral60, totGeral60 = 0;
	
	printf("Tipo\t\tOrigem\t\tIdade\n\n");
	while(i < 100)
	{
		randtipo = rand()%2;
		randorigem = rand()%2;
		idade = rand()%91;
		
		
		
		if(randtipo == 0)
		{
			sprintf(tipo, "Clinica Geral");
			totGeral++;
			if(idade > 60)
			{
			totGeral60++;
			}
		}
		if(randtipo == 1)
		{
			sprintf(tipo, "Ortopedia");
			totOrto++;
		}
		if(randorigem == 0)
		{
			sprintf(origem, "Particular");
			idadePart += idade;
			totPart++;
		}
		if(randorigem == 1)
		{
			sprintf(origem, "Plano de saude");
			idadePlano += idade;
			totPlano++;
		}
		
		printf("%s\t%s\t%d\n", tipo, origem, idade);
		
		i++;
	}
	
	percGeral = (totGeral/i)*100;
	percOrto = (totOrto/i)*100;
	medPart = idadePart/totPart;
	medPlano = idadePlano/totPlano;
	percGeral60 = (totGeral60/totGeral)*100;
	
	
	printf("\nPercentual tipo clinica geral; %.1f%%\n", percGeral);
	printf("Percentual tipo ortopedia; %.1f%%\n", percOrto);
	printf("Media de idade particular: %.1f\n", medPart);
	printf("Media de idade plano de saude: %.1f\n", medPlano);
	printf("Percentual clinica geral com mais de 60 anos: %.1f%%", percGeral60);
	
	return 0;
}
