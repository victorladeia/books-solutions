#include <stdio.h>
int main(void)
{
    int contador = 0;
    int nota;
    int total = 0;

    float media;

    printf( "Digite a nota ou -1 para encerrar: " );
    scanf( "%d", &nota );

    while ( nota != -1 )
    {
        total = total + nota;
        contador = contador +1;

        printf( "Digite a nota ou -1 para encerrar: " );
        scanf( "%d", &nota );
    }

    if ( contador !=0 )
    {
        media = (float) total / contador;

        printf( "Média da turma é %.2f.\n", media);
    }
    else
    {
        printf( "Nenhuma nota foi informada.\n" );
    }


    return 0;
}