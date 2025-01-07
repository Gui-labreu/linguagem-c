/*11 � Fa�a um programa para calcular o IMC de um indiv�duo ap�s a leitura de seu peso e altura. Em
seguida classifique-o pela tabela : IMC abaixo de 18,5 Abaixo do peso IMC de 18,5 at� 24,9 Peso
Normal, IMC de 25 at� 29,9 Sobre Peso IMC de 30 at� 34,9 Obesidade Grau 1, IMC de 35 ate 39,9
Obesidade Grau 2, A partir 40 Obesidade M�rbida.*/

#include <stdio.h>

int main()
{
	float peso, altura, imc;
	
	printf("Digite seu peso:\n");
	scanf("%f", &peso);
	printf("Digite sua altura:\n");
	scanf("%f", &altura);
	
	imc = peso / (altura*altura);
	
	if(imc < 18.5)
	{
		printf("Abaixo do peso");
	}
	else
	{
		if(imc >= 18.5 && imc < 25)
		{
			printf("Peso ideal");
		}
		if(imc >= 25 && imc < 30)
		{
			printf("Sobre peso");
		}
		if(imc >= 30 && imc < 35)
		{
			printf("Obesidade grau 1");
		}
		if(imc >= 35 && imc < 40)
		{
			printf("Obesidade grau 2");
		}
		if(imc >= 40)
		{
			printf("Obesidade morbida");
		}
	}
}
