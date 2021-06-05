#include <stdio.h>

int main(void)
{
    int n;
    do
    {
        printf( "Aresta: " );
        scanf( "%i", &n );
    }
    while ( n < 1 || n > 20);

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            printf( "*" );
        }

        printf("\n");
    }

    return 0;
}