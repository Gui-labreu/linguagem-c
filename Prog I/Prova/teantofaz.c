#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

//Quest�o 1

int main()
{
    int precoCama, precoTrav, tipoCama, tipoTrav, qntdTrav, valorTrav, valorTotal;
    
    printf("Escolha o tipo de cama:\n1-Simples (R$500,00)\n2-Casal (R$ 850,00)\n3-King (R$1200,00)\n");
    scanf("%d", &tipoCama);
    
    if(tipoCama == 1)
    {
        printf("Voc� escolheu uma cama simples\n");
        precoCama = 500;
    }
    if(tipoCama == 2)
    {
        printf("Voc� escolheu uma cama de casal\n");
        precoCama = 850;
    }
    if(tipoCama == 3)
    {
        printf("Voc� escolheu uma cama king size\n");
        precoCama = 1200;
    }
    
    printf("Escolha o tipo de travesseiro:\n1-Macio (R$50,00)\n2-M�dio (R$ 80,00)\n3-Firme (R$100,00)\n");
    scanf("%d", &tipoTrav);
    
    if(tipoTrav == 1)
    {
        printf("Voc� escolheu travesseiro macio\n");
        precoTrav = 50;
    }
    if(tipoTrav == 2)
    {
        printf("Voc� escolheu travesseiro m�dio\n");
        precoTrav = 80;
    }
    if(tipoTrav == 3)
    {
        printf("Voc� escolheu travesseiro firme\n");
        precoCama = 100;
    }
    
    printf("Quantos travesseiros deseja?\n");
    scanf("%d", &qntdTrav);
    
    valorTrav = qntdTrav * precoTrav;
    valorTotal = valorTrav + precoCama;
    
    printf("Pre�o da Cama: %d\n", precoCama);
    printf("Pre�o dos travesseiros: %d\n", valorTrav);
    printf("Pre�o total: %d\n", valorTotal);
    
    
    return 0;
}