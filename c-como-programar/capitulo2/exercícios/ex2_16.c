/*Pede ao usuário dois números e retorna
a soma, o produto, a diferença o quociente e
o módulo*/

#include <stdio.h>

int main(void)
{
    int num1;
    int num2;

    printf("Digite dois números: \n");

    scanf("%d%d", &num1, &num2);

    printf( "A soma é %d\n", num1 + num2 );

    printf( "O produto é %d\n", num1 * num2 );

    printf( "A diferença é %d\n", num1 - num2 );

    printf( "O quociente é %d\n", num1 / num2);

    printf( "O módulo é %d\n", num1 % num2);

    return 0;
}