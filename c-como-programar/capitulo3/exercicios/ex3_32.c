#include <stdio.h>

int main(void)
{
    int x = 5, y = 8;

    if ( y == 8 )
    {
        if ( x == 5 )
        printf( "@@@@@\n" );
        else
        {
        printf( "#####\n" );
        }
    }
    printf( "$$$$$\n" );
    printf( "&&&&&\n\n" );

    if ( y == 8 )
    {
        if ( x == 5 )
        printf( "@@@@@\n\n" );
        else
        {
            printf( "#####\n" );
            printf( "$$$$$\n" );
            printf( "&&&&&\n" );
        }
    }

    if ( y == 8 )
    {
        if ( x == 5 )
        printf( "@@@@@\n" );
        else
        {
            printf( "#####\n" );
            printf( "$$$$$\n" );
        }
    }
    printf( "&&&&&\n\n" );

    x = 5;
    y = 7;

    if ( y == 8 )
    {
        if ( x == 5 )
        printf( "@@@@@\n" );
    }
    else
    {
        printf( "#####\n" );
        printf( "$$$$$\n" );
        printf( "&&&&&\n" );
    }

}