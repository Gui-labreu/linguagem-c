/*A empresa Prog1 SA Serviços de Tecnologia está fazendo um programa para analisar dados a respeito de 120 
jovens inscritos para um programa de Inclusão em Tecnologia que realizaram teste de conhecimentos.
1 - Faça um programa para gerar e apresentar 120 registros contendo:
A Inscrição sendo de um sequencial a partir de 1001;
Origem Escolar (1 – Pública ou 2 - Particular);
Escolaridade (1 – Fundamental ou 2 – Médio);
Pontuação (0 -100);
Nível de Conhecimento em Informática baseada (de 40 até 60 pontos – Básico, de 61 a 80 – Intermediário, 
de 81 a 100 - Avançado);
Obs.: Os alunos que obtiveram pontuação inferior a 40 não serão classificados quanto ao nível de conhecimento.
Calcular:
2 – A média da pontuação obtida por todos os candidatos; 
3 - O percentual de jovens oriundos de escolas públicas e privadas
4 - O percentual de Jovens por nível de conhecimento
5 – O percentual de jovens do ensino médio que vem de escolas públicas.
6 – A maior e a menor pontuação obtida com os respectivos números de inscrição*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <locale.h>

int main()
{
	srand(time(NULL));
	setlocale(LC_ALL, "Portuguese");
	
	int i, insc, og, es, pont, maior = 0, menor = 100, inscMaior, inscMenor;
	char origem[15], escolaridade[15], classificacao[20];
	float totalpont = 0, mediapont, percPub, percPriv, totPub = 0, totPriv = 0 , percDesc, totDesc = 0, percBas, totBas = 0, percInt, totInt = 0, percAvan, totAvan = 0, percMedPub, totMedPub;
		
	while(i < 120)
	{
		i++;
		
		insc = 1000 + i;
		og = (rand()%2)+1;
		es = (rand()%2)+1;
		pont = rand()%101;
		totalpont += pont;
		
		if(og == 1)
		{
			sprintf(origem, "Publica   ");
			totPub++;
			if(es == 2)
			{
				totMedPub++;
			}
		}
		if(og == 2)
		{
			sprintf(origem, "Particular");
			totPriv++;
		}
		if(es == 1)
		{
			sprintf(escolaridade, "Fundamental");
		}
		if(es == 2)
		{
			sprintf(escolaridade, "Medio      ");
		}
		if(pont < 40)
		{
			sprintf(classificacao, "");
			totDesc++;	
		}
		else
		{
			if(pont >= 40 && pont <= 60)
			{
				sprintf(classificacao, "Basico");
				totBas++;
			}
			if(pont > 60 && pont <= 80)
			{
				sprintf(classificacao, "Intermediario");
				totInt++;
			}
			if(pont > 80)
			{
				sprintf(classificacao, "Avancado");
				totAvan++;
			}
		}
		
		if(pont > maior)
		{
			maior = pont;
			inscMaior = insc;
		}
		if(pont < menor)
		{
			menor = pont;
			inscMenor = insc;
		}
		printf("%4d\t%s\t%s\t%2d\t%s\n", insc, origem, escolaridade, pont, classificacao);
	}
	mediapont = totalpont/i;
	percPub = (totPub/i)*100;
	percPriv = (totPriv/i)*100;
	percDesc = (totDesc/i)*100;
	percBas = (totBas/i)*100;
	percInt = (totInt/i)*100;
	percAvan = (totAvan/i)*100;
	percMedPub = (totMedPub/i)*100;
	
	
	printf("\nMédia geral da pontuação: %.1f\n", mediapont);
	printf("Percentual escola pública: %.2f%%\n", percPub);
	printf("Percentual escola particular: %.2f%%\n", percPriv);
	printf("Percentual desclassificado: %.2f%%\n", percDesc);
	printf("Percentual básico: %.2f%%\n", percBas);
	printf("Percentual intermediário: %.2f%%\n", percInt);
	printf("Percentual avancado: %.2f%%\n", percAvan);
	printf("Percentual ensino medio vindo de escola pública: %.2f%%\n", percMedPub);
	printf("Maior nota: %d, inscrição %d\n", maior, inscMaior);
	printf("Menor nota: %d, inscrição %d\n", menor, inscMenor);
	
	return 0;
}




