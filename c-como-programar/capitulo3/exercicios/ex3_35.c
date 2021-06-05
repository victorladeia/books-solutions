#include <stdio.h>

int main(void)
{
    int dig1, dig2, dig4, dig5, num;

    printf("Entre com um número de 5 dígitos: ");
    scanf("%i", &num);

    dig1 = num / 10000;
    dig2 = (num % 10000) / 1000;
    dig4 = (num % 100) / 10;
    dig5 = num % 10;

    if (dig1 == dig5 && dig2 == dig4)
    {
        printf("É um palíndromo.\n");
    }
    else
    {
    printf("Não é um palíndromo.\n");
    }

    return 0;
}