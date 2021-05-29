/*Recebe um inteiro de 5 dígitos e os separa por 3 espaços*/

#include <stdio.h>

int main (void)
{
    int num;

    printf( "Digite um número de cinco dígitos: \n");

    scanf( "%d", &num);

    printf( "%d   %d   %d   %d   %d\n", (num / 10000), ((num % 10000) / 1000), ((num % 1000) / 100), ((num %100)/ 10 ), (num % 10));

    return 0;
}