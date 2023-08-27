#include <stdio.h>

int main()
{
    int numero;
    int totalNumeros = 0;
    int numerosEntre10e20 = 0;

    while (1)
    {
        printf("Digite um número (<= 0 para finalizar): ");
        scanf("%d", &numero);

        if (numero <= 0)
        {
            break;
        }

        totalNumeros++;

        if (numero >= 10 && numero <= 20)
        {
            numerosEntre10e20++;
        }
    }

    if (totalNumeros > 0)
    {
        float porcentagem = (numerosEntre10e20 * 100.0) / totalNumeros;
        printf("%% entre 10 e 20: %.2f%%\n", porcentagem);
    }
    else
    {
        printf("Nenhum número válido foi digitado.\n");
    }

    return 0;
}
