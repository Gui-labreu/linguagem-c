#include <stdio.h>

/*7 -Fazer um programa que peça seu nome, ano de
nascimento, seu peso e altura. Calcule calcule e
apresente a sua idade e IMC.*/


int main() 
{
	char nome[20];
	int anoNasc, idade, anoAtual = 2024;
	float peso, altura, imc;
	
	printf("Digite seu nome:\n");
	gets(nome);
	printf("Digite seu ano de nascimento:\n");
	scanf("%d", &anoNasc);
	printf("DIgite seu peso em kg:\n");
	scanf("%f", &peso);
	printf("Digite sua altura em metros:\n");
	scanf("%f", &altura);
	
	idade = anoAtual - anoNasc;
	imc = peso/(altura*altura);
	
	printf("%s, de %d anos, tem IMC igual a %.2f.", nome, idade, imc);
	
	return 0;
		
}
