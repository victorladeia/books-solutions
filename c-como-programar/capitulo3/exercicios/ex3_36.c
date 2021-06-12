//Printing a decimal equivalent of a binary number
#include <stdio.h>

int main(void)
{
    int bin;
    int dec = 0;
    int i = 1;
    int j = 10;

    printf( "Entre com um número binário: " );
    scanf( "%i", &bin );

    do {

        dec +=  ( ( bin % j ) / ( j / 10 ) ) * i;

        i *= 2;
        j *= 10;

    }
    while ((bin % j) <= j);

    printf( "Decimal equivalente: %i\n", dec);

    return 0;
}

