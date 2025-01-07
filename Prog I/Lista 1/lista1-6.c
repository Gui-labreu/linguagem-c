#include <stdio.h>
#include <stdlib.h>
/*6 – Fazer um programa que peça seu nome e ano de
nascimento, calcule e apresente a sua idade no ano de
2021.*/

int main(){
	char nome[20];
	int anoAtual, anoNasc;
	
	printf("Digite seu nome:\n");
	gets(nome);
	printf("Digite seu ano de nascimento:\n");
	scanf("%d", &anoNasc);
	printf("Digite o ano atual:\n");
	scanf("%d", &anoAtual);
	
	int idade = anoAtual - anoNasc;
	
	printf("Ola %s, voce nasceu em %d e em %d fez %d anos\n", nome, anoNasc, anoAtual, idade);
	
	return 0;
}
