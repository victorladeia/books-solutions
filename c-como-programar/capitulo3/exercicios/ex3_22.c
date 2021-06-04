//Showing the difference between

#include <stdio.h>

int main(void)
{
    int x = 3;

    printf("This is the value of x: %i\n", x);
    printf("This is the value of x pre-incremented: %i\n", --x);
    printf("This is the value of x after pre-incremented: %i\n", x);
    x = 3;
    printf("This is the value of x: %i\n", x);
    printf("This is the value of x post-incremented: %i\n", x--);
    printf("This is the value of x after post-incremented: %i\n", x);

    return 0;
}