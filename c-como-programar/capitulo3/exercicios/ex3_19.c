#include <stdio.h>

int main(void)
{
    float venda, pagamento;

    do
    {
        printf("Informe a venda em reais (-1 para terminar): ");
        scanf("%f", &venda);

        if (venda == -1)
        {
            return 0;
        }

        pagamento = 200 + (0.09 * venda);

        printf("O pagamento é de: R$%.2f\n", pagamento);
    }
    while (venda != -1);

    return 0;
}