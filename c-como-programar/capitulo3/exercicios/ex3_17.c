#include <stdio.h>

int main (void)
{
    float litragem;
    float km;
    float litragemTotal = 0;
    float kmTotal = 0;

    printf( "Informe quantos litros abasteceu (-1 para terminar): ");
    scanf("%f", &litragem);

    if (litragem == -1)
    {
        printf( "Nenhum dado foi informado.\n");
    }

    else
    {
        printf( "Informe quantos km dirigiu: ");
        scanf( "%f", &km);

        while ( litragem != -1 )
        {
            printf ( "O consumo atual é de %f km/l\n", km / litragem);

            kmTotal += km;
            litragemTotal += litragem;

            printf( "Informe quantos litros abasteceu (-1 para terminar): ");
            scanf("%f", &litragem);

            if ( litragem == -1)
            {
                printf( "O consumo geral foi de %f km/l\n", kmTotal / litragemTotal);
                return 0;
            }

            printf( "Informe quantos km dirigiu: ");
            scanf( "%f", &km);

        }

    }

    return 0;
}