#include <stdio.h>

void multiplicacao(float multiplicando, int multiplicador)
{
    float produto;
    produto = multiplicando * multiplicador;
    printf("\n o Produto é: %f \n", produto);
}

int main()
{
    float a;
    int b;
    printf("Digite multiplicando e multiplicador: \n");
    scanf("%f", &a);
    scanf("%i", &b);
    multiplicacao(a, b);
    return 0;
}