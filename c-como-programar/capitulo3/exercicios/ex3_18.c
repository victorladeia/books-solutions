#include <stdio.h>

int main(void)
{
    //Variables Declaration
    int numConta;
    float saldoInicial, totalEncargos, totalCredito, limCredito, saldo = 0;



    do
    {
        printf("Informe o número da conta (-1 para terminar): ");
        scanf("%i", &numConta);

        if (numConta == -1)
        {
            return 0;
        }

        printf("Informe o saldo inicial: ");
        scanf("%f", &saldoInicial);

        printf("Informe o total de Encargos: ");
        scanf("%f", &totalEncargos);

        printf("Informe o total de créditos: ");
        scanf("%f", &totalCredito);

        printf("Informe o limite de crédito: ");
        scanf("%f", &limCredito);

        saldo = saldoInicial + totalEncargos - totalCredito;

        if (saldo > limCredito)
        {
            printf("Conta: %i\n", numConta);
            printf("Limite de Crédito: %.2f\n", limCredito);
            printf("Saldo: %.2f\n", saldo);
            printf("Limite de Crédito ultrapassado.\n");
        }



    }
    while (saldoInicial != -1);


    return 0;
}