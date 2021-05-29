#include <stdio.h>

int main(void)
{
    int inteiro1; //firt numer given by the user
    int inteiro2; // second number given by the user
    int soma; //

    printf("Type the first integer\n");
    scanf("%d", &inteiro1); // read a integer

    printf("Type the second integer\n");
    scanf("%d", &inteiro2);

    soma = inteiro1 + inteiro2;

    printf("The sum is %d", soma);

    return 0;
}