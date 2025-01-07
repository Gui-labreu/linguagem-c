/*7)Gere aleatoriamente 30 números entre -10 e 30, em seguida
apresente a sua média.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	srand(time(NULL));
	int i, aleatorio;
	float soma = 0, media;
	
	while(i < 30)
	{
		aleatorio = (rand()%41)-10;
		printf("%d - %d\n", i+1, aleatorio);
		soma += aleatorio;
		
		i++;
	}
	
	media = soma/i;
	printf("Media: %.1f\n", media);
	
	return 0;
}
