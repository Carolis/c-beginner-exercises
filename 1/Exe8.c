#include <stdio.h>

int main()
{
    int a, b, resultado;
    printf("Digite os dois valores a serem comparados\n");
    scanf("%d", &a);
    scanf("%d", &b);
    if (a > b)
    {
        printf("A > B\n");
    }
    else if (b > a)
    {
        printf("A < B\n");
    }
    else
        printf("Os números são iguais\n");
}