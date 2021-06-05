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

        if (i == 1 || i == n || j == 1 || j == n)
        {
            printf("*");
        }
        else
        {
            printf(" ");
        }

        }

        printf("\n");
    }

    return 0;
}