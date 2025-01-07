/*4 - Uma loja fornece 10% de desconto para funcion�rios e 5% de desconto
para clientes vips. Fa�a um programa que calcule o valor total a ser pago
por uma pessoa. O programa dever� ler o valor total da compra
efetuada e um c�digo que identifique se o comprador � um cliente
comum (1), funcion�rio (2) ou vip (3).*/

#include <stdio.h>

int main()
{
	float compra;
	int id;
	
	printf("Digite o valor da compra:\n");
	scanf("%f", &compra);
	printf("Informe o tipo de comprador:\n");
	printf("1 - Comum\n");
	printf("2 - Funcionario\n");
	printf("3 - VIP\n");
	scanf("%d", &id);
	
	switch (id)
	{
		case 1:
			printf("O total ficou em %.2f", compra);
			break;
		
		case 2:
			printf("O total ficou em %.2f", compra*0.9);
			break;
		
		case 3:
			printf("O total ficou em %.2f", compra*0.95);
			break;
		
		default:
			printf("Identificador invalido");
			break;
	}
	
	return 0;
}


