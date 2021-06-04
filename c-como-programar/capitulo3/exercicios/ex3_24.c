// Finding the biggest number

#include <stdio.h>

int main(void)
{
    int num, i, maior = 0;

    for (i = 0; i < 10; i++)
    {
        printf("Número: ");
        scanf("%i", &num);

        if (num > maior)
        {
            maior = num;
        }
    }

    printf("O maior número é %i", maior);

    return 0;
}