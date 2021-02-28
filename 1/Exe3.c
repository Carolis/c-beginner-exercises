#include <stdio.h>

float divisao(int dividendo, int divisor)
{
    float q;
    q = dividendo / divisor;
    return q;
}

int main()
{
    int a, b;
    float resultado;
    printf("Digite dividendo e divisor: \n");
    scanf("%i", &a);
    scanf("%i", &b);
    resultado = divisao(a, b);
    printf("Resultado: %.2f \n", resultado);
    return 0;
}