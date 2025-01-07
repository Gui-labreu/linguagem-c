/*1 - Usando switch, escreva um programa que leia um inteiro entre 1 e 7 e
imprima o dia da semana correspondente a este numero. Isto é, domingo
se 1, segunda-feira se 2, e assim por diante.*/

#include <stdio.h>

int main()
{
	int dia_semana;
	
	printf("Digite o dia da semana:\n");
	scanf("%d", &dia_semana);
	
	switch (dia_semana)
	{
		case 1:
			printf("Domingo\n");
			break;
			
		case 2:
			printf("Segunda\n");
			break;
			
		case 3:
			printf("Terca\n");
			break;
			
		case 4:
			printf("Quarta\n");
			break;
			
		case 5:
			printf("Quinta\n");
			break;
			
		case 6:
			printf("Sexta\n");
			break;
			
		case 7:
			printf("Sabado\n");
			break;
			
		default:
			printf("Dia invalido");
			break;
				
	}
}
