//Finding the two biggest

#include <stdio.h>

int main(void)
{
    int maior1 = 0, maior2 = 0, num = 0;

    for (int i = 0; i < 10; i++)
    {
        printf("Number: ");
        scanf("%i", &num);

        if (num > maior2)
        {
            maior2 = num;
            
        }
    }

    printf("The biggest numbers are %i and %i.\n", maior1, maior2);

    return 0;
}