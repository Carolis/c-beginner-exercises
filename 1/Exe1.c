#include <stdio.h>

float calculo(float sal)
{
    float perc, valor;
    printf("Digite o percentual de aumento \n");
    scanf("%f", &perc);
    valor = sal * (perc / 100);
    return valor;
}

int main()
{
    float aumento, novo_sal, sal;
    printf("Digite o salario atual \n");
    scanf("%f", &sal);

    aumento = calculo(sal);
    novo_sal = (sal + aumento);

    printf("O novo salario sera: R$%.2f \n", novo_sal);

    return 0;
}