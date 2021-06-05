#include <stdio.h>

int main (void)
{
    for (long i = 0; i <= 3000000000; i++)
    {
        if (i % 1000000000 == 0)
        {
            printf("%li\n", i);
        }
    }

    return 0;
}