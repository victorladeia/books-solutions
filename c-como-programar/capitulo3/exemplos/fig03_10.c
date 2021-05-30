#include <stdio.h>

int main(void)
{
    int aprovados = 0;
    int reprovados = 0;
    int contador = 1;
    int resultado;

    while ( contador <= 10 )
    {
        printf( "Forneça o resultado (1 = Aprovado, 2 = Reprovado): ");
        scanf( "%d", &resultado );

        resultado == 1 ? aprovados++ : reprovados++;

        contador++;

    }

    printf( "Aprovados = %d\nReprovados = %d\n", aprovados, reprovados);

    if ( aprovados > 8 )
    {
        printf( "Bônus ao Instrutor! \n");
    }

    return 0;
}