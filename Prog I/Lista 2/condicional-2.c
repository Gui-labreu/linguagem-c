/*2 – Fazer um programa que receba duas notas N1, N2 e o percentual de Frequência de um aluno e
verifique a situação do aluno: (Aprovado – Reprovado – Prova Final*/

#include <stdio.h>

int main()
{
	float n1, n2, media;
	int presenca;
	
	printf("Digite o nota da n1:\n");
	scanf("%f", &n1);
	printf("Digite o nota da n2:\n");
	scanf("%f", &n2);
	printf("Digite o valor da presença em %%:\n");
	scanf("%d", &presenca);
	
	media = (n1 + n2)/2;
	
	if(presenca > 75)
	{
		if(media >= 4 && media < 7)
		{
			printf("Prova final");
		}
		else if(media > 7)
		{
			printf("Aprovado");
		}
		else
		{
			printf("Reprovado");
		}
	}
	else
	{
		printf("Reprovado");
	}
	
	
	return 0;
}
