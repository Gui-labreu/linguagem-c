/*8)Fa�a um programa que gere aleatoriamente 5 n�meros entre 0 e
10 e seus respectivos pesos (1, 2 ou 3) ao final calcule sua m�dia
ponderada.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	
	srand(time(NULL));
	int i = 0, randNum, randPeso;
	float somaNum, somaPeso, media;
	
	while(i < 5)
	{
		randNum = rand()%11;
		randPeso = (rand()%3)+1;
		
		printf("%d - %d\n", randNum, randPeso);
		
		somaNum += (randNum * randPeso);
		somaPeso += randPeso;
		
		i++;
	}
	
	media = somaNum/somaPeso;
	printf("Media: %.1f\n", media);
	
	
	
	return 0;
}
