//Tabular output

#include <stdio.h>

int main(void)
{
    printf("N\t10*N\t100*N\t1000*N\n");

    for (int i = 1; i <= 10; i++)
    {
        printf("%i\t%i\t%i\t%i\n", i, i * 10, i * 100, i * 1000);
    }

    return 0;
}