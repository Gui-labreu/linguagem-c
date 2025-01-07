/*3 - Fazer um programa que receba o peso e a altura de uma pessoa e calcule o seu IMC Índice de
Massa Corporal. IMC=peso/(altura X altura) Verifique se o indivíduo está no peso ideal.
IMC>=18.5 e IMC<25*/

#include <stdio.h>

int main()
{
	float peso, altura, imc;
	printf("Digite seu peso em kg:\n");
	scanf("%f", &peso);
	printf("Digite sua altura em metros:\n");
	scanf("%f", &altura);
	
	imc = peso/(altura*altura);
	
	if(imc >=18.5 && imc <25)
	{
		printf("Dentro do peso ideal");
	}
	else
	{
		printf("Fora do peso ideal");
	}
		
	return 0;
}
