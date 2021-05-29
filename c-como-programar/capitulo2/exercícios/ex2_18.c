/*Compara dois inteiros fornecidos pelo usuário*/

#include <stdio.h>

int main(void)
{
    int num1;
    int num2;

    printf( "Entre com dois inteiros: \n" );

    scanf( "%d%d", &num1, &num2 );

    if ( num1 > num2 )
    {
        printf( "%d é maior que %d\n", num1, num2 );
    }

    if ( num2 > num1 )
    {
        printf( "%d é maior que %d\n", num2, num1 );
    }

    if ( num1 == num2 )
    {
        printf( "Esses números são iguais\n" );
    }

    return 0;
}