#include  <stdio.h>

int main(int argc, char const *argv[])
{
    float valor;
    short Fpagamento;

    printf(" Digite o valor da compra:\n ");
    scanf("%f", &valor);
    printf("Digite a forma de pagamento 1 para a vista e 2 para  a prazo");
    scanf("%i", &Fpagamento);

    switch (Fpagamento)
    {
    case 1:
        
        valor *= 0.95;
        printf(" O valor total da compra e: %.2f\n", valor);
        break;
    
    case 2:
        valor *= 1.10;
        printf(" O valor total da compra e: %.2f\n", valor);
        break;
    default:
        printf("Forma de pagamento invalida");
        break;
    }

    return 0;
}

