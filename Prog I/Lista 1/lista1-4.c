#include <stdio.h>
/*4 -Fazer um programa que apresente seu nome o ano
que você nasceu e sua idade em 2020
Os valores para o ano de nascimento, ano atual e idade
devem ser atribuídos a variáveis*/

int main(){
	char nome[20] = "Guilherme";
	int idade2020 = 18, anoNasc = 2002;
	
	printf("Meu nome e %s, nasci em %d e em 2020 eu tinha %d anos\n", nome, anoNasc, idade2020);
	
	return 0;
}
