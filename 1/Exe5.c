#include <stdio.h>
#include <stdlib.h>
int soma_dobro(int a, int b);
int main(int argc, char *argv[])
{
    int x, y, res;
    printf("digite o primeiro numero:\n");
    scanf("%d", &x);
    printf("digite o segundo numero:\n");
    scanf("%d", &y);
    res = soma_dobro(x, y);
    printf("\nA soma do dobro dos numeros %d e %d eh %d\n", x, y, res);
    system("PAUSE");
    return 0;
}
int soma_dobro(int a, int b)
{
    int soma;
    a = 2 * a;
    b = 2 * b;
    soma = a + b;
    return soma;
}
