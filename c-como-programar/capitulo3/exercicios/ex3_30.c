#include <stdio.h>

int main(void)
{
    int linha = 10;

    while (linha >= 1)
    {
        int coluna = 1;

        while (coluna <= 10)
        {
            printf("%s", linha % 2 ? "<" : ">");
            coluna++;
        }

        linha--;
        printf("\n");
    }
}