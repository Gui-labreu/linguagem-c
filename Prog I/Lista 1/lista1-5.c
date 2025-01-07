#include <stdio.h>
/*5 - Fazer um programa que apresente seu nome o ano
que você nasceu e sua idade em 2020
Os valores para o ano de nascimento e ano atual devem
ser atribuídos a variáveis, a idade deve ser calculada.*/

int main(){
	char nome[20] = "Guilherme";
	int anoAtual = 2020, anoNasc = 2002, idade = anoAtual - anoNasc;
	
	printf("Meu nome e %s, nasci em %d e em %d eu tinha %d anos\n", nome, anoNasc, anoAtual, idade);
	
	return 0;
}
