#include <stdio.h>

int main()
{
    int numero, fatorial = 1;

    printf("Digite um número: ");
    scanf("%d", &numero);

    if (numero < 0)
    {
        printf("O fatorial não está definido para números negativos.\n");
    }
    else
    {
        for (int i = numero; i > 1; i--)
        {
            fatorial *= i;
        }

        printf("O fatorial de %d é %d\n", numero, fatorial);
    }

    return 0;
}
