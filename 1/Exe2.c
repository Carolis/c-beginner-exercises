#include <stdio.h>

int soma(int a, int b)
{
    int s;
    s = a + b;
    return s;
}

int main()
{
    int a, b, resultado;
    printf("Digite os dois numeros inteiros a serem somados: \n");
    scanf("%d", &a);
    scanf("%d", &b);
    resultado = soma(a, b);
    printf("Resultado: %d \n", resultado);
    return 0;
}