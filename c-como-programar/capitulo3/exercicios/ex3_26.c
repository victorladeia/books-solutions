//tabular output

#include <stdio.h>

int main(void)
{
    printf("A\tA+2\tA+4\tA+6\n");

    for (int i = 3; i <= 15; i += 3)
    {
        printf("%i\t%i\t%i\t%i\n", i, i + 2, i + 4, i + 6);
    }

    return 0;
}