#include <stdio.h>

int main(void)
{
    int contador;
    int media;
    int nota;
    int total;

    contador = 1;
    total = 0;

    while (contador <= 10)
    {
        printf( "Digite a nota: " );
        scanf( "%d", &nota);
        total = total + nota;
        contador = contador + 1;
    }

    media = total / 10;

    printf( "Média da turma é %d\n", media );

    return 0;
}